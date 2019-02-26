#include <iostream>

using namespace std;

int main()
{
    int a[100],n,min,max,maxa=0,mina=0,i,counter=0;
    cin>>n;

    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
     min=a[0];
    max=a[0];
    for(int i=0;i<n;i++)
    {
         if(a[i]>max)
        {
            max=a[i];
            maxa=i;

        }
        if(a[i]<min)
        {
            min=a[i];
            mina=i;
        }

    }
    if(mina<maxa)

         counter=1;

   cout<<(n-1)+maxa-mina-counter<<endl;

    return 0;
}
