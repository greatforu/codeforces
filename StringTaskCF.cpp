#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    char s[256];
    cin.getline(s,256);
    len=strlen(s);
    for(int i=0; s[i]!='\0'; i++)
    {
        s[i]=tolower(s[i]);
    }


    for(int j=0; j<len; j++ )
    {
      if(s[j]=='a' || s[j]=='e' || s[j]=='i' ||
		s[j]=='o' || s[j]=='u' || s[j]=='y' )
        {
			for(int k=j; k<len; k++)
			{
				s[k]=s[k+1];
			}
		len--;
		}
	}


	for(int a=0; a<len; a++)
    {
        cout<<"."<<s[a];
    }



    return 0;
}
