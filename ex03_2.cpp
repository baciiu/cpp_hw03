#include "ex03_2.h"

#include <iostream>

using namespace std;

// Write a program to enter and display
// two data members of a class using class template.
// Define the member functions outside the class.

template <class K, class V>
class Pair {
private:
    K key;
    V value;

public:
    void enter();
    void display();
};

template <class T, class V>
void Pair<T, V>::enter() {
    cout << "key (" << typeid(key).name() << "): ";
    cin >> key;
    cout << "value (" << typeid(value).name() << "): ";
    cin >> value;
}

template <class K, class V>
void Pair<K, V>::display() {
    cout << "{" << key << ": " << value << "}" << endl;
}


void Exercise32::run(){
    cout << "Exercise 2" << endl;

    Pair<int, double> pair1 = {};
    Pair<string, float> pair2 = {};
    Pair<long, short> pair3 = {};

    cout << endl << "Enter pair1:" << endl;
    pair1.enter();
    cout << "You have entered: ";
    pair1.display();

    cout << endl << "Enter pair2:" << endl;
    pair2.enter();
    cout << "You have entered: ";
    pair2.display();

    cout << endl << "Enter pair3:" << endl;
    pair3.enter();
    cout << "You have entered: ";
    pair3.display();
}