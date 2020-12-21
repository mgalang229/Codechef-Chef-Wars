#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int h, p;
	cin >> h >> p;
	//for every loop: decrease 'h' by 'p' and divide 'p' by 2
	while(h>0&&p>0) {
		h=max(0, h-p);
		p/=2;
	}
	//if 'h' is greater than 'p' then print 0, otherwise print 1
	cout << (h>p?0:1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
