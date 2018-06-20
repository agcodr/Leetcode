#include <iostream>
#include <string>
#include <stringstream>

using namespace std;

vector <string> tokenizeString(string inp_string)
{
  string buffer ;
  string delimiter = " "
  vector <string> result;
  stringstream sstream(inp_string);
  while (getline(sstream, buffer, delimiter))
  {
    result.push_back();
  }

  return result;
}

int main()
{
  vector <string> result;
  string inp_string = "This is Facebook";
  result = tokenizeString(inp_string);

  for (auto i : result)
  {
    cout<<i<<endl;
  }
  return 0;
}
