#include <iostream>

using namespace std;

/** 
 * Create a function that takes an integer and returns how many divisors it has
 */

void searchDivisors (int input);

int main() {
  cout << "Choose a number:" << endl;
  int input;
  cin >> input;
  
  searchDivisors(input);
  return 0;
}

void searchDivisors (int input){
  int counter = 0;
  for (int i = 1; i <= input; i++){
  
    if (input % i == 0)
    
      counter++;
  }
  cout << input << " has " << counter << " divisors.";
}
