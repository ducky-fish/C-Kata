//Given string with spaces; remove spaces; return string without spaces
//MY ANSWER
std::string no_space(std::string x)
{
    //your code here
  int loc = 0;
  int size = x.length();
  while(loc < size){
    if(x[loc] == ' '){
      x.erase(x.begin()+loc);  
      loc -= 1;
    }
    loc += 1;
  }
  std::cout << loc;
  return x;
}

//BEST PRACTICE
std::string no_space(std::string x)
{
    x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
    return x;
}
