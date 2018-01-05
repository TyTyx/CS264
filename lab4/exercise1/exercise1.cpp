/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "die.h"

using namespace std;

int main(){
	int dieSides1 = 0;
	int dieSides2 = 0;

	cout << "How many sides for Die 1?" << endl;
	cin >> dieSides1;
	cout << "How many sides for Die 2?" << endl;
	cin >> dieSides2;

	if(dieSides1 < 4){
		dieSides1 = 6;
	}
	if(dieSides2 < 4){
		dieSides2 = 6;
	}

	Die die1(dieSides1);
	Die die2(dieSides2);

	int size = dieSides1 + dieSides2;
	int diceArray[size];
	for(int x = 0; x < size; x++){
		diceArray[x] = 0;
	}
	
	srand((int)time(0));

	int times = 0;
	cout << "How many times would you like to roll?" << endl;
	cin >> times;

	int totalValue = 0;
	for(int y = 0; y < times; y++){
		int roll1 = die1.roll();
		int roll2 = die2.roll();
		int totalValue = roll1 + roll2;
	
		diceArray[totalValue]++;
	}
	for(int z = 2; z <= size; z++){
		cout << z << " appeared " << (double((diceArray[z-2])/double(times)))*100 << " % " << endl;
	}
}

