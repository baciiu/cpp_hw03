#include "ex03_1.h"

#include "bubble_sort.h"

using namespace std;

void Exercise31::run() {
 cout << "Exercise 1" << endl;

 cout << "int array:" << endl;

 int array[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 };
 int n = sizeof(array) / sizeof(int);

 Arrays<int>::print(array, n);
 Sort::Bubble<int>::sort(array, n);
 Arrays<int>::print(array, n);

 cout << "int array:" << endl;

 double double_array[] = {0.1, 3.14, 9.8, -273.1};
 int dn = sizeof(double_array) / sizeof(double);

 Arrays<double>::print(double_array, dn);
 Sort::Bubble<double>::sort(double_array, dn);
 Arrays<double>::print(double_array, dn);

}
