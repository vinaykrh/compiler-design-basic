#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int calculate(int a, int b, char op) {
    if (op == '*') return a * b;
    if (op == '/') return b != 0 ? a / b : 0;
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    return 0;
}

int main() {
    string input;
    cout << "Enter Expression (e.g., 6 + 4 * 2 - 6 / 3): ";
    getline(cin, input);

    stringstream ss(input);
    vector<int> numbers;
    vector<char> operators;

    int num;
    char op;

    ss >> num;
    numbers.push_back(num);

    while (ss >> op >> num) {
        operators.push_back(op);
        numbers.push_back(num);
    }

    for (int i = 0; i < operators.size(); ++i) {
        if (operators[i] == '*' || operators[i] == '/') {
            int result = calculate(numbers[i], numbers[i + 1], operators[i]);
            numbers[i] = result;
            numbers.erase(numbers.begin() + i + 1);
            operators.erase(operators.begin() + i);
            i--; 
        }
    }

    int answer = numbers[0];
    for (int i = 0; i < operators.size(); ++i) {
        answer = calculate(answer, numbers[i + 1], operators[i]);
    }

    cout << "Result: " << answer << endl;
    return 0;
}
