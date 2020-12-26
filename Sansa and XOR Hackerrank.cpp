// Question from Hackerrank : Sansa and XOR
// Question link : https://www.hackerrank.com/challenges/sansa-and-xor/problem?isFullScreen=true
// Solved using bit manipulation
// Observation : number of times an element will appear in an subarray is equal to i*(n-i+1)

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll arr[100001];

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

    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }

    ll res=0;
    ll cnt;
    for(int i=1;i<=n;i++)
    {
      cnt=(i)*(n-i+1);
      if(cnt%2==1)
      {
        res^=arr[i];
      }
    }
    cout<<res<<endl;
  }
}
