//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct employee
//{
//	string name;
//	int age;
//	double salary;
//	char gender;
//
//	void read_employee()
//	{
//			cout << "enter (name, age, salary, gender) of employee\n";
//			cin >> name >> age >> salary >> gender;
//	}
//
//	void print_employee()
//	{
//		cout << "name " << name << endl;
//		cout << "age " << age << endl;
//		cout << "salary " << salary << endl;
//		cout << "gwnder " << gender << endl;
//	}
//
//};
//bool compar_name(employee& a, employee& b)
//{
//	return a.name < b.name;
//}
//
//bool compar_salary(employee& a, employee& b)
//{
//	return a.salary > b.salary;
//}
//
//bool compar_name_salary(employee& a, employee& b)
//{
//	if (a.name != b.name)
//		return a.name < b.name;
//	return a.salary < b.salary;
//}
//
//void main()
//{
//	employee emp[3];
//
//	emp[0].read_employee();
//	emp[1].read_employee();
//	emp[2].read_employee();
//
//	sort(emp, emp + 3, compar_name);
//	print_employee();
//	
//	sort(emp, emp + 3, compar_salary);
//	print_employee();
//
//	sort(emp, emp + 3, compar_name_salary);
//	print_employee();
//}
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//int counter = 0;
//
//struct queue
//{
//	int arr[1000];
//
//	void shift_left()
//	{
//		for (int i = counter-1; i >= 0; i--)
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//
//	void shift_right()
//	{
//		for (int i = 0; i < counter; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//	}
//
//	void Add_Front()
//	{
//		shift_left();
//		cin >> arr[0];
//		counter++;
//	}
//
//	void Add_End()
//	{
//		cin >> arr[counter];
//		counter++;
//	}
//
//	void Remove_Front()
//	{
//		shift_right();
//		counter--;
//	}
//
//	void print()
//	{
//		for (int i = 0; i < counter; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//void main()
//{
//	queue my_queue;
//	int operation;
//
//	do
//	{
//		cout << "1) add end\n";
//		cout << "2) add front\n";
//		cout << "3) remove front\n";
//		cout << "4) print\n";
//		cout << "any other number to terminate\n";
//
//		cin >> operation;
//
//		switch (operation)
//		{
//			case 1:
//				my_queue.Add_End();
//				break;
//
//			case 2:
//				my_queue.Add_Front();
//				break;
//
//			case 3:
//				my_queue.Remove_Front();
//				break;
//
//			case 4:
//				my_queue.print();
//				break;
//
//			default:
//				break;
//		}
//	} while (operation < 5);
//}