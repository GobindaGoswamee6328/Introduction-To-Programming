
#include <iostream>
#include <conio.h>

using namespace std;

void sortArray(int arr[], int n)
{

    if (n <= 1) {
        return;
    }

    int x = -1, y = -1;
    int prev = arr[0];


    for (int i = 1; i < n; i++)
    {

        if (prev > arr[i])
            {

            if (x == -1) {
                x = i - 1, y = i;
            }
            else
                {
                y = i;
            }
        }
        prev = arr[i];
    }


    swap(arr[x], arr[y]);
}
int main()
{

    int arr[] = { 3,8,6,7,5,10 };

    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    getch();
}
