#include <string>
#include <algorithm>
#include <cstddef> 

bool isAnagram(std::string test, std::string original){
  
  if(test.size() != original.size()) return false;
  
  std::transform(test.begin(), test.end(), test.begin(), ::tolower);
  std::transform(original.begin(), original.end(), original.begin(), ::tolower);
  
  std::sort(test.begin(),test.end());
  std::sort(original.begin(),original.end());

  
  return test == original;
  
}