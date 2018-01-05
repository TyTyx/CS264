/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#ifndef DIE_H
#define DIE_H

class Die{
	public:
		Die(int);
		int roll();	
		int getValue();
		int getNumsides();
	private:
		int sides;
		int value;
};
#endif

