#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> getGroups(vector<string> v){
	map<string,vector<string>> mp;
	for(auto s:v){
		string curr=s;
		sort(curr.begin(),curr.end());
		mp[curr].push_back(s);
	}
	int noOfGroups=mp.size();
	vector<vector<string>> ans(noOfGroups,vector<string>());
	int i=0;
	for(auto it:mp){
		ans[i]=it.second;
		i++;
	}
	return ans;
}

int main(void){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> v;
		for(int i=0;i<n;i++) {
			string data;
			cin>>data;
			v.push_back(data);
		}
		vector<vector<string>> ans=getGroups(v);
		for(auto group:ans){
			for(string s:group){
				cout<<s<<" ";
			}
			cout<<endl;
		}
	}
	
	
		
	
	return 0;
}
