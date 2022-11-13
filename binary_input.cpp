#include "binary_input.h"
#include <iostream>

using namespace std;

namespace Exercise3_4 {
//  template <class B>
//  B BinaryInput<B>::enterBinaryNumber() {
  long BinaryInput::enterBinaryNumber() {
    int decimal;
    bool isOk;
    do {
      isOk = true; ///< assume ok
      decimal = 0; ///< reset decimal value

      cout << "Enter positive binary number (max " << MAX_BITS << " digits): ";
      cin >> input;
      cin.clear();

      if (input < 0) {
        cerr << "Number must be positive!" << endl;
        isOk = false;
        continue ;
      }

      long input_copy = input;

      int digits = 0;

      while (input_copy != 0) {
        if (digits >= MAX_BITS) {
          cerr << "Number is too long!" << endl;
          isOk = false;
          break;
        }
        int digit = (input_copy % 10);
        if (digit != 0 && digit != 1) {
          cerr << "Invalid digit: " << digit << endl;
          isOk = false;
          break;
        } else {
          decimal += (digit << digits);
          input_copy /= 10;
        }
        digits++;
      }
      if (!isOk) {
        cout << endl;
      }
    } while(!isOk);

    value = decimal;
    return input;
  }

//  template <class B>
//  int BinaryInput<B>::asDecimalValue() {
  int BinaryInput::asDecimalValue() {
    return value;
  }
}