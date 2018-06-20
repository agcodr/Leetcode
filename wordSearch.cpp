#include<iostream>
using namespace std;

//TODO:: compelting the testing of the code

void depthFirstSearch(vector <string> words, vector <vector <char>> v, int i, int j, string res)
{
  rows = v.size();
  columns = v[0].size();

  if (i > 0 && isPresent(res+v[i-1][j], vector <string> words))
  {
    res += v[i-1][j];
    depthFirstSearch(words, v, i-1, j, res);
  }
  else if (i < columns && isPresent(res+v[i+1][j], vector <string> words))
  {
    res += v[i+1][j];
    depthFirstSearch(words, v, i+1, j, res);
  }
  else if (j > 0 && isPresent(res+v[i][j-1], vector <string> words))
  {
    res += v[i][j-1];
    depthFirstSearch(words, v, i, j-1, res);
  }
  else if (j < rows && isPresent(res+v[i][j+1], vector <string> words))
  {
    depthFirstSearch(words, v, i, j+1, res);
  }
}
res += v[i][j+1];


void wordSearch(vector <vector <char>> v,vector <string> words)
{
  //edge conditions
  if (v[0].size() == 1)
  {

  }

  //looping things out and checking if it is possible or not
  for (int i = 0;i<v.size();i++)
  {
    for (int j = 0;j<v[0].size();j++)
    {
      if (v[i][j] == )
    }
  }
}

int main()
{
  vector <string> words = {"oath", "pea", "eat", "rain"};
  vector <vector <char>> board = {{'o','a','a','n'},{'e','t','a','e'}, {'i','h','k','r'}, {'i','f','l','v'}};


}
