#include "ex03_4.h"
#include "binary_input.h"
#include <iostream>

//using namespace std;
using namespace Exercise3_4;

void Exercise34::run() {
  std::cout << "Exercise 4\n";

//  BinaryInput <long> bin;
  BinaryInput bin;
  bin.enterBinaryNumber();
  std::cout << "Decimal value: " << bin.asDecimalValue();
}
