//
//  vector.h
//  lab07
//
//  Created by Shiv Randhawa on 2018-03-23.
//  Copyright © 2018 Shiv Randhawa. All rights reserved.
//
 #pragma once
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int sum(const std::vector<int>& v){
    int sum_of_elems =0;

    std::for_each(v.begin(), v.end(), [&] (int n) {
        sum_of_elems += n;
        
    })
    ;
    
    cout<<"sum: "<< sum_of_elems<<endl;
    return sum_of_elems;
}



