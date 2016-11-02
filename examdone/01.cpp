#include <iostream>
#include <string>

using namespace std;

/** 
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool hasBiggerOrEqual(int array[], int arrayLength, int num);

int main() {
  int array[] = {3, 2, 4, 6, -1};
  
  int arrayLength = 5; //sizeof (array) / sizeof (array[0]);
  int num;
  cin >> num;
  
  cout << boolalpha << hasBiggerOrEqual(array, arrayLength, num);

  return 0;
}

bool hasBiggerOrEqual(int array[], int arrayLength, int num){

  for (int i = 0; i < arrayLength; i++) {
    
     if (num <= array[i]) {
       return true;
     }
  }
  return false;
}
