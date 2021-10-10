//Does my number look big in this? Checks if a number is a narcissistic number
//Input int; calculate a single digit int for each number place e.g. 153 1, 5, 3; calculate the highest number place e.g. 153 is 3; operate s.t. 1^3 + 5^3 + 3^3 = 153
//return boolean to indicate whether the input number is a narcissistic number;

//MY CODE

#include <cmath>
//poweredUp : takes two int and raises first int to power of second int 

int poweredUp(int n, int p){
  int resultN = n;
  while(p>1){
    resultN *= n;
    p--;
  }
  return resultN;
}

//narcissistic : Given int returns bool to indicate whether int matches criteria of a narcissistic number
bool narcissistic( int value ){
  int copyV = value;
  int n = 1;
  int tempResult = 0;  
  
  int powerOf = log10(copyV) + 1;
  int result = 0;

  while(copyV){
    tempResult = (copyV%(n*10));
    result += poweredUp(tempResult/n, powerOf);
    n *= 10;
    copyV -= tempResult;
  }
  
  return (result == value);
}


//Best Practice
#include <cmath>

bool narcissistic( int value ){

  int n = value;
  int i = log10(value) + 1; //get the number of digits in "number"
  int sum = 0;
  
  while (n) {
    sum += pow(n%10, i);
    n /= 10;
  }
  
  return sum == value;
}
