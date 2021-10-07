// Beginner series #2 clock
//takes

//MY CODE
int past(int h, int m, int s) {
  // your code here
  //1h = 3.6 million nanoseconds
  //1m = 60,000
  //1s = 1000
  int total = 0;
  if(h > 0){
    total += (h*3600000);
  }
  if(m > 0){
    total += (m*60000);
  }
  if(s > 0){
    total += (s*1000);
  }
  return total;
}

//BEST PRACTICES
int past(int h, int m, int s) {

  //1second == 1000ms
  //1minute == 60s == 60000ms
  //1h == 60m === 3600s == 3600000ms

  const int oneSec = 1000;
  const int oneMin = 60000;
  const int oneHr = 3600000;
  
  return (s * oneSec) + (m * oneMin) + (h * oneHr);
}

//OR

int past(int h, int m, int s) {
  return 1000*(s + m*60 + h*60*60);
}
