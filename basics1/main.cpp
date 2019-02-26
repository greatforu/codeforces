#include <iostream>

using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"enter the number to check";
    cin>>n;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
           {
             sum=sum+i;
           }
    }
    if(sum==n)
    {
        cout<<n<<" is the perfect number";
    }
    else
        cout<<n<<" is not the perfect number";
    return 0;
}
