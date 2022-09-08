#include<iostream>
using namespace std;
const int row = 4;
const int col = 4;
void sum(int a1[row][col], int a2[row][col])
{
    int sum[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
            cout<<sum[i][j] << " ";
        }
    }
}
int main()
{
    int a1[10][10], a2[10][10];
/*    cout <<"Rows: ";
    cin>> row;
    cout<<"Column: ";
    cin>> col;
*/
    cout<< "Enter elements of 1st arr: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> a1[i][j];
        }
    }

    cout<< "Enter elements of 1st arr: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> a2[i][j];
        }
    }

    sum(a1, a2);
    return 0;
}