
// example of an exception in c++

#include <iostream>
#include <string>

int main() {

  const int UnexpectedUserInput = 5;
  
  char userChar;
  
  try
  {
  cout << "Would you like to play my game? (Y/N) " << std::endl;
  
  cin >> userChar;
  
  if (userChar != "Y" && userChar != "N")
      throw UnexpectedUserInput;
  }
  catch (int i)
  {
      cout << "An exception occurred. Exception Nr. " << i << std::endl;
  }
  return 0;
}
