#include <string>
#include <vector>

using namespace std;

int dfs(int cur, int number, int target, vector<int> &numbers) {
    if (cur == numbers.size() - 1) {
        return (number == target) ? 1 : 0;
    }

    return dfs(cur + 1, number + numbers[cur + 1], target, numbers) +
           dfs(cur + 1, number - numbers[cur + 1], target, numbers);
}

int solution(vector<int> numbers, int target) {
    return dfs(-1, 0, target, numbers);
}