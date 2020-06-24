#include<bits/stdc++.h>
using namespace std;

int KedaneAlgo(vector<int> array)
{
	int max_end_here=array[0];
	int max_so_far=array[0];
	for(int i=1;i<array.size();i++)
	{
		max_end_here=max(array[i]+max_end_here,array[i]);
		max_so_far=max(max_so_far,max_end_here);
	}

	return max_so_far;
}

int main()
{
	vector<int>array{-2, -3, 4, -1, -2, 1, 5, -3};
	int max_sum=KedaneAlgo(array);
	cout<<" the max sum is : "<<max_sum;
}