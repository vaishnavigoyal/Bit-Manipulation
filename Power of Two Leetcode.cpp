// Question link : https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<0)
        {
            return false;
        }

        int cnt=0;

        while(n>0)
            {
                cnt++;

                n=n&(n-1);
            }

        return (cnt==1);
    }
};


/////////////////OR/////////////////////

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0)
        {
            return false;
        }

        if((n&(n-1))==0)
        {
            return true;
        }
        return false;
    }
};
