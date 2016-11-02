#include <iostream>

using namespace std;

/** 
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

float multiplyFloat(float *pointer, float num);

int main() {
  float total = 123;
  float num1 = 2.5;
  float num2 = 2;
  float *pointer = &num2;
  cout << *pointer << endl;
  cout << multiplyFloat(pointer, num1) * total << endl;
  cout << *pointer;

  return 0;
}

float multiplyFloat(float *pointer, float num){

  *pointer *= num;
  
  return *pointer;
}
