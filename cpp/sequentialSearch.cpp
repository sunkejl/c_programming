#include <iostream>
#include <vector>
using namespace std;

int find(vector<int>& v,int value){
for (int i = 0;i<v.size();i++){
    if(v[i]==value){
        return 1;
    }
}
 return -1;
}

int main(){
return 0 ;
}

