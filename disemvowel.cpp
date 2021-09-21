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

//TOP ANSWER / BEST PRACTICE by: devnuhl and others

# include <string>
# include <regex>
std::string disemvowel2(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}
