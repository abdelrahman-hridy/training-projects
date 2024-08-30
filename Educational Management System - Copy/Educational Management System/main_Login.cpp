#include"headers.h"
#include"student signup.h"
#include"Student Login.h"

void main()
{
	/*--------PRE_INSTALED DATA---------*/
	cources cource1, cource2, cource3;
	assignments assignment_darkarts_1, assignment_darkarts_2;
	assignments assignment_potions_1, assignment_potions_2;
	assignments assignment_quidditch_1, assignment_quidditch_2;
	//   cource 1
	cource1.name = "Defend against th dark arts-1";
	cource1.code = 111;
	assignment_darkarts_1.question = "Q1)Name the three unforgivable spells: ";
	assignment_darkarts_2.question = "Q2)how to act against a death eater ?: ";
	cource1.assignment.push_back(assignment_darkarts_1);
	cource1.assignment.push_back(assignment_darkarts_2);
	//   cource 2
	cource2.name = "potions and medicine-1";
	cource2.code = 222;
	assignment_potions_1.question = "Q1)how to make a polly juice ?: ";
	assignment_potions_2.question = "Q2)how to make a luck potion ?: ";
	cource2.assignment.push_back(assignment_potions_1);
	cource2.assignment.push_back(assignment_potions_2);
	//   cource 3
	cource2.name = "Quidditch and aviation-1";
	cource2.code = 333;
	assignment_quidditch_1.question = "Q1)what is the maximum velocity of a prom stick flying in an acceleration of 27 m/s^2 in a time interval of 20 second, and tell if the rider is breaking the law of max speed limit for Muggle areas(max speed is 55 km/h) ?: ";
	assignment_quidditch_2.question = "Q2)what is the material prom sticks are made of ?: ";
	cource2.assignment.push_back(assignment_quidditch_1);
	cource2.assignment.push_back(assignment_quidditch_2);
	/*---------START OF PROGRAM---------*/
	cout << "Welcome to Hogwarts Educational Management System\n";
	cout << "1) student\n2) professor\n";
	int choice1; cin >> choice1;
	switch (choice1)
	{
		case 1:
			cout << "1) Signin\n2) Login\n";
			int choice2; cin >> choice2;
			switch (choice2)
			{
				case 1:
					student.push_back(Stu_Sin());
					cout << "Welcome (STU_NAME/#324), you are loged in\n";
					cout << "1)register in a cource\n";
					cout << "2)logout\n";
					int choice4; cin >> choice4;
					switch (choice4)
					{
					case 1:

						break;
					case 2:

						break;
					default:
						break;
					}
				break;

				case 2:
					int stuIndex = Stu_Log();
					cout << "Welcome (STU_NAME/#324), you are loged in\nMake a choice\n\n";
					cout << "1)register in a cource\n";
					cout << "2)view my cources\n";
					cout << "3)grades report\n";
					cout << "4)logout\n";
					int choice3; cin >> choice3;
					switch (choice3)
					{
					case 1:
						
						break;
					case 2:

						break;
					case 3:

						break;
					case 4:

						break;
					default:
						break;
					}
				break;
				default:
				break;
			}
		break;

		case 2:

			break;
	}
}
