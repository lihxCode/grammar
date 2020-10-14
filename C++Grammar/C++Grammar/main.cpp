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
#include <math.h>
using namespace std;

void asterCollsion(vector<int> & asteroids) {
    for (int i = 0; i < asteroids.size(); i++) {
        printf("%d",asteroids[i]);
    }
}
int main(int argc, const char * argv[]) {
    
//    stack<int> s1;
//    stack<int> s2;
//    
//    int v = s1.top();
//    
//    vector<int> obj;
//    for (int i = 0; i < 10; i++) {
//        obj.push_back(i);
//    }
//    for (int i = 0; i < 5; i++) {
//        obj.pop_back();
//    }
//    for (int i = 0; i < obj.size(); i++) {
//        cout << obj[i] << endl;
//    }
//    
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    asterCollsion(v1);
    
    return 0;
}
