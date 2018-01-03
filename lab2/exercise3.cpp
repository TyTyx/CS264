/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand((int)time(0)); // Makes the number truely reandom.
	int roll = 0;
	cout << "How many times would you like to roll: " << endl;
	cin >> roll;
	
	int diceA, diceB;
	int sum = 0;
	int array[11];
	// Fill array with 0's.
	for(int i = 0; i < 11; i++){
		array[i] = 0;
	}

	for(int j=0; j<roll; j++){
		diceA = (rand() % 6 + 1);
		diceB = (rand() % 6 + 1);
		sum = diceA + diceB;
		array[sum-2]++;
		cout << "Sum: " << sum << endl;
	}
	
	for(int k = 2; k < 13; k++){
		double percent = double(array[k-2])/double(roll) * 100;
		cout << k << " appeared " << percent << "%." << endl;
	}

	return 0;
}
