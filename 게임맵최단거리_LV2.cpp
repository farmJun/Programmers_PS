#include<vector>
#include<queue>
#include<tuple>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dist[101][101];

int solution(vector<vector<int>> maps) {
    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 1;

    while (!q.empty()) {
        int curX, curY;
        tie(curX, curY) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = curX + dx[i];
            int ny = curY + dy[i];

            if (nx == n - 1 && ny == m - 1) {
                return dist[curX][curY] + 1;
            }

            if (nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1 || maps[nx][ny] == 0) {
                continue;
            }

            if (dist[nx][ny] == 0) {
                dist[nx][ny] = dist[curX][curY] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}