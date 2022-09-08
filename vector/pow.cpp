#include<iostream>
#include<math.h>
using namespace std;
double myPow(double x, int n) {
    if(n==0){
    return 1;
    }
    if(n<0){
        n = abs(n);
        double ans = 1.0;
    for (int i = 0; i < n; i++) {
        ans = ans / x;
    }
    return ans;
    }
    double ans = 1.0;
    for (int i = 0; i < n; i++) {
        ans = ans * x;
    }
    return ans;
    
}

int main()
{
    int n = 6, x = 12;
    while(x != -5)
    {
        x--;
        n++;
        double val = myPow(n,x); 
        cout <<"Current: "<<n<<"\t"<<x<<"\t"<< val<<endl;
    }

    return 0;
}