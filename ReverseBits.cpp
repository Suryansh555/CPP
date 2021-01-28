#include<bits/stdc++.h>
using namespace std;
unsigned int reverse(unsigned int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int ans = 0;
      for(int i = 31; i >= 0; i--){
         ans |= (n & 1) << i;
         n>>=1;
      }
      return ans;
}
