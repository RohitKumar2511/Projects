#include<iostream>
using namespace std;

/*void inv_left_tri(int n)
{
    for(int i=n; i>0; i--)
    {
        for(int j=0; j <= n; j++)
        {
            if(j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    inv_left_tri(5);
    return 0;
}
*/

int main()
{
    int n = 5;
   
    //looping rows
    for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) //looping columns
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}