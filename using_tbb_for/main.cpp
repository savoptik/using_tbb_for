//
//  main.cpp
//  using_tbb_for
//
//  Created by Артём Семёнов on 15/12/2018.
//  Copyright © 2018 Артём Семёнов. All rights reserved.
//

#include <iostream>
#include <tbb/parallel_for.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> vec1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> res1, res2;
    res1.resize(vec1.size());
    res2.resize(vec2.size());
    for (int i = 0; i < res1.size(); i++) {
        res1[i] = vec1[i] + vec2[i];
        cout << res1[i] << " ";
    } cout << endl;
    tbb::   parallel_for(size_t(0), res2.size(), [&](int i) {
                          res2[i] = vec1[i] + vec2[i];
                          }
                          );
    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    } cout << endl;
    return 0;
}
