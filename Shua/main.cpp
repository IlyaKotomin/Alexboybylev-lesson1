#include <iostream>
#include <math.h>

using namespace std;
void main()
{


	
	double a;
	int selection;
	cout << "enter num: ";
	cin >> a;
тут_текст: 
	cout << "ceil 1" << endl;
	cout << "floor 2" << endl;
	cout << "round 3" << endl;
	cout << "trunc 4" << endl;
	cin >> selection;
	
	cout << "answer: ";

	switch (selection)
	{
		case 1:
			cout << ceil(a) << '\n';
			break;
		case 2:
			cout << floor(a) << '\n';
			break;
		case 3:
			cout << round(a) << '\n';
			break;
		case 4:
			cout << trunc(a) << '\n'; 
			break;
		
		default:
			cout << "error\n";
			break;
		
	}
	system("PAUSE");
	system("CLS");
	
	goto тут_текст;


}