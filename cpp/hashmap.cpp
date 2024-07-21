#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

	// creation

	map<string, int> m;

	// insertion 

	// 1 way

	pair<string, int > p = make_pair("babbar", 2);
	m.insert(p);

	// 2 way 

	pair<string, int> pair2("love", 3);
	m.insert(pair2);

	// 3 way
	m["mera"] = 1;

	// waht will heppen
	m["mera"] = 12;

	//search

	cout << m["mera"] << endl;
	cout << m.at("babbar" ) << endl;

	cout << m["unknownKey"] << endl;		// ishme unknownKey name ka ek entry bana deta hai jahan [0] initilize hota hai;
	cout << m.at("unknownKey" )<< endl;

	// size 

	cout << "size :" << m.size() << endl;

	// to check presence 

	cout << "count : " <<  m.count("love") << endl;

	// erase
	m.erase("love");

	cout << "size : " << m.size() << endl;

	//iterator

	map<string, int> :: iterator it = m.begin(); // m.begin()  yayhan se start hota hai

  //iterator ka khasiyat yah hai ki jab tak end nahi ho jata tab tak print karte raherga 

	cout << "\nPrinting maps: " << endl << endl;

	while(it != m.end()){
		cout << it->first << "\t" << it->second << endl;

		it++;

	}

	return 0;
}