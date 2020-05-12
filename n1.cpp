#include <iostream>
using namespace std;
int main()
{
  int array1[1000];
  int count = 0;
  int n;
  do
  {
    cout << "Введите число ";
    cin >> n;
    if (n != -9999)
    {
      array1[count] = n;
      count++;
    }
  }
  while(n != -9999);
  int max = 0;
  for (int i = 0; i < count; i++)
  {
    for (int j = i + 1; j < count; j++)
    {
      int p = array1[i] * array1[j];
      if (p % 13 == 0 && p % 39 != 0 && p > max)
      {
         max = p;
      }
    }
  }
  if (max == 0)
  {
    cout << "Fail";
  }
  else
  {
    cout << max;
  }
  return 0;
}
