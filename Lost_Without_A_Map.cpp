//take vector; double all elements; return new vector with doubled elements

//MY VERSION
std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> returnME;
  for(int x: values){
    returnME.push_back(x *= 2);
  }
  return returnME;
}

//BEST PRACTICES
std::vector<int> maps(const std::vector<int> & values) {
std::vector<int> result;
for(auto a:values)
{
  result.push_back(a*2);
}

return result;
}
