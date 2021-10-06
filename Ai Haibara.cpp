#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,sol;
	cin>>n;
	int arr[n];
	
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int x,a,b;
	cin>>x>>a>>b;
	
	sort(arr,arr+n);
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
	
	for(int i =0;i<n;i++){
		if(x==1){
			sol=arr[a-1]+arr[b-1];
		}
		if(x==2){
			sol=arr[a-1]-arr[b-1];
		}
		if(x==3){
			sol=arr[a-1]*arr[b-1];
		}
		
	}
	
	cout<<endl<<sol;
	
}
