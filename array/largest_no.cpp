#include <bits/stdc++.h>
using namespace std;
 
int largest(int arr[], int n)
{
    int i;
     

    int max = arr[0];
 
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

int main()
{
    int arr[] = {10, 3, 2, 4, 45, 0, 90, -98, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = sizeof(arr);
    cout << "Sizeof: "<< s<<"\n";
    cout << "Largest in given array is "
         << largest(arr, n);
    return 0;
}