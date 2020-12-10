#include <bits/stdc++.h>
 
using namespace std;

int32_t main() {
	

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		cout << s[0] << '\n';
	}

	return 0;
}
