#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

int n, p[21], b[21];
ll minDiff = 1e10;
void update() {
	ll sum = 0;
	for(int i = 1; i <= n; i++) {
		if(b[i]) sum += 1ll * p[i];
		else sum -= 1ll * p[i];
	}
	sum = abs(sum);
	minDiff = min(minDiff, sum);
}

void Try(int i) {
	for(int j = 0; j < 2; j++) {
		b[i] = j;
		if(i == n) {
			update();
		}
		else Try(i + 1);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> p[i];
		Try(1);
		cout << minDiff;
	}
	return 0;

}

