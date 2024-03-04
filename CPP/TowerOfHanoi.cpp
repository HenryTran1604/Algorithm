#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c) {
	if(n == 1) {
		cout << a << " " << c << endl;
		return;
	}
	towerOfHanoi(n - 1, a, c, b);
	towerOfHanoi(1, a, b, c);
	towerOfHanoi(n - 1, b, a, c);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		int n; cin >> n;
		cout << (int) pow(2, n) - 1 << endl;
		towerOfHanoi(n, '1', '2', '3');
	}
	return 0;

}
// Author: Tran Quang Huy

