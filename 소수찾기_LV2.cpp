#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

bool isPrimeNumber(int number){
    if(number == 0 || number == 1){
        return false;
    }
    if(number == 2){
        return true;
    }
    for(int i = 2; i <= ((number/2)+1); i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int solution(string numbers) {
    vector<int> number;

    for(int i = 0; i < numbers.size(); i++){
        number.push_back(numbers[i] -'0');
    }

    sort(number.begin(), number.end());

    set<int> allNumber;
    int answer = 0;


    do{
        int p = 0;
        for(int i = 1; i <= number.size(); i++){
            int n = 0;
            for(int j = 0; j < i; j++){
                n += pow(10, j) * number[j];
            }
            cout << n << '\n';
            if(isPrimeNumber(n)){
                allNumber.insert(n);
            }
        }
    }while(next_permutation(number.begin(), number.end()));

    return allNumber.size();
}