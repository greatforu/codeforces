#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  string p="hello";
int n=s.size();
  int temp=0,h=0;
  for(int i=0;i<n;i++)
  {
    if(p[h]==s[i]) {
        h++;
       temp++;
    }
  }
  if(temp==5)
  {
      cout<<"YES";

  }
  else{
    cout<<"NO";
  }
  return 0;
}
