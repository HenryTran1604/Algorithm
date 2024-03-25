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
		int n, x; cin >> n >> x;
		int p[n];
		for(int i = 0; i < n; i++) cin >> p[i];
		sort(p, p + n);
		int head = 0, tail = n - 1, cnt = 0;
		while(head < tail) {
			int sum = p[head] + p[tail];
			if(sum <= x) {
				head++;
				tail--;
			}
			else tail--;
			cnt++;
		}
		cnt += head == tail;
		cout << cnt << endl;
	}
	return 0;

}
// Author: Tran Quang Huy

