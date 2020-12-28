// Question from HackerRank : The Great XOR
// Question link : https://www.hackerrank.com/challenges/the-great-xor/problem
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
    ll n,x;
    cin>>n;
    x=n;

    ll res=0;
    int i=0;
    while(n)
    {
      res+=(1LL<<i);
      i++;
      n>>=1;
    }
    cout<<(res-x)<<endl;
  }
}
