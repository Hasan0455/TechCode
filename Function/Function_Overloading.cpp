#include <iostream>
using namespace std;
int add(int a, int b)
{
  cout << "sum1 = " << (a + b);
  return 1;
}

int add(double a, double b)
{
    cout << endl << "sum2 = " << (a + b);
    return 2;
}
// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);
 
    return 0;
}