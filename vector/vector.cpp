#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;  //static 
    //vector<int> * vp - new vector<int>(); //dynamic
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // cout<<v[0] << endl;
    // cout<<v[1] << endl;
    // cout<<v[2] << endl;

    v.push_back(2345);
    v.push_back(235);

    // v[1] = 100;
    // cout<<v[1] << endl;

    // cout <<"Size: " << v.size() <<endl;
    // cout << v.at(2)<<endl;
    // cout << v.at(6)<<endl;

    v.pop_back();
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i] << endl;
    }
    
    cout<<"another way:"<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    cout<<"third way:"<<endl;
    for(auto element:v)
    {
        cout <<element<<endl;
    }


    vector<int> v2(3,50);
    swap(v,v2);         //swapping the values of two diff vectors
    for(auto element:v)
    {
        cout<< element <<endl;
    }
    for(auto element:v2)
    {
        cout<< element <<endl;
    }

    sort(v.begin(), v.end());

    return 0;
}