/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>

using namespace std;

int a, b;

void my_swap(int x, int y){
	int temp;
	temp = x;
	a = y;
	b = temp;
}
int main(){
	cin >> a;
	cin >> b;
	cout << "Before swap: " << a << " " << b << endl;
	my_swap(a, b);
	cout << "After swap: " << a << " " << b << endl;
	return 0;
}
