#include <iostream>
#include <map>
using namespace std;


int main(){
map<string,string> m;
m.insert({"h1","hi"});
m.insert({"h2","hey"});
m["h3"]="hello";
cout << m.size()<< endl;
//cout << m.find("h3") << endl;

return 0 ;
}

