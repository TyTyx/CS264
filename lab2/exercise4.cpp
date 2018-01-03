/*
	Student name: Tylor Kelleghan
	Student number: 15414592
*/

#include <iostream>
#include <string.h>
using namespace std;

int my_string_len(char str[]){ // function to calculate length of a chracter array
    int len = 0;
    int i = 0;
    while (str[i]!='\0'){
        len = len +1;
        i++;
    }
    return len;
}

void my_string_cat(char dest[], char src[], int dest_size){

    int strlen2 = my_string_len(dest);
    int strlen1 = my_string_len(src);
    char fullStr [20];
    int fullSize = sizeof(fullStr);

    if (dest_size<=fullSize){  // check if two char arrays will fit into char array 'fullStr'
        strcat(fullStr, dest);
        strcat(fullStr, src);
        cout << "String 1 length: " << strlen1 << endl;
        cout << "String 2 length: " << strlen2 << endl;
        cout << "Combined string length: " << dest_size << endl;
        string sFullStr = fullStr;
        cout << fullStr << endl;
    }
    else{     // if combined string lengthd exceed capacity of destination array 'fullStr'
        cout << "String 1 length: " << strlen1 << endl; // print out string lengths
        cout << "String 2 length: " << strlen2 << endl;
        cout << "ERROR: The strings can not be joined!" << endl; // print error message
        cout << "The combined length of the first and second string exceed the capacity " << endl;
        cout << "of the destination array which has a limit of only 20 characters." << endl;
    }
}
int main(){

    char string1[20]; //declare 2 char arrays
    char string2[20];
    cout << "Please enter the first string: " << endl; // request user to input 2 strings
    cin >> string1;
    cout << "Please enter the second string: " << endl;
    cin >> string2;

    int strlen1= my_string_len(string1); //calculate length of each string
    int strlen2= my_string_len(string2);
    // calculate total length of two strings
    int concatLen = strlen1+strlen2;
    //pass 2 x strings and their combined length to 'my_string_cat function'    
    my_string_cat(string2, string1, concatLen);
    return 0;
}


