#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4}, answer[]={0,0,0,0,0,0};
    // double sal[101];
    // int s = sizeof(sal)/sizeof(sal[0]);
    // cout<< s;
     int n=4,s=0, val = n-1, i=0;
        while(s<=val)
        {
            cout<<"before:\t" <<i <<"\t" << s<< endl;

            answer[i++] = a[s++];
            cout<<endl << answer[i] <<endl;
            cout<<"after: \t" <<i  <<"\t" << s<< endl;    
            cout<<"before:\t" <<i  <<"\t" << s<< endl;

            answer[i++] = a[val--];

            cout<<"after: \t" <<i  <<"\t" << val<< endl;
        }
        for(int i=0; i<n; i++)
        {
            cout<< answer[i];
        }

    return 0;
}