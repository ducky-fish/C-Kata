//Take in string; remove all vowels from a string; return devoweled string
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

std::string disemvowel(const std::string& str) {
  std::string fixed (str);
  std::size_t found = str.find_first_of("aeiouAEIOU");
  
  std::cout << found << '\n';
  std::cout << fixed << '\n';
  while(found != std::string::npos)
  {
    fixed.erase(fixed.begin()+found); 
    std::cout << fixed << '\n';
    found = fixed.find_first_of("aieouAEIOU",found+1);
    std::cout << found << '\n';
  }
  return fixed;
}

/*"This website is for losers LOL!"
     2   6  9 11 13  17 21 23 28
"Ths website is for losers LOL!"
      5->7
"Ths wbsite is for losers LOL!"
        7
"Ths wbste is for losers LOL!"
         8
"Ths wbst is for losers LOL!"
          9
"Ths wbst s for losers LOL!"
             12

*/

