// Question from Hackerrank : AND Product
// Question link : https://www.hackerrank.com/challenges/and-product/problem
// Solved using bit manipulation
// Observation : ith bit will have 2^i consecutive 0s and 1s

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
    ll a,b;
    cin>>a>>b;

    ll d=(b-a);

    ll res=0;
    ll f=1;

    for(int i=0;i<32;i++)
    {
      if(d>(f<<i))
      {
        continue;
      }
      else
      {
        if((a&(f<<i))&&(b&(f<<i)))
        {
          res+=(f<<i);
        }
      }
    }
    cout<<res<<endl;
  }
}
