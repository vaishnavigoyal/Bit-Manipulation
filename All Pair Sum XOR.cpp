// Question Statement : Pair Sum XOR of an array , i.e. find the XOR of all the pair sum of array elements

int pair_sum_XOR(vector<int> &arr)
{

  int res=0;

  for(int i=0;i<arr.size();i++)
  {
    res=res^(2*arr[i]);
  }

  return res;
}
