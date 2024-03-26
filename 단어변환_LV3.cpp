#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

int visit[52];
map<string, int> m;

bool compare(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            cnt++;
        }
    }
    return cnt == 1 ? true : false;
}

int solution(string begin, string target, vector<string> words) {
    queue<string> q;
    q.push(begin);
    m[begin] = 1;

    while (!q.empty()) {
        string cur = q.front();
        q.pop();

        for (int i = 0; i < words.size(); i++) {
            string next = words[i];

            if (!compare(cur, next)) {
                continue;
            }

            if (next == target) {
                return m[cur];
            }

            if (m[next]) {
                continue;
            }

            q.push(next);
            m[next] = m[cur] + 1;
        }
    }

    return 0;
}