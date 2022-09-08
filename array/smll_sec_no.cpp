#include<iostream>
using namespace std;
int main_fn(int arr[], int n)
{
    return 0;
}

int maint()
{
    int arr[]={123,45,4,-6,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    main_fn(arr, n);
    return 0;
}