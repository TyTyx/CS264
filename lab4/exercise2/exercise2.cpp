/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include "MyComplex.h"
using namespace std;

int main(){
	MyComplex c1(5, 6), c2(7, 8), c3, c4, c5;
	cout << "The first number is: " << endl;
	c1.print();
	cout << "The second number is: " << endl;
	c2.print();

	c3 = c1.Add(c2);
	cout << "The sum of c1 + c2: " << endl;
	c3.print();

	c4 = c2.Subtract(c1);
	cout << "The subtraction of c2 - c1: " << endl;
	c4.print();

	c5 = c1.Multiply(c2);
	cout << "The multiplication of c1 and c2 is: " << endl;
	c5.print();
	
	return 0;
}
