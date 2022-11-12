#ifndef CPP_HW03_BUBBLE_SORT_H
#define CPP_HW03_BUBBLE_SORT_H

#include "arrays.h"

namespace Sort {
  template <typename T>
  class Bubble {
  public:
    static void sort(T array[], int n) {
      for( int i = 0 ; i < n-1; ++i ){
        for( int j = 0 ; j < n-i-1; ++j ){
          if( array[j] > array[j+1] ){
            Arrays<T>::swap(array, i, j+1);
          }
        }
      }
    }
  };
}

#endif // CPP_HW03_BUBBLE_SORT_H
