#include <iostream>
using namespace std;
 
// Function to print the desired
// Alphabet Z Pattern
void alphabetPattern(int N)
{
 
    int i, j, size;
 
    // Declaring the values of Right,
    // Left and Diagonal values
    int Top = 1, Bottom = 1, Diagonal = N - 1;
 
    // Loop for printing the first row
    for (i = 0; i < N; i++)
        cout << Top++ << " ";
 
    cout << endl;
 
    // Main Loop for the rows from (2 to n-1)
    for (i = 1; i < N - 1; i++) {
 
        // Spaces for the diagonals
        for (j = 0; j < 2 * (N - i - 1);
             j++)
            cout << " ";
 
        // Printing the diagonal values
        cout << Diagonal--;
 
        cout << endl;
    }
 
    // Loop for printing the last row
    for (i = 0; i < N; i++)
        cout << Bottom++ << " ";
}
 
// Driver Code
int main()
{
    // Number of rows
    int N = 5;
 
    alphabetPattern(N);
 
    return 0;
}