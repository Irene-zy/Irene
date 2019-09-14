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

class BigBurger
{
public:
	int maxWait(vector<int> arrival,vector<int> service)
	{
		//cout<<arrival[0]<<endl;
		//cout<<service[0]<<endl;
		int total = arrival[0]+service[0];
		int wait = 0;
		//int tmp = total;
		int result = 0;
		for(int i = 1; i < service.size(); i ++)
		{
			//cout<<111<<endl;
			if(arrival[i]<total)
			{
				wait = total - arrival[i];
				total = total + service[i];
				//tmp = total;
				//cout<<wait<<endl;
			}else if(arrival[i]>=total)
			{
				total = arrival[i]+service[i];
			}
			// cout<<total<<endl;
			// cout<<wait<<endl;
			if(result < wait)
			{
				result = wait;
			}

		}
		return result;
	}
};