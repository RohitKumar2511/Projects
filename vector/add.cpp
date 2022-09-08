#include<iostream>
#include<vector>
using namespace std;

int main() {
 int a[10], b[10]; 
 int c[10]; 
 int n, i;


 printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
for (i = 0; i < n; i++)
{
   scanf("%d", &a[i]);
} 
printf("Enter elements of vector b:\n");
for (i = 0; i < n; i++)
{
    scanf("%d", &b[i]);
}
for (i = 0; i < n; i++)
{
    c[i] = a[i] + b[i];
}
printf("Addition vector:\n");
for (i = 0; i < n; i++)
{
    printf("%d ", c[i]);
}
return 0;
}