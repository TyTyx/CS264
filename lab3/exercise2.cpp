/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

	int arraySize = 5;
	int arrayIndex = 0;

	double* arr = new double[arraySize];

	while(cin >> arr[arrayIndex] && arr[arrayIndex] != -1){

		arrayIndex++;

		if(arrayIndex >= arraySize){
			arraySize *= 2;

			double* temp = new double[arraySize];
			for(int i = 0; i < arrayIndex; i++){
				temp[i] = arr[i];
			}

		delete [] arr;

		arr = temp;
		}

	}
	
	cout << "Sequence reversed: " << endl;

	for(int j = arraySize-2; j >= 0; j--){
		
		cout << arr[j] << endl;
	}

	return 0;
}
