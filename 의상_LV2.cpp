#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    for (auto v: clothes) m[v[1]]++;
    for (auto iter: m) answer *= iter.second + 1;
    return answer - 1;
}