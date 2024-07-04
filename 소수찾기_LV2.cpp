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
    if(number == 2 ){
        return true;
    }
    for(int i = 2; i <= ((number/2) + 1); i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int solution(string numbers) {

    sort(numbers.begin(), numbers.end());

    set<int> allNumber;
    int answer = 0;

    do{
        for(int i = 1; i <= numbers.size(); i++){
            int n = stoi(numbers.substr(0, i));

            if(isPrimeNumber(n)){
                allNumber.insert(n);
            }
            cout << '\n';
        }
    }while(next_permutation(numbers.begin(), numbers.end()));

    return allNumber.size();
}