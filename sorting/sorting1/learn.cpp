#include <iostream>
#include <vector>
#include <string>

using namespace std;

void selection_sort(int arr[], int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      int min_index = i;
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[min_index])
         {
            min_index = j;
         }
      }
      int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
   }
}

void bubble_sort(int arr[], int n) {
    for (int i = n-1; i>= 0;i--) {
        int didSwap = 0;
        for (int j=0; j<i; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap ++;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}

int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   selection_sort(arr, n);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   return 0;
}
