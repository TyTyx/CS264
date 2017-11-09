#include <iostream>

using namespace std;

int main(){
	
	int x, y;
	cin >> x >> y;

	if(y % x == 0){
		cout << "They are multiples of each other." << endl;
	}else{
		cout << "They are NOT multiples of each other." << endl;
	}

return 0;
}
