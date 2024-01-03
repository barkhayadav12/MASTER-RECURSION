// print the power set

#include<iostream>

using namespace std;

void print(string s,string op)
{
    if(s.length()==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(s[0]);
    s.erase(s.begin()+0);
    print(s,op1);
    print(s,op2);
    return;
}
int main()
{
    string s;
    cin>>s;
    string op="";
    print(s,op);
}