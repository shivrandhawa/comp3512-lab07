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
    int sumofelements =0;

    std::for_each(v.begin(), v.end(), [&] (int n) {
		sumofelements += n;
        
    })
    ;
    
    cout<<"sum: "<< sumofelements <<endl;
    return sumofelements;
}

int max(std::vector<int>& theVec) {
	int maxofelements = INT_MIN;
		//auto!
	for (auto x : theVec)
	{
		if (maxofelements < x) maxofelements = x;
	}
	return maxofelements;
}

