#include<iostream>
using namespace std;

int larg(int a[], int n){
    int temp=a[0];
    for (int i = 0; i < n; i++)
    {
        if (temp<a[i])
        {
            temp=a[i];
        }
        
    }
    return temp;
}

int main(){
    cout<<"Enter the array"<<endl;
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<larg(a, n);
    return 0;
    
}