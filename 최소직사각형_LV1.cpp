#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0;
    int height = 0;

    for(auto size : sizes){
        sort(size.begin(), size.end());
        width = (size[0] > width) ? size[0] : width;
        height = (size[1] > height) ? size[1] : height;
    }

    return width * height;
}