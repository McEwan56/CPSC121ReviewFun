//McEwan B - CPSC 121 Review
#include "vecFuncs.h"

int main() {
  vector<int> userNums;
  int min = 0, max = 0;
  fillVector(userNums);
  cout << "Size: " << userNums.size() << endl;

  //Task 1: define and call a func that finds the smallest and largest values in the vector
  findExtremes(min, max, userNums);
  //Task 2: Convert to the 3 file format 
    //Task 2 complete
}
