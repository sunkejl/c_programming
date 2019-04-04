#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& v,int value,int start,int end){
    int start =0;
    int end = v.size()-1;
    int mid = (end-start)/2;
    //to not find
    if(v[mid] == value){
        return mid;
    }else if (value <v[mid]){
      return binarySearch(v,value,start,mid-1);
    }else{
     return binarySearch(v,value,mid+1,max);
    }
}
 return -1;
}

int main(){
return 0 ;
}

