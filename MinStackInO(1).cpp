#include<bits/stdc++.h>
using namespace std ;

int min_num;
stack<int> s;
    
void MinStack() {
    s = stack<int>();

}

void push(int x) {
    if(s.empty()) {
        min_num = x;
    }
    
    if(x >= min_num) {
        s.push(x);
    }
    else {
        s.push(2 * x - min_num);
        min_num = x;
    }
}

void pop() {
    if(s.empty()) {
        return;
    }
    
    if(s.top() < min_num) {
        min_num = 2 * min_num - s.top();
    }
    
    s.pop();
}

int top() {
    if(s.empty()) {
        return -1;
    }
    
    if(s.top() < min_num) {
        return min_num;
    }
    else {
        return s.top();
    }
}

int getMin() {
    if(s.empty()) {
        return -1;
    }
    return min_num;
}

