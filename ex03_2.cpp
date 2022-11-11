#include "ex03_2.h"

#include <iostream>

using namespace std;

template <class T>
class Number {
private:
    T number;

public:
    Number(T n) : number(n) {}   // constructor

    T getNumber() {
        return number;
    }
};


void Exercise32::run(){
cout << "Exercise 2" << endl;

    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNumber() << endl;
    cout << "double Number = " << numberDouble.getNumber() << endl;

}