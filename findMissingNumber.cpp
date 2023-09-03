#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	int xor1=0;
	int xor2=0;
	for(int i=1;i<n+1;i++){
		xor1=xor1^a[i+1];
		xor2=xor1^i^(n+1);

	}
	// int xor2=0;
	// for(int i=1;i<=n+1;i++){
	// 	xor2=xor2^i;

	// }

	int x=xor1^xor2;
	cout<<x;


	 
	// for(int i=1;i<=n;i++){
	// 	int flag=0;
	// 	for(int j=0;j<n-1;j++){
	// 		if(a[j]==i){
	// 			flag=1;

	// 			break;
	// 		}
	// 	}
	// 	if(flag==0){
	// 	cout<<i<<endl;
	// }
	// }
	//better solution 
	// int hash[n+1]={0};


	// for(int i=0;i<n-1;i++){
	// 	hash[a[i]]=1;
	// }
	// for(int i=0;i<n;i++){
	// 	if(hash[i]==0){
	// 		cout<< i;
	// 	}
	// }
}