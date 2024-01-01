//products of digits

#include<iostream>

using namespace std;

int product_digits(int n)
{
   if(n==0)
   {
    return 1;
   }
   return (n%10)*product_digits(n/10);
   
}

int main()
{
    int n;
    cin>>n;
    cout<<product_digits(n)<<endl;
}