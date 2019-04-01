#include <iostream>
#include <vector>
using namespace std;


int main(){
vector<int> v={1,2,3};
v.push_back(44);
// vector insert take a while because it take shifting slow
v.insert(v.begin() + 1,22);
cout << v[0] << endl;
cout << v.size() << endl;
//one way
for(int i = 0 ;i<v.size();i++){
    cout << v[i] << endl;
}

//another way
//for each loop read them not change them
 for(int n : v) {
    cout << n << endl;
    }
return 0;
}

