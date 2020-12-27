// Question from CodeChef : And Operation
// Question link : https://www.codechef.com/problems/TAAND
// Solved using bit manipulation
// Observation : Everytime we get 2 or more than 2 numbers
// With ith bit set , we make  a new array and start working on it

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

  ll res=0;

  for(int i=31;i>=0;i--)
  {
    vector<int> temp;
    for(int j=0;j<arr.size();j++)
    {
      if(arr[j]&(1<<i))
      {
        temp.push_back(arr[j]);
      }
    }
    if(temp.size()>=2)
    {
      res+=(1<<i);
      arr=temp;
    }
  }
  cout<<res<<endl;
}
