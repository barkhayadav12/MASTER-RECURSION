//product of n to 1

#include<iostream>

using namespace std;

int product_n_to_1(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*product_n_to_1(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<product_n_to_1(n)<<endl;
}