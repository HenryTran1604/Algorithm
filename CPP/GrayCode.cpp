#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;
int n, b[17];
void print() {
	cout << b[1];
	for(int i = 2; i <= n; i++) {
		int x = b[i] ^ b[i - 1];
		cout << x;
	}
	cout << endl;
}
void Try(int i) {
	for(int j = 0; j < 2; j++) {
		b[i] = j;
		if(i == n) print();
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
		Try(1);
	}
	return 0;

}

