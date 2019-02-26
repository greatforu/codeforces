#include <iostream>

using namespace std;

int main()
{
int i,n[10],m,temp=0;

cout<<"Enter number of terms";
for(i=0; i<n; i++)
{
    cin>>n[i];
}
cout<<"the numbers are";
for(i=0;i<n;i++)
{
    cout<<n[i]<<endl;
}
for(i=0; i<n[i]; i++)\
{
    if(n[i]%3==0)
    {
        n[temp]=n[i];
        temp++;
    }
}
cout<<"the number of terms are"<<endl;
for(i=0; i<=temp; i++)
{
    cout<<n[i];
}
return 0;
}
