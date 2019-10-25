//
//  ConditionalStatement.cpp
//  hackerrank
//
//  Created by Ravin Bhakta on 5/21/19.
//  Copyright © 2019 Ravin Bhakta. All rights reserved.
//

#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string num[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    // Write Your Code Here
    if(n > 9){
        cout<<num[0]<<endl;
    }
    else{
        cout<<num[n]<<endl;
    }
    return 0;
}
