// 더 크게 합치기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int num1 = stoi(to_string(a)+to_string(b));
    int num2 = stoi(to_string(b)+to_string(a));
    answer = (num1 >= num2 ? num1 : num2);
    return answer;
}

int main(){
    int a = 9, b = 91;
    cout << solution(a, b);
}