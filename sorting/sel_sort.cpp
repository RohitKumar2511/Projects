#include<iostream>
using namespace std;
void sel_srt(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minInd = i;
        //cout<<"eye: "<<i<<endl;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minInd])
                minInd = j;
        }
        swap(arr[minInd], arr[i]);
    }
}

int main()
{
    int arr[10] = {12,334,45,2343, 0, 1,-3, -444, 3,2222222};
    int n = sizeof(arr)/sizeof(arr[0]);
    sel_srt(arr,n);
    for( auto i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}