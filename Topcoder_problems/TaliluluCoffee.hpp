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

class TaliluluCoffee
{
public:
	int maxTip(vector<int> tips)
	{
		sort(tips.begin(),tips.end());
		int tmp = 0;
		int result = 0;
		if(tips.size()==0)
		{
			return result;
		}
		while(tmp<tips[tips.size()-tmp-1])
		{
			result = result + tips[tips.size()-tmp-1]-tmp;
			tmp++;
			if(tmp==tips.size())
			{
				return result;
			}
		}
			return result;
	}

};