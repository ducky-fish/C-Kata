//Take in string; remove all vowels from a string; return devoweled string
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

std::string disemvowel(const std::string& str) {
  std::string fixed (str);
  std::size_t found = str.find_first_of("aeiouAEIOU");
  
  while(found != std::string::npos)
  {
    fixed.erase(fixed.begin()+found); 
    found = fixed.find_first_of("aieouAEIOU",found);
  }
  return fixed;
}
