#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;




int main()

{
	int n, temperature[3][7];


	cout << "  _________________________________________________________________________  " << endl;
	cout << " |                                                                         | " << endl;
	cout << " | Input the temperature of province A, B, and C on each day for this week | " << endl;
	cout << " |_________________________________________________________________________| " << endl;
	



	for (n = 0; n <= 6; n++)
	{
		cout << "  _______________________________________  " << endl;
		cout << " | Province A, Day# " << n + 1 << ":";
		cin >> temperature[0][n];
		cout << " |_______________________________________  " << endl;
	}



	for (n = 0; n <= 6; n++)
	{
		cout << "  _______________________________________  " << endl;
		cout << " | Province B, Day# " << n + 1 << ":";
		cin >> temperature[1][n];
		cout << " |_______________________________________  " << endl;
	}



	for (n = 0; n <= 6; n++)
	{
		cout << "  _______________________________________  " << endl;
		cout << " | Province C, Day# " << n + 1 << ":";
		cin >> temperature[2][n];
		cout << " |_______________________________________  " << endl;
	}







	cout << "\n" ;	
	cout << "\n" << " Displaying Temperatures for this week in each province:" << endl;
	cout << "\n" ;
	cout << "\n" ;
		
	
	for (n = 0; n <= 6; n++)
	{
		cout << " Province A, Day " << n + 1 << "=" << temperature[0][n] << "°" << endl;
	
	}


	cout << "\n" ;
	for (n = 0; n <= 6; n++)
	{
		cout << " Province B, Day " << n + 1 << "=" << temperature[1][n] << "°" << endl;

	}


	cout << "\n" ;
	for (n = 0; n <= 6; n++)
	{
		cout << " Province C, Day " << n + 1 << "=" << temperature[2][n] << "°" << endl;
	
	}
	cout << "\n" ;


	_getch();
	return 0;


}
