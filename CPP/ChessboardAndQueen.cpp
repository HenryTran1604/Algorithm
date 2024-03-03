#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

char board[10][10];
bool pos[10][10];
int a[10], col[10], row[10], c1[20], c2[20];
int cnt = 0;

void inp() {
	for(int i = 1; i <= 8; i++) {
		for(int j = 1; j <= 8; j++) {
			cin >> board[i][j];
		}
	}
}

bool canPlace(int row, int col) {
	if(board[row][col] == '*') {
		return false;
	}
	
	for(int i = 1; i <= col; i++) {
		if(pos[row][i]) return false;
	}
	for(int i = row, j = col; i >=0 && j >= 0; i--, j--) {
		if(pos[i][j]) return false;
	}
	
	for(int i = row, j = col; i <= 8 && j >= 0; i++, j--) {
		if(pos[i][j]) return false;
	}
	return true;
}

void Try(int col) {
	for(int row = 1; row <= 8; row++) {
		if(canPlace(row, col)) {
			pos[row][col] = 1;
			if(col == 8) {
				cnt++;
			}
			else Try(col + 1);
			pos[row][col] = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		inp();
		Try(1);
		cout << cnt;
	}
	return 0;

}

