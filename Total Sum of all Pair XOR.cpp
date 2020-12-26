// Question Statement : Calculate Total sum of all unordered XOR pairs of a n array

int unordered_pair_XOR(vector<int> &arr)
{

  int res=0;
  int n=arr.size();

  for(int i=0;i<31;i++)
  {
    int one=0,zero=0;
    for(int j=0;j<n;j++)
    {
      if(arr[j]&(1<<i))
      {
        one++;
      }
      else
      {
        zero++;
      }
    }
    int p=one*zero;
    res+=(1<<i)*p;
  }

  return res;
}
