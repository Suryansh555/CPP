class Solution{
public:
    long long getSmallestDivNum(long long n){
        long long res = 1;
        for(long long i=1;i<=n;i++)
            res = (res*i)/__gcd(res,i); 
        return res;
    }
};