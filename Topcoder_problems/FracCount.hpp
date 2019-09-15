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

class FracCount
{
public:
	int gcd(int i, int j)
	{
		int tmp;
		while(i!=0)
		{
			tmp = i;
			i = j % i;
			j = tmp; 
		}
		return j;
	}
	int position(int numerator, int denominator)
	{
		int counter = 1;
		int a = 1;
		int b = 2;
		while(a!=numerator||b!=denominator)
		{
			if(gcd(a,b)==1)
			{
				counter ++;
			}
			a++;
			if(a>=b)
			{
				b++;
				a = 1;
			}
		}
		return counter;
	}
};