#include<bits/stdc++.h>
using namespace std;
int a[1000010]={0},q[100100]={0};

bool isl(int now,int point){
	if (a[now]>=point){
		return false;
	}else{
		return true;
	}
}

int mpl(int point,int max){
	int l=-1,r=max+1;
	int m=(l+r)/2;
	while(l<r){
		if (isl(m,point)){
			l=m;
		}else{
			r=m;
		}
		m=(l+r)/2;
	}
	if(a[r]!=point){
		return -1;
	}
	return r;
}

int main(){
	int n,m;
	cin>>n>>m;
	if(n==0||m==0){
		cout<<-1;
	}
	for (int i = 1; i <= n; i++){
		cin>>a[i];
	}
	for (int i = 1; i <= m; i++){
		cin>>q[i];
	}
	
	for (int i = 1; i <= m; i++){
		printf("%d ",mpl(q[i],n));
	}
	return 0;
}