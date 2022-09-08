#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A = {1,3,5,7,9};
    vector<int> B = {0,2,4,6,8};

    vector<int> AB = A;  //vector that will hold
                        // combined values of A nd B
    AB.insert(AB.end(), B.begin(), B.end());

    for(auto i: AB)
    {
        cout <<i<<" ";
    }
    return 0;
}