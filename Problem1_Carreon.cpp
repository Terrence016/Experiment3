#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;




int main()
{
	int n, totalnumber, lowestnumber, highestnumber, average, number[10];
	
	
	cout << "  ________________________________  " << endl;
	cout << " |                                | " << endl;
	cout << " |   Enter 10 values of integer   | " << endl;
	cout << " |________________________________| " << endl;


	for (n = 0; n <= 9; n++)
	{
		cin >> number[n];
	}

	 lowestnumber = number[0];
	 highestnumber = number[0];
	 totalnumber = 0;
	 average = 0;



	 for (n = 0; n <= 9; n++)
	 {
		 if (lowestnumber >= number[n])
			 lowestnumber = number[n];
	 }



	for (n = 0; n <= 9; n++)
	{
		if (highestnumber <= number[n])
			highestnumber = number[n];
	}
	
	
	
	 for (n = 0; n <= 9; n++)
	 {
		 totalnumber += number[n];
	 }



	 for (n = 0; n <= 9; n++)
	 {
		 average += number[n];
	 }
	 average /= 10;




	 	
	cout << "  ________________________________________  " << endl;
	cout << " |                                        | " << endl;
	cout << " |  The lowest integer is:" << lowestnumber  << endl;
	cout << " |*______________________________________*| " << endl;
	cout << " |*                                      *| " << endl;
	cout << " |  The highest integer is:" << highestnumber << endl;
	cout << " |*______________________________________*| " << endl;
	cout << " |*                                      *| " << endl;
	cout << " |  The total value is equal to:" << totalnumber  << endl;
	cout << " |*______________________________________*| " << endl;
	cout << " |*                                      *| " << endl;
	cout << " |  The average is equal to:" << average  << endl;
	cout << " |________________________________________| " << endl;


	_getch();
	return 0;

}
