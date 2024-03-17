#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    set<int> s;
    int size = nums.size();

    for (auto num: nums) {
        s.insert(num);
    }

    if (s.size() > size / 2) {
        answer = size / 2;
    } else {
        answer = s.size();
    }

    return answer;
}