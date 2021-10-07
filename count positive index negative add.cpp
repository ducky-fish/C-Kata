//MY CODE
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  std::vector<int> result = {0,0};
    // go for it!
   if(input.empty()){
     return input;
   }
  else{
    std::vector<int> inCopy = input;
    int holder;
    int sizeComp = inCopy.size();
    int i = 0;
    while(i < sizeComp){
      holder = (inCopy[i] > 0) ? (result[0] += 1) : (result[1] += inCopy[i]);
      std::cout << inCopy[i] << "\n";
      std::cout << "(" << result[0] << "," << result[1] << ") \n";
      i++;
    }
  }
  return result;
}

//BEST PRACTICE
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if(input.empty())
      return {};
    int countPositives {0}, sumNegatives {0};
    for(int x: input)
      x>0 ? countPositives++ : (x!=0 ? sumNegatives+=x : 0);
    return {countPositives, sumNegatives};
}
