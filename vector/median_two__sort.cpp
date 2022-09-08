#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A = { 1 , 2 };
	vector<int> B = { 9 , 11 , 14 ,15 };

    A.insert(A.end(), B.begin(), B.end());
    for(auto i: A)
    {
        cout<<i<< " ";
    }

    return 0;
}