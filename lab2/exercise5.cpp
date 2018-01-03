/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <string.h>

using namespace std;

void print_string_array(char str[]){
    int i = 0;
cout << "Using an array: ";
    while (str[i]!='\0'){
        cout << str[i];
        i++;
    }
cout << endl;
}

void print_string_ptr(char *str){
int j = 0;
	cout << "Using a pointer: ";
	while (j <= sizeof(str)){
        cout << *(str + j);
        j++;
    }
cout << endl;
}

int main(){

    char string1[50]; //declare char array
    cout << "Please enter the string: " << endl; // request user to input string
    cin >> string1;

    print_string_array(string1);
    print_string_ptr(string1);

return 0;
}
