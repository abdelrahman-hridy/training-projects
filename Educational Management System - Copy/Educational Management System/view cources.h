#include"headers.h"
#include"big data.h"
void Cource_View(int StuIndex)
{
	int YourCode;
	string YourAnswer;
	pair <int, string> ans;
	int num = 0;
	for (int i = 0; i < student[StuIndex].cource_codes.size(); i++)
	{
		for (int j = 0; j < cource.size(); j++)
		{
			if (student[StuIndex].cource_codes[i] == cource[j].code)
			{
				num++;
				cout << num << ")" << cource[j].name << " / " << cource[j].code << "\n";
			}
		}
	}
	int choice1;
	cout << "Enter the code of your cource: ";
	cin >> choice1;
	int choice2;
	cout << "1)submit solutions\n";
	cout << "2)unregister from cource\n";
	cout << "Enter your choice: ";
	cin >> choice2;
	switch (choice2)
	{
		case 1:
			int i = 0;
			for (; i < cource.size(); i++)
			{
				if (choice1 == cource[i].code)
				{
					for (int j = 0; j < cource[i].assignment.size(); j++)
					{
						cout << "assignment " << (j + 1) << "\n";
					}
					break;
				}
			}
			int choice3;
			cout << "chose an assignment: ";
			cin >> choice3;
			cout << "-------------------------------------\n";
			cout << "enter student code: ";
			cin >> YourCode;
			cout << "enter your answer: \n";
			cin >> YourAnswer;
			ans.first = YourCode; ans.second = YourAnswer;
			cource[i].assignment[choice3 - 1].answer.push_back(ans);
			break;
		case 2:
			for (int i = 0; i < student[StuIndex].cource_codes.size(); i++)
			{
				if (choice1 == student[StuIndex].cource_codes[i])
				{
					student[StuIndex].cource_codes[i].pop();
					break;
				}
			}
			break;
	default:
		break;
	}
}