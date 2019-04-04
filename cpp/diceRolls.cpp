#include <iostream>
#include <vector>
using namespace std;

void diceHelper(int dice,vector<int>& chosen){
if(dice == 0){
for(int j=0;j<chosen.size();j++){
    cout << chosen[j];
}
cout << endl;
}else{
for(int i =1 ;i<=6;i++){
    chosen.push_back(i);
diceHelper(dice -1,chosen);
chosen.pop_back();
}
}
}
void diceRolls(int dice){
vector<int> chosen;
diceHelper(dice,chosen);
}
int main(){
    diceRolls(3);
return 0 ;
}

