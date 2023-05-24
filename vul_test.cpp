#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char **argv) {
    
    // buffer overflow
    volatile int important_data = 0;
    char user_input[10];

    gets(user_input);

    if(important_data != 0) {
        printf("Warning !!!, the 'important_data' was changed\n");
    } else {
        printf("the 'important_data' was not changed\n");
    }

    // pointer initialization
    int *ptr;
    if (nullptr != ptr) {
        *ptr = 5;
    }

    // format string vul
    printf ("This is a test text of number: %d ", 11);

    // incorrect type conversion
    string str;
    cout << "Please enter your string: \n";
    getline(cin, str);
    unsigned int len = str.length();
    if (len > -1) {
        cout << "string length is " << len << "which is bigger than -1 " <<std::endl;
    } else {
        cout << "string length is " << len << " which is less than -1 " <<std::endl;
    }
    return 0;
}