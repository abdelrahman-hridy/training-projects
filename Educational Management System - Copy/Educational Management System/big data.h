/*the place where all data are stored*/
#include"headers.h"
extern struct assignments
{
	string holder;
	string question;
	vector <pair <int, string>> answer;
};
extern struct cources
{
	string name;
	int code;
	vector <assignments> assignment;
};
extern vector <cources> cource;
extern struct students
{
	string name;
	int code;
	vector <int> cource_codes;
	vector <pair <int, string>> grade_report;
};
extern vector <students> student;

const int enrolment_year = 202400000;/*additional 5 digits for special key*/
extern int Stu_Num = 0;
extern int stu_index = 0;
