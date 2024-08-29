#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n ; cin >> n  ;
	int a[n] ; 
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
	}
	sort(a + 2 , a + 7, greater<int>()) ;
	for(int x : a) {
		cout << x << " " ;
	}
	
	return 0;
} 
