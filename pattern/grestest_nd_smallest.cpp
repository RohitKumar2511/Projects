#include<iostream>
using namespace std;
void funsun(int *x,int *y,int *z)
{
    cout<<*x<<"\t"<<*y<<"\t"<<*z<<endl;
    if(*x>*y && *x>*z)
    {
        cout<<*x<< " is the greatest numb.\n";
    }
    if(*y>*x && *y>*z)
    {
        cout<<*y<< " is the greatest numb.\n";
    }
    if(*z>*x && *z>*y)
    {
        cout<<*z<< " is the greatest numb.\n";
    }
    if(*x<*y && *x<*z)
    {
        cout<<*x<< " is the smallest numb.\n";
    }
    if(*y<*x && *y<*z)
    {
        cout<<*y<< " is the smallest numb.\n";
    }
    if(*z<*x && *z<*y)
    {
        cout<<*z<< " is the smallest numb.\n";
    }
}

int main()
{
    int x=34, y=45, z=234;
    int *ptrx = &x;
    int *ptry = &y;
    int *ptrz = &z;
    funsun(&x, &y, &z);
    return 0;
}