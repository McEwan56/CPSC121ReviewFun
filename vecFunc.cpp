#include "vecFuncs.h"

void fillVector(vector<int>& userNums){
  int userIn = 0;

  for(int i = 0; i < 10; i++){
    cout << "Please enter an int: ";
    cin >> userIn;
    userNums.push_back(userIn);
  }
}

void findExtremes(int& min, int& max, vector<int> userNums){
  min = max = userNums.at(0);
  
  for (int i = 0; i < userNums.size(); i++){
    if(userNums.at(i) > max){
      max = userNums.at(i);
     }
  }
  
  for (int i = 0; i < userNums.size(); i++){
     if(userNums.at(i) < min){
      min = userNums.at(i);
     }
  }
  cout << "min: " << min << endl << "max: " << max << endl;

}