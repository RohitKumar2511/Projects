#include<iostream>
using namespace std;

void func(int n, int arr[])
{
    int temp1 = 0, temp2=0, temp3=0;
    for(int i=0; i<n; i++)
    {
        if(n > temp1)
        {

            temp3 = temp2;
            temp2 = temp1;
            temp1 = arr[0];
            cout << temp1 <<"\t++" << temp2 <<"\t" << temp3 <<"\t"<< i <<"\t";
        }

        else if( n>temp2 )
        {
            temp3= arr[i];
        }
        else if(arr[i] > temp3)
        {
            temp3 = arr[i];
        }
    }
    cout << "\nThe three largest numbers are: " << temp1 <<" "<< temp2 <<" "<< temp3;
}

int main()
{
    int arr[] = {12, -4, 43, 0 , 23, 233};
    int n = sizeof(arr)/sizeof(arr[0]);
    func(n, arr);
}