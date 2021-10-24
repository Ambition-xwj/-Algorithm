#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  double a,b,k;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a>>b>>k;
		if (a>b){
			if (a/b-1<=k) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else{
			if(b/a-1<=k) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
  
  return 0;
}
