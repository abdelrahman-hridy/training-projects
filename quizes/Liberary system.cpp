
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int const MaxBooks = 1000;
int const MaxUsers = 50;
//int const MaxBorrowedBerUser = 10;
int BookCount = 0;

struct client
{
	string name;
	int id;
	string borrowed_books[10];
	int borrowed_count=0;
}users[MaxUsers];

struct books
{
	string title;
	int code;
	int quantity;
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
	cin >> book[BookCount++].code >> book[BookCount++].title >> book[BookCount++].quantity;
	BookCount++;
} 

void Search_Book_By_Name()
{
	string name;
	int sample1 = 0; int i = 0;
	bool intact = 1;
	bool exist = 1;
	cout << "enter book name\n";
	cin >> name;
	while (intact)
	{
		if (name[i] != ' ')
		{
			sample1++;
			i++;
		}
		else
			intact = 0;
	}
	for (int i = 0; i < sample1; i++)
	{
		for (int j = 0; j < BookCount; j++)
		{
			if (name[i] == book->title[j])
			{
				book->check[j] = 'y';
				continue;
			}
			else
			{
				book->check = 'n';
				exist = 0;
				break;
			}
		}
		if (exist)
			break;
	}
}

void Print_Liberary_By_Id()
{
	sort(book, book + (BookCount - 1), compar_code);
	for (int i = 0; i < BookCount; i++)
	{
		cout << book[i].code << " " << book[i].title << " " << book[i].quantity << "\n";
	}
}

void Print_Liberary_By_title()
{
	sort(book, book + (BookCount - 1), compar_title);
	for (int i = 0; i < BookCount; i++)
	{
		cout << book[i].code << " " << book[i].title << " " << book[i].quantity << "\n";
	}
}

void main()
{
	int operation;
	while (true)
	{
		cout << "Liberary Menu\n"
			 << "1) add book\n"
			 << "2) search books by prefix\n"
			 << "3) print who borrowed book by name\n"
			 << "4) print liberary by id\n"
			 << "5) print liberary by name\n"
			 << "6) add user\n"
			 << "7) user borrow book\n"
			 << "8) user return book\n"
			 << "9) print users\n"
			 << "10) exit\n";
		cin >> operation;
		switch (operation)
		{
		
		case 1:
			Add_Book();
			break;

		//case 2:
		//	book->Add_Book();
		//	break;

		//case 3:
		//	book->Add_Book();
		//	break;

		case 4:
			Print_Liberary_By_Id();
			break;

		case 5:
			Print_Liberary_By_title();
			break;

		/*case 6:
			Add_Book();
			break;

		case 7:
			Add_Book();
			break;

		case 8:
			Add_Book();
			break;

		case 9:
			Add_Book();
			break;*/

		default:
			break;
		}
	}
}