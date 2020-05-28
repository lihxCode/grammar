//
//  main.cpp
//  C++Grammar
//
//  Created by delegate on 2020/5/28.
//  Copyright © 2020 Kx. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    stack<int> s1;
    stack<int> s2;
    
    int v = s1.top();
    
    vector<int> obj;
    for (int i = 0; i < 10; i++) {
        obj.push_back(i);
    }
    for (int i = 0; i < 5; i++) {
        obj.pop_back();
    }
    for (int i = 0; i < obj.size(); i++) {
        cout << obj[i] << endl;
    }
    return 0;
}
