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
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		int n, m, k; cin >> n >> m >> k;
		int a[n], b[m];
		inp(a, n);
		inp(b, m);
		sort(a, a + n);
		sort(b, b + m);
		int i = 0, j = 0, cnt = 0;
		while(i < n && j < m) {
			if(a[i] - k <= b[j] && b[j] <= a[i] + k) {
				cnt ++;
				i++;
				j++;
			}
			else if(a[i] > b[j]) j++;
			else i++;
		}
		cout << cnt << endl;
		
	}
	return 0;
	// 45 60 60 80
	// 30 60 75
}
// Author: Tran Quang Huy

