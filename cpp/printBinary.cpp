#include <iostream>

using namespace std;

//say about recursive code
//it doesn't work i don't know why
//it works i don't know why

void printBinary(int digits,string prefix = ""){
if(digits == 0){
    cout << prefix <<endl;
}else{

    printBinary(digits - 1,prefix+"0");

   printBinary(digits - 1,prefix+"1");
}
}

void printDecimal(int digits,string prefix = ""){
if(digits == 0){
    cout << prefix <<endl;
}else{
    for(int i =0 ;i<=9;i++){
        printDecimal(digits - 1,prefix+to_string(i));
    }

}
}

int main(){
printBinary(3);
printDecimal(2);
return 0 ;
}

