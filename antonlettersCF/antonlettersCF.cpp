#include <bits/stdc++.h>

using namespace std ;


int main()
{

  string s ; cin>>s ;
  int count[26] ;
  for (int i=0;i<26;i++)
  {
	  count[i] = 0 ; //initially set count of every character to zero
  }
  int x ;
  for (int i=0;i<(int) s.size() ; i++)
  {
	  x = s[i] - 'a' ;  //x -----> 0 for 'a' , 1 for 'b' , 2 for 'c' and .... 25 for 'z' ;
	  count[x] += 1 ; // INcrease count of that character
  }
  //count[i] stores count of character at position i
  //character at position 0 is 'a', 1 is 'b' and so on..
  for (int i=0;i<26;i++)
  {
	  cout<<count[i]<<" " ;
  }
  cout<<endl ;
  return 0 ;
}
