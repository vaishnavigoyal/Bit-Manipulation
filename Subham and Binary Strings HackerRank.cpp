// Question from HackerEarth  : Shubham & Binary String
// Question link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/
// Solved using bit manipulation
// Observation : Number of 0 in the string
// Is Equal to the number of even decimal value
// Because the number of times 0 will beon the LSB , then the decimal value will be even

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
    int n;
    cin>>n;

    string s;
    cin>>s;

    int res=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='0')
      {
        res++;
      }
    }

    cout<<res<<endl;
  }

}
