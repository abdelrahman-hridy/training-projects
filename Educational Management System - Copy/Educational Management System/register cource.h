#include"headers.h"
#include"big data.h"

void register_cource(int StuIndex)
{
	int choice;
	for (int i = 0; i < cource.size(); i++)
	{
		cout << (i + 1) << ")" << cource[i].name << " / " << cource[i].code << "\n";
	}
	cout << "Enter the cource code you wish to add: ";
	cin >> choice;
	for (int i = 0; i < cource.size(); i++)
	{
		if (choice == cource[i].code)
		{
			student[StuIndex].cource_codes.push_back(cource[i].code);
			break;
		}
	}
}