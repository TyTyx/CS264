/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#pragma once
using namespace std;

class  MyComplex{
protected:
	double real;
	double imaginary;

public:
	MyComplex();
	MyComplex(double, double);
	double getReal();
	void setReal(double);
	double getImage();
	void setImage(double);

	MyComplex Add(const MyComplex &z);
	MyComplex Subtract(const MyComplex &z);
	MyComplex Multiply(const MyComplex &z);

	void print();
	
};