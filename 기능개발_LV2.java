#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    stack<int> st;

    for(int i = 0; i< speeds.size(); i++){
        int prog = 100 - progresses[i];
        int speed = speeds[i];
        if(prog % speed == 0 ){
            st.push(prog / speed);
        }else{
            st.push(prog / speed + 1);
        }
    }

    while(!st.empty()){
        int cur = st.top();
        st.pop();

        int cnt = 1;

        while(!st.empty() && cur <= st.top()){
            cnt++;
            st.pop();
        }
        answer.push_back(cnt);
    }

    for(int a : answer){
        cout << a << ' ';
    }

    return answer;
}