#include<iostream>
using namespace std;
#include<vector>

int solve(vector<int> &A) {
    int ans = 0;
    for(int i=31;i>=0;i--){
        int sig_bit = 1 << i;
        vector<int> temp;
        for(int i=0;i<A.size();i++)
            if(sig_bit & A[i])
                temp.push_back(A[i]);

        if(temp.size()>=4){
            ans = ans | sig_bit;
            A = temp;
        }
    }
    return ans;
}

int main(){
  vector<int> arr;
  int n, x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;arr.push_back(x);
  }
    cout << solve(arr) << endl;
    return 0;
}
