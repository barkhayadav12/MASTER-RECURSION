//Finding an element in the array (Linear Search)


#include<iostream>

using namespace std;

bool isPresent(int a[],int i,int n,int key)
{
    if(i==n)
    {
        return false;
    }
    if(a[i]==key)
    {
        return true;
    }
    return isPresent(a,i+1,n,key);
}

int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    isPresent(a,0,n-1,10)?cout<<"PRESENT\n": cout<<"NOT PRESENT\n";
}

