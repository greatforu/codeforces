#include <iostream>

using namespace std;
int main()
{
    int bal=0,wdrl;
    float temp;
    cout<<"Enter the balance"<<endl;
    cin>>bal;
    cout<<"Enter the amount you want to withdraw"<<endl;
    cin>>wdrl;
    cout<<bal<<endl;
    cout<<wdrl<<endl;
    if(bal<=wdrl)
    {
     cout<<bal<<endl;
    }
    temp=0.50;
    else{
        bal=bal-wdrl-temp;
        cout<<bal;
    }
    return 0;
}
