/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/


#pragma once
using namespace std;
struct customer{

	string name;
	customer *next;
};

void print_customers(customer &head);
