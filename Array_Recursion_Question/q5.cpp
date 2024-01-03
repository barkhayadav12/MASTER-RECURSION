//reverse a stack

#include<iostream>
#include<stack>

using namespace std;

void  insert_at_right_place(stack<int>& s,int temp)
{
    if(s.size()==0)
    {
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert_at_right_place(s,temp);
    s.push(val);
    return;
}

void reverse_stackk(stack<int>& s)
{
    if(s.size()==1)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse_stackk(s);
    insert_at_right_place(s,temp);
    return;
}

int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
     while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    reverse_stackk(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}