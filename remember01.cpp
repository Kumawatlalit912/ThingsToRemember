if you erase things iteratively ,then only single occurence gets deleted but if you do value wise then all occurence gets deleted

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define nline "\n"

int main(){
	
multiset<pair<int,int>>s;
		s.insert({12,20});
		s.insert({120,10});
		s.insert({112,210});
		s.insert({102,201});
		s.insert({102,201});
		s.insert({102,201});
		cout<<s.count({102,201})<<nline;
		auto it=s.find({102,201});
		cout<<(*it).first<<nline;
		cout<<"before erasing "<<nline;
		s.erase(it); //this will delete only the pointing occu of that element (consider it as head(pointing to that and getting erased))
		/*
			3
			102
			before erasing 
			12 20
			102 201
			102 201
			112 210
			120 10

		*/
		s.erase(*it); // this will delete entire(all the occu of that element,(a jar of all those elements (and getting erase all at once)));
		/*
			3
			102
			before erasing 
			12 20
			112 210
			120 10
		*/
		for(pair<int,int> i:s){
			cout<<i.first<<" "<<i.second<<nline;
		}
		//to print (type of something);
		cout<<typeid(it).name();
		
}
