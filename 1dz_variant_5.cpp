#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
  const int x = 4, y = 4;
  int matrix[x][y]{
      {1, 1, 1, 0},
      {1, 0, 0, 0},
      {0, 1, 0, 1},
      {0, 0, 1, 1},
  };
  int matrix2[x][y];
  int reb[x][2];
  int a = 0;
  for (int j = 0; j < x; j++)
  {
    for (int i = 0; i < y; i++)
    {
      if (matrix[i][j] == 1)
      {
        reb[j][a] = i + 1;
        a++;
      }
      matrix2[i][j] = 0;
    }
    a = 0;
    
  }

  for (int i = 0; i < x; i++)
  {
    cout << reb[i][0] << " ";
    cout << reb[i][1] << endl;
  }
  //=========
  
  for (int i = 0; i < y; i++)
  {
    int a = reb[i][0]-1, b = reb[i][1]-1;
    matrix2[i][a] = 1;
    matrix2[i][b] = 1;
  }

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cout << matrix2[j][i];
    }
    cout << endl;
  }

  return 0;
}
