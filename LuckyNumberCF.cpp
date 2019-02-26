#include <iostream>

using namespace std;

int main()
{
    int n,a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
    int counter = 0 ;
    for(int i=0; i<14; i++)
    {
        if(n%a[i]==0)
        {
            counter = 1 ;
            break ;
        }
    }
    if (counter == 1) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
    return 0;
}
