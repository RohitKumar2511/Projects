#include<iostream>
using namespace std;

void reachingHome(int src, int dest)
{
    if(src == 10)
    {
        cout<<"reached home.";
        return;
    }
    cout<<src<<endl;
    reachingHome(src+1, dest);    
}

int main() 
{
    int dest = 10; 
    int src = 1;
    reachingHome(src, dest);
    return 0;
}