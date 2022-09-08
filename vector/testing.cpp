#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr1{1,2,3,1,0,0};
    int n = arr1.size();
    vector<int> arr2{2,5,6};
    int m = arr2.size();
	for(int i=0;i<n;i++){
        arr1[m+i]=arr2[i];
    }

    cout<<"Before: \n";
    for(int i=0; i< arr1.size(); i++)
    {
        cout<<arr1[i] << "\t"<<arr2[i]<<"\n";
    }

    sort(arr1.begin(),arr1.end());

    cout<<"After: \n";
    for(int i=0; i< arr1.size(); i++)
    {
        cout<<arr1[i] << " ";
    }
	return 0;
}
