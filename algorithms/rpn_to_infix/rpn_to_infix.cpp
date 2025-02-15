#include <stack>
#include <iostream>

using namespace std;

int calculate_expression(char first, char token, char second) {
    int num1 = first - '0';
    int num2 = second - '0';

    int res = 0;

    switch(token) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        default: return 0;
    }
}

void process_op(stack<char> &operands, char token, string &infix, int &result, bool prev_op) {
    char second = operands.top();
    operands.pop();
    char first = operands.top();
    operands.pop();

    if(infix.length() == 0) {
        infix = string(1, first) + string(1, token) + string(1, second);
        result = calculate_expression(first, token, second); 
        operands.push('0' + result);
        return;
    }

    if(result == (first - '0')) {
        if(prev_op == true) { 
            infix = "(" + infix + ")" + string(1, token) + string(1, second);
            result = calculate_expression(first, token, second);
        } else {
            infix = infix + string(1, token) + string(1, second);
            result = calculate_expression(first, token, second);
        }
    } else {
        if (prev_op) {
            infix = string(1, first) + string(1, token) + "(" + infix + ")";  
            result = calculate_expression(first, token, second);
        } else {
            infix = string(1, first) + string(1, token) + infix;  
            result = calculate_expression(first, token, second);
        }    
    }
    operands.push('0' + result);
} 

void decode_rpn(stack<char> &operands, char token, string &infix, int &result) {
    static bool prev_op = false;

    switch(token) {
        case '0' ... '9': 
            operands.push(token);
            prev_op = false;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            process_op(operands, token, infix, result, prev_op);
            prev_op = true;
            break;
        default: 
            return;
    }
}

int main() {
    string rpn = "531+-6*", infix = "";
    stack<char> operands;
    int result = 0, i = 0;

    while(i < rpn.length()) {
        char token = rpn[i];
        decode_rpn(operands, token, infix, result);
        i++;
    }

    cout << infix << " = " << result << endl;

    return 1;
}
