#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

const ll MAX = 1e18;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
	cin >> tc;
	ll power = 1;
	vector <ll> v;
	v.push_back(0);
	for(int i = 1; i < 18; i++) {
		ll cnt = (9ll * i * power);
		v.push_back(cnt + v[i - 1]);
		power *= 10;
	}
	while(tc--){
		ll k; cin >> k;
		int numOfDigit = 0;
		for(int i = 0; i <= 18; i++) {
			if(v[i] <= k) {
				numOfDigit = i + 1;
			}
			else break;
		}
		ll distance = k - v[numOfDigit - 1];
		ll remain = distance % numOfDigit;
		ll div = distance / numOfDigit;
		ll lastNum = (ll) pow(10, numOfDigit - 1) + div - (remain == 0);
		string lastNum_str = to_string(lastNum);
//		cout << "remain = " << remain << endl;
//		cout << "div = " << div << endl;
//		cout << "NumOfDigit = " << numOfDigit << endl;
//		cout << "LastNum = " << lastNum_str << endl;
		if(remain == 0)
			cout << lastNum_str[lastNum_str.length() - 1] << endl;
		else
			cout << lastNum_str[remain - 1] << endl;
	}
	return 0;

}
// Author: Tran Quang Huy

