#include<iostream>
using namespace std;
void traverse(string str, int n){
    for(int i=0; i<n; i++)
    {
        cout<<str[i]<<" ";
    }
}

int main()
{
    string str = "Some";
    int n = str.length();
    traverse(str, n);
    return 0;
}