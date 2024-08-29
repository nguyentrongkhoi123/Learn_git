#include <bits/stdc++.h>

using namespace std; 
int songuyento(int a){
	int dem = 0 ;
	while (a != 0){
		int snt = a % 10 ;
		if(snt < 2){
			return 0 ;
		}
		if(snt == 2){
			dem += 1;
		}
		for(int i = 2 ; i < sqrt(snt) + 1; i++){
			if(snt % i != 0){
				dem += 1 ;
			}
		}
		a /= 10 ;
	}
	return dem ;
}
bool cmp(int a, int b){
	return songuyento(a) < songuyento(b) ;
}
int main(){
	int n ; 
	cout << "Nhap so luong cac phan tu trong mang: " ; cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
	stable_sort(a, a + n, cmp); 
	for(int x : a){
		cout << x << " " ;
	}
	return 0 ;
}
