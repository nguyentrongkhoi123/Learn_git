#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
using ll = long long; 

int sole(int a){
	int dem = 0 ;
	while (a != 0 ) {
		int sole = a % 10 ;
		if(sole % 2 != 0){
			dem += 1 ;
		}
		a /= 10 ;
	}
	return dem ;
}
bool cmp(int a, int b){
	if(sole(a) != sole(b)){
		return sole(a) > sole(b);
	}
	return a < b ;
	
}
int main(){
	int n ; 
	cout << "Nhap vao so luong phan tu cua mang: " ; cin >> n ;
	int a[n] ;
	cout << "Nhap vao cac phan tu cua mang: " << endl; 
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
	sort(a, a + n, cmp) ;
	for( int x : a){
		cout << x << " " ;
	}
	return 0;
}
