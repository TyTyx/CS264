#include <iostream>
#include <string>
#include "customers.h"

using namespace std;

int main(){

	customer customer1 = createList("Ben");
	insertName(customer1, "Toby");
	insertName(customer1, "Jack");

	print_customers(*customer1);

	return 0;
}