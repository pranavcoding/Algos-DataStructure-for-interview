//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.second > p2.second;
}
int main(){

	pair<int,int> p1;
	p1.first=1;
	p1.second=2;
	pair<int,int> p2(4,4);
	std::vector<pair<int,int>> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(make_pair(10,12));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size();i++)
	{
		cout<<v[i].first<<" , "<<v[i].second<<endl;
		/* code */
	}
//Your code comes here.
	getch();
	return 0;
}