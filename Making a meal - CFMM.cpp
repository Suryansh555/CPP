#include <bits/stdc++.h>
 
using namespace std;
 
#define int int64_t
 
void solve() {
	int N;
	cin >> N;
	vector<string> S(N);
	string s;
	for(int i = 0; i < N; i++) {
		cin >> S[i];
		s += S[i];
	}
	int nc = count(begin(s), end(s), 'c');
	int no = count(begin(s), end(s), 'o');
	int nd = count(begin(s), end(s), 'd');
	int ne = count(begin(s), end(s), 'e');
	int nh = count(begin(s), end(s), 'h');
	int nf = count(begin(s), end(s), 'f');
	cout << min({ne / 2, nc / 2, nh, nf, no, nd}) << endl;
}
 
signed main() {
    int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}