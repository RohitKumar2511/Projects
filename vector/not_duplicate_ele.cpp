#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int not_dup(vector<int>& arr) {
        int n = arr.size(); 
        
        for(int i = 0; i < n - 1; i++)
        {
            cout<< arr[i]<< "\t"<< arr[i+1]<< "\t";
            arr[i + 1] = arr[i] ^ arr[i + 1];
            cout<< i << "\t" <<i+1 << "\t" <<arr[i+1]<< endl;
        }
        
        return arr[n- 1]; 
    }

int main() {
    vector <int> nums{3,4,3,5,4};
    cout<<"the non-duplicate elements are: "<< not_dup(nums)<<endl;
    return 0;  
}
