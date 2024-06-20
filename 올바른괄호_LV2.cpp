#include<string>
#include<iostream>
#include<stack>

using namespace std;

bool solution(string s){
    stack<char> stack;

    for(int i = 0; i< s.length(); i++){
        char c = s[i];
        if (c == '(') {
            stack.push(c);
        } else {
            if (stack.empty()) {
                return false;
            } else if (stack.top() == '(') {
                stack.pop();
            } else {
                return false;
            }
        }
    }
    return stack.empty();
}
