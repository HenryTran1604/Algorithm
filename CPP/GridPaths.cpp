#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

int n = 7;
int vis[9][9];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int cnt = 0;
string inPath;
void input() {
	cin >> inPath;
	memset(vis, 0, sizeof(vis));
	for(int i = 0; i < 9; i++) {
		vis[i][0] = vis[0][i] = 1;
		vis[i][8] = vis[8][i] = 1; // border
	}
} 
int dfs(int x, int y, int curPos) {
//	cout << x << " " << y << endl;
	// if we visitted 1 line across the grid => we cannot visit all grid
	// 1 vertical line
	if(vis[x][y - 1] && vis[x][y + 1] &&
	   !vis[x - 1][y] && !vis[x + 1][y]) return 0;
	
	// 2 horizontal line
	if(vis[x - 1][y] && vis[x + 1][y] &&
	   !vis[x][y - 1] && !vis[x][y + 1]) return 0;
	   
	if(x == 7 && y == 1) {
		if(curPos == 48) {
			return 1;
//			cout << '1' << endl;	
		}
		return 0;
	}
	if(curPos == 48) return 0;
	int res = 0;
	vis[x][y] = 1;
	
	if(inPath[curPos] != '?') {
		char c = inPath[curPos];
		int i = -1;
		if(c == 'D') i = 3;
		else if(c == 'R') i = 0;
		else if(c == 'U') i = 2;
		else i = 1;
		int x1 = x + dx[i];
		int y1 = y + dy[i];
//		cout << x << " " << dx[i] << endl;
		if(vis[x1][y1] == 0) res += dfs(x1, y1, curPos + 1);
		
	}
	else {
		for(int i = 0; i < 4; i++) {
			int x1 = x + dx[i];
			int y1 = y + dy[i];
			if(vis[x1][y1] == 0) {
				res += dfs(x1, y1, curPos + 1);
			}
		}
	}
	vis[x][y] = 0;
	
	return res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		input();
		cout << dfs(1, 1, 0);

		
	}
	return 0;

}
// Author: Tran Quang Huy

