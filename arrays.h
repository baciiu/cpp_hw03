
#ifndef CPP_HW03_ARRAYS_H
#define CPP_HW03_ARRAYS_H

#include <iostream>

using namespace std;

template<typename T>
class Arrays {
public:
  static void print(T array[], int n) {
    for (int i = 0; i < n; ++i) {
      cout << array[i] << " ";
    }
    cout<< "\n\n";
  }

  static void swap(T array[], int first, int second){
    T temp = array[second];
    array[second] = array[first];
    array[first] = temp;
  }
};

#endif // CPP_HW03_ARRAYS_H
