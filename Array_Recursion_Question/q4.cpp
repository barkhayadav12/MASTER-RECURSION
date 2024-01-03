//sort an array


#include<iostream>
#include<vector>

using namespace std;


void insert_at_right_place(vector<int>&v,int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert_at_right_place(v,temp);
    v.push_back(val);
    return;
}

void sort_array(vector<int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    sort_array(v);
    insert_at_right_place(v,temp);
    return;
}


int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort_array(v);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}