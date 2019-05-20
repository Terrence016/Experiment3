#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;





int main()


{
	int a, b, c;
	char abc[2][1000];

	cout << "           ___________________________________  " << endl;
	cout << "          |                                   | " << endl;
	cout << "          |   Enter any characters you want   | " << endl;
	cout << "          |___________________________________| " << endl;
	cout << "\n" ;	
	cout << "              : "; cin >> abc[0];
	cout << "\n" ;	


	for (a = 0; abc[0][a] != '\0'; a++)
	{
		c = a;
	}
	b = c;
		abc[1][0] = abc[0][c];




	for (a = 0; a != c; a++, b--)
	{
		abc[1][b] = abc[0][a];
	}
		abc[1][c + 1] = '\0';

	cout << "\n" ;	
	cout << "  __________________________________________________________ " << endl;
	cout << "                                                             " << endl;
	cout << "    Reversed: " << abc[1] << endl;
	cout << "  __________________________________________________________ " << endl;
		
	cout << "\n" ;	
	
	
	cout << "\n" ;	
	cout << "  __________________________________________________________ " << endl;
	cout << "                                                             " << endl; 
	cout << "              The length of the word is: " << c + 1 << endl;
	cout << "  __________________________________________________________ " << endl;
		
	cout << "\n" ;	

	cout << "\n" ;	
	cout << "  __________________________________________________________ " << endl;
	cout << " |                                                          |" << endl; 
	cout << " |               Thank you for trying :D                    |" << endl;
	cout << " |__________________________________________________________|" << endl;
		
	cout << "\n" ;	

	_getch();
	return 0;

}
