//
//  main.cpp
//  lab07
//
//  Created by Shiv Randhawa on 2018-03-23.
//  Copyright © 2018 Shiv Randhawa. All rights reserved.
//
#include <vector>

#include <iostream>
#include "vector.h"


int main(int argc, const char * argv[]) {

	//initailizing vector
	vector<int> myvector;
	for (int i = 0; i<6; i++) {
		myvector.push_back(i);
	}

	sum(myvector);

	system("pause");
	return 0;


}