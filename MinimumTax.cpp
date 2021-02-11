#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
const int mod = 1000000007;

typedef struct node{
    int days, tax;
}Node;

bool comp(Node a, Node b){
    // return (long long)a.days * b.tax < (long long)b.days * a.tax;
    return (double)a.days/a.tax < (double)b.days/b.tax;
}

int solve(vector<int> &a, vector<int> &b) {
  vector<Node> arr;
  long long int tax_perday = 0;
  for(int i=0;i<a.size();i++){
    Node x; x.days = a[i], x.tax = b[i];
    arr.push_back(x);
    tax_perday += b[i];
  }
  sort(arr.begin(), arr.end(), comp);
  long long int tax = 0;
  for(int i=0;i<a.size();i++){
    tax += (arr[i].days*tax_perday)%mod;
    tax %= mod;
    tax_perday -= arr[i].tax;
  }

  return tax;
}

int main(){
  vector<int> a, b;
  int n, x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;a.push_back(x);
  }
  for(int i=0;i<n;i++){
    cin >> x;b.push_back(x);
  }
    cout << solve(a, b) << endl;
    return 0;
}
