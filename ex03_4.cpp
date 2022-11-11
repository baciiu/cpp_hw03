#include "ex03_4.h"

#include <iostream>
using namespace std;


template <class T>
bool sanitizeBinaryInput( T input ){

    T input_copy = input;
    int digits = 0 ;

    while( input_copy != 0 ){

        if ( digits > 16 ){
            return 0;
        }
        if ( input_copy % 10 != 0 || input_copy % 10 != 1 ){
            return 0;
        }else{
            input_copy /= 10;
        }
        digits++;
    }
    return 1;
}

void Exercise34::run() {
    int number;
    cout << "Exercise 4" << endl;
    cout << "Insert a binary number: ";
    cin >> number;
    cout << endl;
    bool isOk = false;
    if (sanitizeBinaryInput(number)) {
        isOk = true;
    }
}
