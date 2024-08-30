#include"headers.h"
#include"big data.h"
#include"search machine.h"
int Stu_Log()
{
	bool alldone = true;
	int stuID;
	while (true) 
	{
		cout << "Enter your student code: ";
		cin >> stuID;
		if (SearchMachine(stuID, student))
		{
			cout << "Login Complete.Welcome!\n";
			return stuID;
		}
		else
		{
			cout << "Invalid input, try again\n";
			continue;
		}
	}
}