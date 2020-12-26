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
    int a,b;
    cin>>a>>b;

    int d=(b-a+1);

    int res=0;

    for(int i=0;i<32;i++)
    {
      if(d>(1<<i))
      {
        continue;
      }
      else
      {
        if((a&(1<<i))&&(b&(1<<i)))
        {
          res+=(1<<i);
        }
      }
    }
    cout<<res<<endl;
  }
}
