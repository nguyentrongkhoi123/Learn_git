#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b){
	int kc1 = a.first * a.first + a.second * a.second;
	int kc2 = b.first = b.first + b.second * b.second;
	if(kc1 != kc2){
		return kc1 < kc2 ;
	}
	if(a.first != b.first){
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main(){
	int n ; 
	cout << "Nhap vao so luong cac diem: " ; cin >> n ;
	pair<int, int> a[n]; 
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].first >> a[i].second ;
	}
	sort(a, a + n, cmp) ;
	for(auto it : a){
	cout << it.first << it.second << endl; 
	}
	return 0;
}
