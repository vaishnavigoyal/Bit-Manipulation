// Question from HackerRank : Counter game
// Question link : https://www.hackerrank.com/challenges/counter-game/problem
// Solved using bit manipulation

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;

  while(t--)
  {
    ll n;
    cin>>n;

    if(n==1)
    {
      cout<<"Richard"<<endl;
    }
    else
    {
      n-=1;
      int count=0;
      while(n)
      {
        count++;
        n=(n&(n-1));
      }
      if(count&1)
      {
        cout<<"Louise"<<endl;
      }
      else
      {
        cout<<"Richard"<<endl;
      }
    }
  }
}
