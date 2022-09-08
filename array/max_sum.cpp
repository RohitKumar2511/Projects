#include<iostream>
#include<climits>
using namespace std;
int maxSum(int a[], int n, int k)
{
    int max_sum = INT_MIN;
   
    for(int i=0; i<n-k+1; i++)
    {
        int curr_sum = 0;
        for(int j=0; j<k; j++)
        {
            curr_sum= curr_sum + a[i+j];
        }
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}

int main()
{
    int a[]={1,3,4,5,6,7,2,0,3,20};
    int k=4;
    int n = sizeof(a)/sizeof(a[0]);
    cout << maxSum(a, n,k);
    return 0;
}