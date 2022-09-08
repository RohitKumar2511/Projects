#include<iostream>
using namespace std;
void rev_str(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    
    while(s<e)
    {
        swap(str[s++], str[e--]);
    }
}

int main()
{
    string str = "Some";
    rev_str(str, len);
    return 0;
}