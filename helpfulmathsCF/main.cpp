#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    char a[100];
    int n=0;;
    for (int i=0; i<s.size();i+=2)
    {
     a[n]=s[i];
     n++;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {cout<<a[i];
    if(i!=n-1) cout<<"+";
    }

    return 0;
}
