/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Person{
	string name;
	int age;
};

int main(){

	string mystr;
	int n;
	cout << "Number of people to be inputted: " << endl;
	cin >> n;

	Person Per[n];

	for(int i = 0; i < n; i++){
		cout << "Enter name: " << endl;
		cin >> Per[i].name;
		cout << "Enter age: " << endl;
		cin >> Per[i].age;	
	}
	
	cout << "Print in reverse: " << endl;
	for(int j = n-1; j >= 0; j--){
		cout << Per[j].name;
		cout << " (" << Per[j].age << ")\n";
	}
	return 0;
}

