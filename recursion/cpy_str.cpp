#include<iostream>
using namespace std;

void cpy_str(char s1[], char s2[], int itr = 0)
{
    s2[itr] = s1[itr];
    if(s1[itr] == '\0')
        return;
    
    cpy_str(s1, s2, itr + 1);
}

int main()
{
    char s1[11] = "Rohit", s2[11]="";
    cpy_str(s1, s2);
    cout<<s2;
    return 0;
}