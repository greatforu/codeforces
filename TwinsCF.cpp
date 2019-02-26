#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,sum=0,temp=0;
    int c[100];
    cin>>a;//total number of elements
    for(int i=0;i<a;i++)
    {
        cin>>b;
        c[i]=b;
        sum=sum+c[i];
    }

    sort(c,c+a);
    int d= c[a-1];
   // cout<<d<<endl;//largest element

    for(int i=a-1;i>=0;i--)
    {
        temp+=c[i];
        sum-=c[i];
        if(temp>sum)
        {
            cout<<a-i;
            break;
        }
    }

    return 0;
}
