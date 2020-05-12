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
    
}
