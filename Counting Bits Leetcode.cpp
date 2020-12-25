// Question link : https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> res(num+1);

        res[0]=0;

        for(int i=1;i<=num;i++)
        {
            int n=i;

            int cnt=0;

            while(n>0)
            {
                cnt++;

                n=n&(n-1);
            }
            res[i]=cnt;
        }
        return res;
    }
};
