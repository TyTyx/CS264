#include <iostream>

using namespace std;

int main(){

double beginBal, charges, credits, limit;
	while(true){
		int account;
		cout << "Enter an account number: " << endl;
		cin >> account;
		
		if(account != -1){
			//double = beginBal, charges, credits, limit;
			cout << "Enter a beginning balance: " << endl;
			cin >> beginBal;

			cout << "Enter total of all items charged: " << endl;
			cin >> charges;

			cout << "Enter total credits applied to account: " << endl;
			cin >> credits;

			cout << "Enter credit limit: " << endl;
			cin >> limit;

			double qll = beginBal + charges - credits;

			if(qll > limit){
				cout << "Account: " << account << endl;
				cout << "Credit limit: " << limit << endl;
				cout << "Credit limit exceeded." << endl;
			}else{
				cout << "New balance: " << qll << endl;
			}
				
		}
		
		else{
			cout << "Goodbye!" << endl;
			break;
		}
	}
return 0;
}
