
#ifndef CPP_HW03_BINARY_INPUT_H
#define CPP_HW03_BINARY_INPUT_H

namespace Exercise3_4 {
  //template <class B>
  class BinaryInput {
    long input;
    int value;

  public:
    const int MAX_BITS = 16;

    long enterBinaryNumber();
    int asDecimalValue();
  };
}

#endif // CPP_HW03_BINARY_INPUT_H
