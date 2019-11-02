#include <bits/stdc++.h>

using namespace std;

int main(){

	unordered_map<string,string> dic;

	string key,linea,value,buscar;

	while(getline(cin,linea)){
		if(linea==""){break;}
		istringstream nuevalinea(linea);
		nuevalinea>>value>>key;
		dic[key]=value;
	}
	while(cin>>buscar){
		auto it = dic.find(buscar);
		if(it!=dic.end()){
			cout<<dic[buscar]<<endl;
		}
		else{
			cout<<"eh"<<endl;
		}
	}


	return 0;
}