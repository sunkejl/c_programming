#include <iostream>
#include <cmath>
using namespace std;

void quadratic(int a,int b,int c,double& r1,double& r2);

int main(){
    double r1,r2;
    quadratic(1,2,3,r1,r2);
cout << r1 << endl;
cout << r2 << endl;
return 0 ;
}

void quadratic(int a,int b,int c,double& r1,double& r2){
r1 = (-b+(b*b-4*a*c))/(2*a);
r2 = sqrt(2)+(-b+(b*b-4*a*c))/(2*a);
}
