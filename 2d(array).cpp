#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int A[2][3] = {
                    {2,3,4},

                    {5,6,7}


                            };

    //A[0][0] = 2;
    //A[0][1] = 3;
    //A[0][2] = 4;

    //A[1][0] = 5;
    //A[1][1] = 6;
    //A[1][2] = 7;


  for(int row=0;row<2;row++)
  {
      for(int col=0;col<3;col++)
      {
          cout <<A[row][col] << " ";
                }
  }

 getch();
}
