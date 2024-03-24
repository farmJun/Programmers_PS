#include <string>
#include <vector>

using namespace std;


bool visit[201];
vector<int> graph[201];

void dfs(int start) {
    visit[start] = true;

    for (int next: graph[start]) {
        if (!visit[next]) {
            dfs(next);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || computers[i][j] == 0) {
                continue;
            }
            graph[i].push_back(j);
        }
    }

    for (int i = 0; i < n; i++) {
        if (!visit[i]) {
            dfs(i);
            answer++;
        }
    }

    return answer;
}