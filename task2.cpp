
#include<iostream>
#include<conio.h>

using namespace std;


int main()

{

  int number_of_row, number_of_column;

  cout<<"Enter Number of Row : ";
  cin>>number_of_row;

  cout<<"Enter Number of Column : ";
  cin>>number_of_column;

  int array[number_of_row][number_of_column];


   cout<<"Input the value : ";
  for(int a=0; a<number_of_row; a++)

{
    for(int b=0; b<number_of_column; b++)

    {
        cin>>array[a][b];
    }
  }



  for(int a=0; a<number_of_row; a++)

{
    for(int b=0; b<number_of_column; b++)

   {
        cout<<array[a][b]<<" ";
    }
    cout<<endl;
}



  int search_value;
  cout<<"Enter search the Value : ";
  cin>>search_value;

  for(int a=0; a<number_of_row; a++)

    {
    for(int b=0; b<number_of_column; b++)

    {
        if(search_value==array[a][b])

        {
            cout<<"Index ("<<a<<","<<b<<") "<< " is Found"<<endl;
        }
         else

       {
             cout<<"Index ("<<a<<","<<b<<") "<< " is not  Found"<<endl;
        }
    }
  }


    getch();
}

