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

class BridgeSort
{
public:
	string sortedHand(string hand)
	{
		string C;
		string D;
		string H;
		string S;
		string result;
		for(int z = 0; z < hand.length();z++)
		{
			if(hand[z]=='T')
			{
				hand[z] = 'A';
			}else if(hand[z]=='J')
			{
				hand[z]='B';
			}else if(hand[z]=='Q')
			{
				hand[z]='E';
			}else if(hand[z]=='K')
			{
				hand[z]='F';
			}else if(hand[z]=='A')
			{
				hand[z]='G';
			}
		}
		for(int i = 0; i < hand.length();i++)
		{
			if(hand[i]=='C')
			{
				C = C + hand[i] + hand[i+1];
			}else if(hand[i]=='D')
			{
				D = D + hand[i] + hand[i+1];
			}else if(hand[i]=='H')
			{
				H = H + hand[i] + hand[i+1];
			}else if(hand[i]=='S')
			{
				S = S + hand[i] + hand[i+1];
			}
		}
		result = sortagain(C)+sortagain(D)+sortagain(H)+sortagain(S);
		cout<<result<<endl;
		for(int p = 0; p < result.length();p++)
		{
			if(result[p]=='A')
			{
				result[p] = 'T';
			}else if(result[p]=='B')
			{
				result[p]='J';
			}else if(result[p]=='E')
			{
				result[p]='Q';
			}else if(result[p]=='F')
			{
				result[p]='K';
			}else if(result[p]=='G')
			{
				result[p]='A';
			}
		}
		return result;
	}
	string sortagain(string a)
	{
		string b;
		string tmp;
		int counter = 1;
		if(a.length()==0)
		{
			return a;
		}

		while(counter <= a.length())
		{
					b = a[1];
		for(int j = 1; j < a.length(); j = j+2)
		{
			if(a[j]<b[0])
			{
				//cout<<a[j]<<endl;
				tmp[0] = a[j];
				a[j] = b[0];
				a[j-2] = tmp[0];
			}else
			{
				b[0]=a[j];
			}

		}
		counter = counter +2;
		}
		return a;
	}
};