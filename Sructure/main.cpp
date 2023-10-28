#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Student
{
	string name;
	int mark1, mark2, mark3;
	int fnumber;
};
void main()
{
	const short maxStudents = 3;
	Student st1 = { "PIDOR", 1, 3, 5, 12341234 };
	Student st2 = {"SUCHARA", 3, 5 ,8, 24241242};
	Student st3 = {"PENS", 4,7,3,10114445};	
	Student students[maxStudents];
	students[0] = st1;
	students[1] = st2;
	students[2] = st3;



	cout << "------------------------------------------------" << endl;
	cout << "|No|F.number|Name                |Avg.M|Sch.SH |" << endl;
	for (int i = 0; i < maxStudents; i++)
	{
		int coutnet = i + 1;
		double avgMark = ( students[i].mark1 + students[i].mark2 + students[i].mark3 ) / 3.;
		double skolarMark= ( avgMark * 25 ) + ( ( avgMark * 25 ) * 10 / 100 );
		cout << "|" << setw(2) << setfill('0') << coutnet << "|" << setfill(' ');
		cout << setw(8) << students[i].fnumber << "|";
		cout << setw(20) << students[i].name << "|";
		cout << setw(5) << setiosflags(ios::fixed) << setprecision(2) << avgMark << "|";
		cout << setw(3) << setprecision(0) << skolarMark<< " LV." << "|" << endl;
	}
	cout << "------------------------------------------------" << endl;


}