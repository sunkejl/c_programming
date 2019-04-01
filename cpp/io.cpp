#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream input;
input.open("hello.cpp");
string line;
while(getline(input,line)){
    cout << line << endl;
}
input.close();
}
