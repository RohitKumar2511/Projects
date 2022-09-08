#include <stdio.h>
#include <stdlib.h>
long long int summingDigit(long long int dividend);

int main()
{
    long long int n, dividend, add, ans;
    int i, test, c;
    scanf("%d", &test);
    for(c=1; c<=test; c++) {
    scanf("%lld", &n);
    for(i=1; ; i++) {
        dividend = n*i;
        add = summingDigit(dividend);
        if(add==n) {
            ans=dividend;
            break;
        }
    }
    printf("%lld\n", dividend);
    }
    return 0;
    }


long long int summingDigit(long long int dividend)
{
    long long int sum=0, rem;
    while(dividend!=0) {
        rem=dividend%10;
        dividend=dividend/10;
        sum=sum+rem;
    }
    return sum;
}