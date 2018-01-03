
/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
using namespace std;

int main(){

cout << "How many numbers would you like in the sequence?" << endl;
int x;
cin >> x;

double arr[x];

for(int i = 0; i < x; i++){
cout << "Enter the numbers in the sequence: " << endl;
cin >> arr[i];
}

for(int j = x-1; j >= 0; j--){
cout << "Sequence reversed: " << endl;
cout << arr[j] << endl;
}

return 0;
}

