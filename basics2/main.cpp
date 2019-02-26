#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number";
    cin>>n;
     while(n!=1)
    {

      for(i=2; i<n; i++)
        {
         if(n%i==0)
         {break;}
        }
      if(i==n)
      {
          cout<<n<<endl;
      }
       n--;
    }
    cout<<n<<" is the prime number";
    return 0;
}
