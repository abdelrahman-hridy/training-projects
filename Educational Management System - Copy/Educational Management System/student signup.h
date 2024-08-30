#include"headers.h"
#include"big data.h"
students Stu_Sin()
{
	string name;
	int national_ID;
	int stuID;
	cout << "Welcome, new freshman.\nEnter your data\n";
	cout << "Name: "; cin >> name;
	while(true)
	{
		cout << "National ID: "; cin >> national_ID;
		string* ptr = new string(to_string(national_ID));
		if (ptr->size() != 14)
		{
			cout << "invalid national ID, try again\n";
			delete ptr;
			ptr = NULL;
			continue;
		}
		else
		{
			delete ptr;
			ptr = NULL;
			break;
		}
	}
	/*---------collage ID creation process---------*/
	int last_5_digits = national_ID % 100000;
	string digits = to_string(last_5_digits);
	//implement Fisher & Yates Algorithm
	for (int i = digits.size() - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(digits[i], digits[j]);
	}
	int rand_last_5_digits = std::stoi(digits);
	stuID = (enrolment_year + rand_last_5_digits);
	/*---------storing data of student---------*/
	students load; load.name = name; load.code = stuID;
	Stu_Num++;
	return load;
}