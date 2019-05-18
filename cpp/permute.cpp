#include <iostream>
#include <string>

using namespace std;

void permuteHelper(string s , string chosen){
if(s.empty()){
    cout << chosen << endl;
}else{
    for (int i = 0 ;i<s.length();i++){
        char c= s[i];
        chosen+=c;
        s.erase(i,1);
        permuteHelper(s,chosen);

        s.insert(i,1,c);
        chosen.erase(chosen.length()-1,1);

    }
}
}

void permute(string s){
    permuteHelper(s,"");
}

int main(){
permute("sunke");
return 0 ;
}

