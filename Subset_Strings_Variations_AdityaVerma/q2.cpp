//print unique subset(no duplicate values)
//Variation 1 (works even if its asked to print in lexicographical order)

#include<iostream>
#include<set>
using namespace std;

void print(string s,string op,set<string>&str)
{
    if(s.length()==0)
    {
        str.insert(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(s[0]);
    s.erase(s.begin()+0);
    print(s,op1,str);
    print(s,op2,str);
    return;
}
int main()
{
    string s;
    cin>>s;
    string op="";
    set<string>str;
    print(s,op,str);
    for(auto i:str)
    {
        cout<<i<<endl;
    }
}
