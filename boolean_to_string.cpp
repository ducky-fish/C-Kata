//Receive boolean; return "yes" for true and "no" for false

//MY CODE
using namespace std;

string bool_to_word(bool value)
{
 return ((value == true) ? "Yes" : "No");
}

//BEST PRACTICE
using namespace std;

string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}
