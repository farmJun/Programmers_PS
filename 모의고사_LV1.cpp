#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> get(vector<int>v, int size){
    if(v.size() >= size){
        return v;
    }else {
        vector<int> temp;
        int idx = 0;

        for(int i = 0 ; i < size; i++){
            if(idx == v.size()){
                idx = 0;
            }

            temp.push_back(v[idx]);
            idx++;
        }

        return temp;
    }
}


vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,1,2,3,2,4,2,5};
    vector<int> c = {3,3,1,1,2,2,4,4,5,5};

    int size = answers.size();

    a = get(a, size);
    b = get(b, size);
    c = get(c, size);

    int aCnt = 0, bCnt = 0, cCnt = 0;

    for(int i = 0; i < size; i++){
        if(a[i] == answers[i]){
            aCnt++;
        }

        if(b[i] == answers[i]){
            bCnt++;
        }

        if(c[i] == answers[i]){
            cCnt++;
        }
    }
    vector<pair<int,int>> result;
    result.push_back({aCnt, 1});
    result.push_back({bCnt, 2});
    result.push_back({cCnt, 3});

    sort(result.rbegin(), result.rend());
    int max = result[0].first;

    for(auto p : result){
        if(p.first != max){
            break;
        }
        answer.push_back(p.second);
    }
    sort(answer.begin(), answer.end());
    return answer;
}