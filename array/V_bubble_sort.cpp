#include<iostream>
using namespace std;

int main(){
    int a[20], size, i , j, temp , swap; 
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    cout<<"Enter the array elements : "<<endl;

    for ( i = 0; i < size; i++)
    {
        cin>>a[i];

    }
    for ( i = 0; i < (size-1); i++)
    {
       swap = 0;
       for ( j = 0; i < size -1 ; i++)
       {
        if(a[j] > a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swap= 1;
        }
       }
       
    }
    

}