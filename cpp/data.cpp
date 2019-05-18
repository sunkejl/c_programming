#include <iostream>
#include "data.h"
using namespace std;

Data::Date(int m,int d){
    month = m;
    day = d;
}

int Data:: getMonth(){
    return month;
}

int Data:: getDay(){
    return day;
}
