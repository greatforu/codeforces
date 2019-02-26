#include <iostream>

using namespace std;

int main()
{
    int i,temp,n;
    cout<<"Enter the number";
    cin>>n;
    temp=n-1;
    for(i=2; i<temp; i++)
    {
        if(temp%i==0)
            cout<<temp<<"is not prime";
            break;
    }
    cout<<temp<<" is prime number";
    return 0;
}
