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

class MatchNumbersEasy
{
public:
	string maxNumber(vector<int> matches , int n)
	{
		vector<int> store;
		int tmp = min(matches,n,0);
		int m = matches[tmp];
		// cout<<"m="<<m<<endl;
		// cout<<"n="<<n<<endl;
		int down = 0;
		int counter = 0;
		int p = 0;
		// for(int i = 0; i < matches.size() ; i ++ )
		// {
		// 	tmp = n;
		// 	j = i;
		// 	while(j<matches.size())
		// 	{
		// 		if((tmp - matches[j])>0)
		// 		{
		// 			store.push_back(1);
		// 			j++;
		// 			tmp = tmp - matches;
		// 		}else if((tmp - matches[j]) > 0)
		// 		{
		// 			store.push_back()
		// 		}
		// 	}
		// }
		if(tmp==0)
		{
			tmp = min(matches,n,0);
			counter = 1;
		}
		while(n>=m)
		{
			//cout<<"n="<<n<<endl;
			tmp = min(matches,n,0);
			if(counter == 0)
			{
				tmp = min(matches,n,0);
				cout<<"n="<<n<<endl;
				cout<<"tmp1="<<tmp<<endl;
				store.push_back(tmp);
			}else if(counter == 1&&n!=matches[0])
			{
				//cout<<666<<endl;
				tmp = min(matches,n,matches[0]);
				cout<<"tmp2="<<tmp<<endl;
				counter = 0;
				store.push_back(tmp);
			}else if(counter == 1&&n==matches[0])
			{
				counter = 0;
				n = n - tmp;
				cout<<"tmp3="<<tmp<<endl;
				//cout<<333<<endl;
				store.push_back(tmp);
			}
			n = n - matches[tmp];
			//cout<<"n="<<n<<endl;
			//cout<<"tmp="<<tmp<<endl;
			//store.push_back(tmp);
			//cout<<"store.size = "<<store.size()<<endl;
			tmp = min(matches,n,0);
			//cout<<n<<endl;
		}
		// if(n>0)
		// {
		// 	down = *(store.begin());
		// 	tmp = min(matches,n+matches[down],down);
		// 	if(tmp != -1&&)
		// 	{
		// 		store[]
		// 	}
		// }
		//reverse(matches.begin(),matches.end());
		for(int z = 0; z < store.size(); z++)
		{
			p = store[z];
			for(int y = matches.size()-1; y >=0; y --)
			{
				//cout<<111<<endl;
				if((matches[y]-matches[p])<=n&&matches[y]>=matches[p]&&y>p)
				{
					//cout<<"y="<<y<<endl;
					n = n - matches[y]+matches[p];
					store[z] = y;
					p = store[z];
					
				}
			}
		}
		string result;
		string results;
		int r;
		if(store[0]==0)
		{
			results = "0";
		}else
		{
			for(int q = 0; q < store.size();q ++)
			{
				r =  store[q];
				cout<<"result = "<<r<<endl;
				results = results+to_string(r);

			}
		}
		return results;
	}
	int min(vector<int> input,int n,int d)
	{
		//cout<<111<<endl;
		int tmp = n;
		int j = 0;
		for(int i = input.size()-1; i >=0;i--)
		{
			if(input[i]<=tmp&&input[i]>d)
			{
				//cout<<777<<endl;
				tmp = input[i];
				j = i;
			}
		}
		return j;
	}
};