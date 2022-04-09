#include<bits/stdc++.h>
using namespace std;

int getSquareSum(int n){
	int sum=0;
	while(n){
		int d=n%10;
		sum=sum+d*d;
		n/=10;
	}
	return sum;
}


int main(void){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		
		map<int,bool> v;
		
		v[n]=true;
		int steps=0;
		while(n!=1)
		{
			//cout<<n<<endl;
			n=getSquareSum(n);
			if(v.find(n)!=v.end()) {
				cout<<-1<<endl;break;
			}
			v[n]=true;
			steps++;
		}
		if(n==1){
			cout<<steps<<endl;
		}
	}
	
	
		
	
	return 0;
}
