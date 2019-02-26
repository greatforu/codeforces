#include <iostream>

using namespace std;

int main()
{
    int a,b,c,m[10],temp=0;
    cin>>a>>b>>c;
    m[0]=a+b*c;
    m[1]=a*(b+c);
    m[2]=a*b*c;
    m[3]=(a+b)*c;
    m[4]=a+b+c;
    for(int i=0; i<5; i++)
    {

        if(m[i]>temp)
            temp=m[i];
    }
    cout<<temp;

        return 0;
}
