#include <bits/stdc++.h>
using namespace std;
 
// Function for finding maximum pieces
// with n cuts.
int findMaximumPieces(int n)
{
    // to maximize number of pieces
    // x is the horizontal cuts
    int x = n / 2;
 
    // Now (x) is the horizontal cuts
    // and (n-x) is vertical cuts, then
    // maximum number of pieces = (x+1)*(n-x+1)
    return ((x + 1) * (n - x + 1));
}
 
// Driver code
int main()
{
 
    // Taking the maximum number of cuts allowed as 3
    int n = 3;
 
    // Finding and printing the max number of pieces
    cout << "Max number of pieces for n = " << n
         << " is " << findMaximumPieces(3);
 
    return 0;
}