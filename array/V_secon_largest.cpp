#include<iostream>
using namespace std;

int element(int a[], int n ){
    int temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if ( temp<a[i] )
        {
            temp=a[i];
        }
        
    }
    return temp; 
}
int Sec_element(int a[], n ){
     element();

}
int main(){
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"The Largest element is "<<element(a,n);
    cout<<"The Second largest element is "<<Sec_element();
    return 0;
}