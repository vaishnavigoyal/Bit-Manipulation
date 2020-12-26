// Question from Hackerrank : Sum vs XOR
// Question link : https://www.hackerrank.com/challenges/sum-vs-xor/problem
// Solved using bit manipulation
// Observation : A+B=(A XOR B) + 2*(A&B)
// Here A&B=0 for the result
// For a number x to have AND 0 with N
// x must have 0 at all places where N have 1
// x can have 1 or 0 at places where N have 0

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int findMSB(ll n)
{
  ll f=1;
  for(int i=55;i>=0;i--)
  {
    if(n&(f<<i))
    {
      return i;
    }
  }
  return 0;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n;
  cin>>n;

  int msb=findMSB(n);
  if(msb==0)
  {
    cout<<1<<endl;
  }
  else
  {
    ll f=1;
    int cnt=0;

    for(int i=0;i<msb;i++)
    {
        if((n&(f<<i))==0)
        {
          cnt++;
        }
    }
    cout<<(f<<cnt)<<endl;
  }

}
