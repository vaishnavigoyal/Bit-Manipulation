// Question from HackerRank : Lonely Integer
// Question link : https://www.hackerrank.com/challenges/lonely-integer/problem
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

  int n;
  cin>>n;

  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int res=0;

  for(int i=0;i<n;i++)
  {
    res^=arr[i];
  }
  cout<<res<<endl;
}
