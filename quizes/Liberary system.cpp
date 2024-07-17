
#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

int const MaxBooks = 1000;
int const MaxUsers = 50;
int const MaxBookBorrowed = 10;
int BookCount = 0;
int UserCount = 0;

struct client
{
	string name;
	int id;
	int BorrowedBooks[MaxBookBorrowed] = {0};
	int BorrowedCount=0;
}users[MaxUsers];

struct books
{
	string title;
	int code;
	int quantity;
	int TotalBorrowed = 0;
	string check;
}book[MaxBooks];

bool compar_title(books& a, books& b)
{
	return a.title < b.title;
}

bool compar_code(books& a, books& b)
{
	return a.title > b.title;
}

void Add_Book()
{
	cout << "enter (id, name, quantity)\n";
	cin >> book[BookCount].code >> book[BookCount].title >> book[BookCount].quantity;
	BookCount++;
} 

void Search_Book_By_prefix()
{
	string prefix; cin >> prefix;
	int len = prefix.length();
	for (int i = 0; i < BookCount; i++)
	{
		string bookTitlte = book[i].title;
		bool ismatch = 1;
		for (int j = 0; j < len; j++)
		{
			if (bookTitlte[j] != prefix[j])
			{
				ismatch = 0;
				break;
			}
		}
		if (ismatch)
		{
			cout << book[i].code << " " << book[i].title << " " << book[i].quantity << "\n";
		}
	}
}

void Print_Liberary_By_Id()
{
	sort(book, book + (BookCount - 1), compar_code);
	for (int i = 0; i < BookCount; i++)
	{
		cout << book[i].code << " " << book[i].title << " " << book[i].quantity << " " << book[i].TotalBorrowed << "\n";
	}
}

void Print_Liberary_By_title()
{
	sort(book, book + (BookCount - 1), compar_title);
	for (int i = 0; i < BookCount; i++)
	{
		cout << book[i].code << " " << book[i].title << " " << book[i].quantity << " " << book[i].TotalBorrowed << "\n";
	}
}

void Add_User()
{
	cout << "Enter your name & national id\n";
	cin >> users[UserCount].name >> users[UserCount].id;
	UserCount++;
}

bool User_Exist(int userID,int& userindex)
{
	bool Exist = 0;
	for (int i = 0; i < MaxUsers; i++)
	{
		if (userID == users[i].id)
		{
			Exist = 1;
			userindex = i;
			break;
		}
	}
	return Exist;
}

bool Book_Exist(int bookCode,int& bookindex)
{
	bool Exist = 0;
	for (int i = 0; i < MaxBooks; i++)
	{
		if (bookCode == book[i].code)
		{
			Exist = 1;
			bookindex = i;
			break;
		}
	}
	return Exist;
}

void User_Borrow_Book()
{
	int userID1, bookCode1, userindex1 = 0, bookindex1 = 0;
	cout << "Enter user id\n";
	cin >> userID1;
	if (User_Exist(userID1, userindex1))
	{
		cout << "Enter book code\n";
		cin >> bookCode1;
		if (Book_Exist(bookCode1, bookindex1))
		{
			users[userindex1].BorrowedBooks[users[userindex1].BorrowedCount] = book[bookindex1].code;
			users[userindex1].BorrowedCount++;
			book[bookindex1].quantity--;
			book[bookindex1].TotalBorrowed++;
			return;
		}
		else
		{
			cout << "invalid input(book code not found)\n";
			return;
		}
	}
	else
	{
		cout << "invalid input(user id not found)\n";
		return;
	}
}

void User_Return_Book()
{
	int userID2, bookCode2, userindex2 = 0, bookindex2 = 0;
	cout << "Enter user id\n";
	cin >> userID2;
	if (User_Exist(userID2, userindex2))
	{
		cout << "Enter book code\n";
		cin >> bookCode2;
		if (Book_Exist(bookCode2, bookindex2))
		{
			users[userindex2].BorrowedBooks[users[userindex2].BorrowedCount] =0;
			users[userindex2].BorrowedCount--;
			book[bookindex2].quantity++;
			book[bookindex2].TotalBorrowed--;
			return;
		}
		else
		{
			cout << "invalid input(book code not found)\n";
			return;
		}
	}
	else
	{
		cout << "invalid input(user id not found)\n";
		return;
	}
}

void Print_Users()
{
	for (int i = 0; i < UserCount; i++)
	{
		cout << users[i].name << " " << users[i].id << "\n";
	}
}

void Print_User_Borrow()
{
	int bookcode;
	cout << "Enter book code: ";
	cin >> bookcode;
	for (int i = 0; i < UserCount; i++)
	{
		for (int j = 0; j < MaxBookBorrowed; j++)
		{
			if (users[i].BorrowedBooks[j] == bookcode)
			{
				cout << users[i].name << "\n";
				break;
			}
		}
	}
}

void main()
{
	int operation;
	while (true)
	{
		cout << "*************************************************************************\n"
			 << "Liberary Menu\n"
			 << "1)  add book\n"
			 << "2)  search books by prefix\n"
			 << "3)  print who borrowed book by name\n"
			 << "4)  print liberary by id\n"
			 << "5)  print liberary by name\n"
			 << "6)  add user\n"
			 << "7)  user borrow book\n"
			 << "8)  user return book\n"
			 << "9)  print users\n"
			 << "10) exit\n";
		cin >> operation;
		switch (operation)
		{
		
		case 1:
			Add_Book();
			break;

		case 2:
			Search_Book_By_prefix();
			break;

		case 3:
			Print_User_Borrow();
			break;

		case 4:
			Print_Liberary_By_Id();
			break;

		case 5:
			Print_Liberary_By_title();
			break;

		case 6:
			Add_User();
			break;

		case 7:
			User_Borrow_Book();
			break;

		case 8:
			User_Return_Book();
			break;

		case 9:
			Print_Users();
			break;

		default:
			break;
		}
	}
}