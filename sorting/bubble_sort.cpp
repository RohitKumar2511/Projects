#include<iostream>
using namespace std;
void bub_srt(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        //cout<<"eye:" <<i<<"\n\n";
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                //cout<<"joy:" <<j<<endl;

            }
        }
    }
}

int main()
{
    int arr[10] = {12, 334, 45, 2343, 0, 1, -3, -444, 3, 2222222};
    int n = sizeof(arr)/sizeof(arr[0]);
    bub_srt(arr,n);
    for( auto i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}