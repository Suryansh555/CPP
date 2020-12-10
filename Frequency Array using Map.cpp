#include <bits/stdc++.h> 
using namespace std; 

int main() {
	int t ;
	cin >>t;
	while(t--){
	    int a;
	    cin >> a;
	    unordered_map<int, int> mp; 
        for (int i = 0; i < a; i++){ 
            int b ;
            cin >> b;
            mp[b]++; 
        }
        int sum = 0;
        for (auto x : mp){
            if(x.second > 1){
                sum = sum + 1;
            }
        }
        if(sum > 0){
            cout<<"ne krasivo"<<endl;
        }
        else{
            cout<<"prekrasnyy"<<endl;
        }
  
	}
	return 0;
}
