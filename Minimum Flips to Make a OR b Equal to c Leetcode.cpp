// Question link : https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/

class Solution {
public:
    int minFlips(int a, int b, int c) {

        int res=0;

        for(int i=0;i<32;i++)
        {
            bool A=false,B=false,C=false;
            if(c&(1<<i))
            {
                C=true;
            }
            if(a&(1<<i))
            {
                A=true;
            }
            if(b&(1<<i))
            {
                B=true;
            }
            if(C)
            {
                if(!A&&!B)
                {
                    res++;
                }
            }
            else
            {
                if(A&&B)
                {
                    res+=2;
                }
                else if(A||B)
                {
                    res++;
                }
            }
        }
        return res;
    }
};
