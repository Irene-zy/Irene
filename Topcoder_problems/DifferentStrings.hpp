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

class DifferentStrings
{
public:
	int minimize(string A, string B)
	{
		int la = A.length();
		int lb = B.length();
		int result = lb+1;
		int tmp = 0;
		for(int i = 0; i < lb-la+1; i ++)
		{
			tmp = 0;
			for(int j = 0; j < la; j ++)
			{
				if(A[j]!=B[i+j])
				{
					tmp ++;
				}
			}
			if(tmp<result)
			{
				result = tmp;
			}
		}
		return result;
	}
};