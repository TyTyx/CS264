#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;

	int sum = x + y+ z;
	cout <<"Sum: " << sum << endl;
	float average = sum / 3;
	cout << "Average: " << average << endl;
	int product = x * y * z;
	cout << "Product: " << product << endl;
	
	if(x<y and z){
		cout << x << " is the smallest." << endl;
	}
	else{ 
		if(y<z and x){
			cout << y << " is the smallest." << endl;
		}
		else{
			cout << z << " is the smallest." << endl;
		}
	}

	if(x>y and z){
			cout << x << " is the largest." << endl;
		}
		else{ 
			if(y>z and x){
				cout << y << " is the largest." << endl;
			}
			else{
				cout << z << " is the largest." << endl;
			}
		}
return 0;
}
