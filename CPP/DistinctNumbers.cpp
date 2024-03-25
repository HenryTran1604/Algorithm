#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		int n; cin >> n;
		int a[n];
		set <int> se;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}
		cout << se.size();
	}
	return 0;

}
// Author: Tran Quang Huy

