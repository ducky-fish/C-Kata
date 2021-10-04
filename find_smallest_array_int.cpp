//Find the smallest integer in a list

//MY ANSWER
#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int x;
  int currentLow = list[0];
  for(int i = 0; i < list.size(); i++){
    x=list[i];
    if(x < currentLow){
      currentLow = x;
    }
  }
  return currentLow;
}

//BEST PRACTICE
#include <algorithm>
#include <vector>

/*
int findSmallest(const std::vector<int>& xs) {
  return *std::min_element(xs.cbegin(), xs.cend());
}*/
