#include <iostream>
using namespace std;

//two cases a base case and a recursive case
int printStars(int n){
if(n>10){
    return 0;
}else{

    cout << "*" <<endl;
        n++;
       printStars(n);

}
}

int printBinary(int n){
if(n<2){
    cout << n;
}else{
int lastDigtit =n%2;
int restOfDigits= n/2;
printBinary(restOfDigits);
cout << lastDigtit;
}
}

int main(){
int n=0;
printStars(n);
printBinary(7);

cout << 7/2 <<endl;
// throw "error";

return 0 ;
}

