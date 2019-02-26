#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    char s[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
         m=strlen(s);
        if (m<=10)
        {
            cout<<s<<endl;
        }
        else {
        cout<<s[0]<<(strlen(s)-2)<<s[strlen(s)-1]<<endl;
        }
    }
        return 0;
}
