#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

void inp(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int bs(int a[], int l, int r, int x) {
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		while(l > m && a[m] == -1) m--;
		if(a[m] <= x) {
			res = m;
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		int n, m; cin >> n >> m;
		int h[n], t[m];
		inp(h, n);
		inp(t, m);
		sort(h, h + n);
		for(int i = 0; i < m; i++) {
			int find = bs(h, 0, n - 1, t[i]);
			if(find != -1) {
				h[find] = -1;
			}
			cout << find << endl;
		}
	}
	return 0;

}
// Author: Tran Quang Huy

