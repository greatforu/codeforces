#include <bits/stdc++.h>

using namespace std;

int main()
{
    char m[100], n[100];
    cin>>m>>n;

    for(int i=0; m[i]!='\0'; i++)
    {
       m[i]=tolower(m[i]);
    }
    for(int j=0; n[j]!='\0'; j++)
    {
        n[j]=tolower(n[j]);
    }

    if(strcmp(m,n)==0)
     {
       cout<<"0";
     }
     else
     {
         if (strcmp(m,n)>0)
         {
             cout<<"1";
         }
         else
         {
             cout<<"-1";
         }
     }
    return 0;

}
