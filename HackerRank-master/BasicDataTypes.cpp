//
//  BasicDataTypes.cpp
//  hackerrank
//
//  Created by Ravin Bhakta on 5/21/19.
//  Copyright © 2019 Ravin Bhakta. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int integer;
    long long1;
    char character;
    float floatnumber;
    double doublenumber;
    
    cin >> integer;
    cin >> long1;
    cin >> character;
    cin >> floatnumber;
    cin >> doublenumber;
    
    cout << setprecision(20) << integer << endl;
    cout << setprecision(20) << long1 << endl;
    cout << setprecision(20) << character << endl;
    cout << setprecision(20) << floatnumber << endl;
    cout << setprecision(20) << doublenumber << endl;
    
    
    return 0;
}
