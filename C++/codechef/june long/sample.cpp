#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
void print(vector<string>&v)
{
	for(auto i : v)
		cout << i << " ";
	cout << endl;
}
int get(int curr, int n)
{
	int res = ((curr%3)*n + (curr/3));
	return res;
}
vector<string> perm(string word)
{
	if(word.length() == 1)
		return {word};
	vector<string> rec = perm(word.substr(1));
	char c = word[0];
	vector<string>res;
	for(auto str : rec)
	{
		for(int i = 0; i < str.length()+1; i++)
			res.push_back(str.substr(0,i) + c + str.substr(i));
	}
	return res;
}
int main()
{
	string str = "abcd";
	vector<string> v = perm(str);
	print(v);
}