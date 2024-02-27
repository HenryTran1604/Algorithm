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
		int cnt = 0;
		for(int i = 1; i <= n; i++) {
			int tmp = i;
			while(tmp % 5 == 0) {
				cnt ++;
				tmp /= 5;
			}
		}
		cout << cnt << endl;
	}
	return 0;

}

