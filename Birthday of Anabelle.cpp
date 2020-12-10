#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n ;
	cin >> n ;
	while(n--){
	    int a ;
	    cin >> a;
	    int ar[a];
	    map<int,int> mp ;
	    int cnt = 0;
	    for(int i = 0 ; i < a ; i++){
	        cin >> ar[i];
	        mp[ar[i]]++;
	    }
	        for(int j = 0 ; j < a ; j++){
	            mp[ar[j]]--;
	            if(mp[2000 - ar[j]] > 0){
	                cout<<"Accepted"<<endl;
	                cnt++;
	                break;
	            }
	            mp[ar[j]]++;
	        }

	    
	    	        if(!cnt){
	            cout<<"Rejected"<<endl;
	        }
	}
	return 0;
}
