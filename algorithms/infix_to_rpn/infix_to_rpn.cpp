#include <iostream>
#include <stack>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

void op_to_result(stack<char> &operators, string &result) {
    result.push_back(operators.top()); 
    result.push_back(' '); 
    operators.pop();
}


void process_op(stack<char> &operators, char op, string &result) {
    while (!operators.empty() && operators.top() != '(' &&
           precedence(operators.top()) >= precedence(op)) {
        op_to_result(operators, result);
    }
    operators.push(op);
}

void process_bracket(stack<char> &operators, string &result) {
    while(!operators.empty() && operators.top() != '(') {
        op_to_result(operators, result);
    }

    if(!operators.empty())
        operators.pop();
}

void decode_operation(stack<char> &operators, char token, string &result) {
    switch(token) {
        case '0' ... '9': {
                result.push_back(token);
                result.push_back(' '); 
            break;
        }
        case '(': 
            operators.push(token);
            break;
        case ')': 
            process_bracket(operators, result);
            break;
        case '+': case '-': case '*': case '/': 
            process_op(operators, token, result);
            break;
        default: return;
    }
}

int main () {
    stack<char> operators;
    string expression = "(5-6)*4-(5-2*2)", result = "";

    int i = 0;

    while(i < expression.length()) {
        char token = expression[i];
        decode_operation(operators, token, result);
        i++;
    }

     while (!operators.empty()) {
        op_to_result(operators, result);
    }


    cout << result << endl;

    return 0;
}
