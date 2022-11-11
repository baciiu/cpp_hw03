#include "ex03_1.h"

#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T array[], int n){

    for( int i = 0 ; i < n-1; ++i ){
        for( int j = 0 ; j < n-i-1 ; ++j ){

            if( array[j] > array[j+1] ){
                T temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}
template<typename T>
void printArray(T array[], int n){
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout<< "\n\n";
}

template<typename T>
void swap(T array[], T first, T second){
    T temp = array[second];
    array[second] = array[first];
    array[first] = temp;
}



void Exercise31::run(){
 cout << "Exercise 1" << endl;
 int array[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 };
 int n = sizeof(array) / sizeof(int);

    printArray(array,n);
    bubbleSort(array,n);
    printArray(array,n);

}
