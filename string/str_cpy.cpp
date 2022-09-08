#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	// z has greater ASCII value than g
	char leftStr[] = "bb";
	char rightStr[] = "aa";
	
	int res = strcmp(leftStr, rightStr);
	
	if (res==0)
		printf("Strings are equal");
	else
		cout<<"Strings are unequal";
		
	cout<< "\nValue of result: "<<res;
	
	return 0;
}
