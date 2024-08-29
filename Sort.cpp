#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//binary_search(a, a + n, x): tim kiem phan tu x co trong mang a[n] da duoc sap xep
// lower_bound(a, a + n, x): tra ve vi tri dau tien cua phan tu lon hon hoac bang x trong mang a[n]
//upper_bound(a, a + n, x): tra ve vi tri dau tien cua phan tu lon hon x trong mang a[n]

// comparison function
bool cmp(int a, int b){
	return a < b ;
}

int main(){
	int n; 
	cout << "Nhap vao n: " ; cin >> n ;
	int a[n]; 
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
	}
//	sort(a, a + n, cmp);
//	for(int x : a){
//		cout << x << " ";
//	}
	auto it = lower_bound(a, a + n, 3);
	cout << it << " " <<  *it << " " << (it -a) ;
	return 0 ;
}
