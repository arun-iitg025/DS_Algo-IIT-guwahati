#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int, string> m;

    m[1] = "babbar";
    m[2] = "kumar";
    m[13] = "love";
    m.insert( {5, "bheem"});

    for(auto i: m){
        cout << i.first << " " << i.second << endl;

    }
}