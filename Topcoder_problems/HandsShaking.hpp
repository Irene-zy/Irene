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

class HandsShaking
{
public:
	vector<long long int> store;
	long countPerfect(int n)
	{
		for(int i = 0; i < 50; i ++)
		{
			store.push_back(0);
		}
		long c = count(n);
		return c;
	}

	long count(int n)
	{

		long r = 1;
		if(n==0)
		{
			return 1;
		}else if(n==2)
		{
			return 1;
		}else if(n == 4)
		{
			return 2;
		}else if(n == 6)
		{
			return 5;
		}else if(n==8)
		{
			return 14;
		}else if(n==10)
		{
			return 42;
		// }else if(n==12)
		// {
		// 	return 132;
		// }else if(n==14)
		// {
		// 	return 429;
		// }else if(n==16)
		// {
		// 	return 1430;
		// }else if(n==18)
		// {
		// 	return 4862;
		// }else if(n==20)
		// {
		// 	return 16796;
		// }else if(n==22)
		// {
		// 	return 58786;
		// }else if(n==24)
		// {
		// 	return 208012;
		// }else if(n==26)
		// {
		// 	return 742900;
		// }else if(n==28)
		// {
		// 	return 267440;
		}else if(store[n]!=0)
		{
			//cout<< 1111<<endl;
			return store[n];
		}else
		{
			int tmp = n/2;
			long result = 1;
			long result1 = 0;
			
			
				for(int i = 0; i <= tmp-1; i ++)
				{
					result = count(n-2-i*2)*count(i*2);
					result1 = result1+result;

				}
				store[n] = result1;				
			
	//cout<<"store"<<n<<"="<<store[n]<<endl;
				return result1;

		}
	}
	
};