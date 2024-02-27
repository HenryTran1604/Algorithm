#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;
/*
	assume it takes k times to empty 2 piles
	with k1 times by first way
	     k2 times by second way
	2 piles empty =>
	k1 + 2k2 = a
	2k1 + k2 = b
	=> k1, k2
	k1 = (2b - a) / 3
	k2 = (2a - b) / 3

*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
	cin >> tc;

	while(tc--){
		int a, b; cin >> a >> b;
		if (2*b - a < 0 || 2*a - b < 0 || (2*b - a) % 3 != 0 || (2*a - b) % 3 != 0) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;

}

