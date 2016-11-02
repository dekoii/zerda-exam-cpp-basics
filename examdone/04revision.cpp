#include <iostream>

using namespace std;

/** 
 * Create a function that takes an integer and returns how many divisors it has
 */

int srchDivisor (int input);

int main() {

  cout << "Choose a number:" << endl;
  int input;
  cin >> input;

  cout << srchDivisor(input) << endl;

  return 0;
}

int srchDivisor (int input) {
  int counter = 0;
  for (int i = 1; i <= input; i++){
  
    if (input % i == 0){
    
      counter++;
   }

  }
  return counter;
}
