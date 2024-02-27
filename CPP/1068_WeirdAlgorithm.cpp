#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n; cin >> n;
	while(n != 1) {
		cout << n << " ";
		if(n % 2 == 0) n >>= 1;
		else n = 3 * n + 1;
	}
	cout << 1;
	return 0;
}

// author: Quang Huy