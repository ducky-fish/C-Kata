//Sums all previous parts of a number to make a greater number, e.g. summation(3) = 1+2+3 = 6

//MY CODE
int summation(int num){
 //Code Here
  int ogComparison = num;
  int numSum = 0;
  while(ogComparison >= 1){
    ogComparison -= 1;
    numSum += (num - ogComparison);
  }
  return numSum;
}

//BEST PRACTICE
int summation(int num){
 return num*(num+1)/2;
}

