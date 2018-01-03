/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>

using namespace std;

int gcd(int x, int y){
	int temp;
	for(int i = 1; i <= y && i <= x; i++){
	
	if((x%i==0) && (y%i==0))
		temp = i;
		
	}
return temp;
}

int main(){

	int a, b;
	cin >> a;
	cin >> b;
	cout << gcd(a, b) << endl;
	return 0;
}
