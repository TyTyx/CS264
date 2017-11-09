#include <iostream>

using namespace std;

int main(){

	int count = 0;
	for(int i = 1; i < 5000; i++){
		for(int j = 2; j <= i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count == 1){
			cout << i << endl;
		}
		count = 0;
	}
return 0;
}
