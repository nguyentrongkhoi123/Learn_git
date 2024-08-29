#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
	vector<int> v; 
	v.push_back(3) ; 
	v.push_back(2) ; 
	v.push_back(1) ;
	v.push_back(5) ;
	cout << v.size() << endl ;
//	for(int i = 0 ; i < v.size(); i++){
//		cout << v[i] << ' ' ;
// 	}
 	cout << endl ;
 	for(int x : v) {
 		cout << x << ' ' ; 
	 }
	 cout << endl; 
	 vector<int>::iterator it = v.begin();
//	 cout << *it << endl ;
//	 ++it ;
//	 cout << *it << endl ;
//	 it += 2 ; 
//	 cout << *it << endl ; 
//	for (it; it != v.end(); it++){
//		cout << *it << ' ' ;
//	}
	v.insert(v.begin() + 2, 100) ;
	for (int x : v){
		cout << x << ' ' ;
	}
	cout << endl; 
	v.erase(v.begin() + 2) ;
	for (int x : v){
		cout << x << ' ' ;
	}
	cout << endl; 
	v.pop_back() ;
	for (int x : v){
		cout << x << ' ' ;
	}
	cout << endl ; 
	// pair
	pair<int, int> p = make_pair(10, 20) ;
	cout << p.first << ' ' << p.second << endl;  
	// set
	set<int> se ;
	se.insert(2) ;
	se.insert(3) ;
	se.insert(1) ;
	se.insert(0) ;
	se.insert(4) ;
	se.insert(1) ;
	se.insert(2) ;
	cout << se.size() << endl ; 
	for(int x : se) {
		cout << x << ' ' ;
	} 
	cout << endl; 
	
	for(auto it = se.begin() ; it != se.end(); it++){
		cout << *it << ' ' ;
	}
	cout << endl; 
	
	for(auto it = se.rbegin(); it != se.rend(); it++){
		cout << *it << ' ' ;
	}
	// find
	cout << endl; 
		if(se.find(10) != se.end()){
			cout << "Found!\n" ;
		}
		else{
			cout << "Not Found!\n" ; 
		}
	
	//  count 
		if(se.count(1) != 0){
			cout << "Found!\n" ;
		}
		else{
			cout << "Not Found!\n" ; 
		}
	// erase
		auto itt = se.find(4) ;
		se.erase(itt) ;
		for(int x : se) {
			cout << x << " " ;
		}
		se.insert(4) ;
	
	
	// multiset: luu duoc nhieu phan tu giong nhau, sap xep theo thu tu
	// unordered_set: khong sap xep theo thu tu, chi luu duoc 1 phan tu giong nhau 
	
 	
	return 0 ;
}
