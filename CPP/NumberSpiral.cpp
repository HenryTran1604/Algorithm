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
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//	#endif

	int tc;
	cin >> tc;

	while(tc--){
		ll i, j; cin >> i >> j;
		ll ans = 0;
        if(i > j) {
            ans = i % 2 == 0 ? i * i - j + 1 : (i - 1)*(i - 1) + j;
        } else {
            ans = j % 2 == 0 ? (j - 1)*(j - 1) + i : j*j - i + 1;
        }
        cout << ans << endl;
	}
	return 0;

}

