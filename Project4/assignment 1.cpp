/*Youssef Khalifa, 9/21/17, 2th
Assignment Name: Display Text*/

//Libraries
#include <iostream>
#include <conio.h>
//Namespace
using namespace std;
//function ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}
void main() {
	//display text 
	cout << "hello world!" << endl;
	pause(); //pause to see he displacement text
			 //return statment closes the conslole and ends the program return;
}
