#include <iostream>
using namespace std;

int main()
{
  int y, r4, r100, r400 = 0;
  bool l, l2 = false;

  for (int i = 1000; i <= 3000; i++)
  {
    y = i;
    //cout << y << endl;

    // Obtain the remainders
    r4 = y % 4;
    r100 = y % 100;
    r400 = y % 400;

    // METHOD 1 (Simpler)
    // if year is not divisible by 4, then it's a common year
    if (r4 != 0)
    {
      //cout << y << " common" << endl;
      l = false;
    }
    else if (r100 != 0)
    {
      //cout << y << " leap" << endl;
      l = true;
    }
    else if (r400 != 0)
    {
      //cout << y << " common" << endl;
      l = false;
    }
    else
    {
      //cout << y << " leap" << endl;
      l = true;
    }

    // METHOD 2 (not as simple)
    if (r4 == 0)
    {
      if (r100 == 0)
      {

        if (r400 == 0)
        {
          //cout << y << " LEAP" << endl;
          l2 = true;
        }
        else // (r1 == 0 && !r4 == 0)
        {
          //cout << y << " COMMON" << endl;
          l2 = false;
        }
      }

      else // (!r1 == 0)
      {
        //cout << y << " LEAP" << endl;
        l2 = true;
      }
    }
    else // (!r == 0)
    {
      //cout << y << " COMMON" << endl;
      l2 = false;
    }

    if (l != l2)
    {
      cout << "**************************MISMATCH**********************" << endl;
      cout << y << " " << l << " " << l2 << endl;
    }

  }
  return 0;
}
