//
//#include<iostream>
//using namespace std;
//
//struct hospital
//{
//	string patient;
//	bool status;
//}list[20][5];
//
//int counter[20] = {0};
//
//void ShiftRight(int row)
//{
//	for (int i = 4; i >= 0; i--)
//	{
//		list[row - 1][i + 1] = list[row - 1][i];
//	}
//}
//
//void ShiftLeft(int row)
//{
//	for (int i = 1; i < 5; i++)
//	{
//		list[row-1][i - 1] = list[row-1][i];
//	}
//}
//
//void add()
//{
//	int spec; string name; bool statis;
//	cout << "enter spec,name and statis\n";
//	cin >> spec >> name >> statis;
//	int pos = counter[spec-1];
//	if (counter[spec - 1] == 5)
//	{
//		cout << "sorry, no available seets in this spec\n";
//		return;
//	}
//	if (statis == 0)
//	{
//		list[spec - 1][pos].patient = name;
//		list[spec - 1][pos].status = statis;
//		counter[spec - 1]++;
//		return;
//	}
//	else 
//	{
//		ShiftRight(spec);
//		list[spec - 1][0].patient = name;
//		list[spec - 1][0].status = statis;
//		counter[spec - 1]++;
//		return;
//	}
//}
//
//void print()
//{
//	int row = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		if (counter[i] == 0)
//		{
//			row++;
//			continue;
//		}
//		else
//		{
//			cout << "there are " << counter[i] << " patients int spec " << row + 1 << "\n";
//			for (int j = 0; j < counter[i]; j++)
//			{
//				cout << list[row][j].patient << " ";
//				if (list[row][j].status)
//					cout << "urgent\n";
//				else
//					cout << "normal\n";
//			}
//		}
//	}
//}
//
//void GetNextPatient()
//{
//	int spec;
//	cout << "pick a spec\n";
//	cin >> spec;
//
//	if (counter[spec-1] == 0)
//	{
//		cout << "line is empty, doc\n";
//		return;
//	}
//	else
//	{
//		cout << "go to the doc at room (" << spec << ")\n";
//		ShiftLeft(spec);
//		counter[spec]--;
//	}
//}
//
//void main()
//{
//	int operation = 0;
//	while (operation != 4)
//	{
//		cout << "enter your choice\n"
//			<< "1) add new patient\n"
//			<< "2) print all patient\n"
//			<< "3) get next patient\n"
//			<< "4) exit\n";
//		cin >> operation;
//		switch (operation)
//		{
//			case 1:
//				add();
//				break;
//
//			case 2:
//				print();
//				break;
//
//			case 3:
//				GetNextPatient();
//				break;
//
//			default:
//				break;
//		}
//	}
//}