//
//  main.cpp
//  base9-2
//
//  Created by suchao on 5/21/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "test" << endl;
    int max = 1;
    int i=0;
    int *store;
    //store = (int *)malloc(sizeof(int));
    store = new int[1];
    int tmp;
    while(cin >> tmp){
        if(i >= max){
            max = max * 2;
            //int *q = (int *)malloc(sizeof(int) * max);
            int *q = new int[max];
            for(int j=0; j<i; j++){
                q[j] = store[j];
            }
            delete []store;
            store = q;
        }
        store[i] = tmp;
        i++;
    }
    
    //check
    for(int k=0; k<i; k++){
        cout << *(store+k) << endl;
    }
    
    //free
    delete []store;
    
    return 0;
}
