#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <string>     //find(string), substr(start ind, end ind)
#include <vector>    //push_back, erase(index, size)
#include <sstream>
#include <iostream>
#include <climits>   //INT_MAX etc.
#include <math.h>
#include <locale>
#include <algorithm>  //sort(name.begin(), name.end())

using namespace std;

class Thimbles
{
public:
	int thimbleWithBall(vector<string> swaps)
	{
		int tmp = 1;
		for(int i = 0; i < swaps.size(); i ++)
		{
			stringstream ss;
			int store1;
			int store2;
			string a = swaps[i];
			ss<<a;
			ss>>store1>>store2;
			store1 = abs(store1);
			store2 = abs(store2);
			// cout<<"store1="<<store1<<endl;
			// cout<<"store2="<<store2<<endl;
			if(store1 == tmp)
			{
				tmp = store2;
			}else if(store2 == tmp)
			{
				tmp = store1;
			}
		}
		return tmp;
	}
};