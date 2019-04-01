#include <iostream>
#include <stack>
using namespace std;

int checkBalance(string code){
stack<char> s;
for(int i = 0;i<code.length();i++){

    char c = code[i];
    if(c=='('||c=='{'){
        s.push(c);
    }else if(c ==')'){
              if(s.empty()){
          cout <<"error"<< endl;
    return 1;
}
        if(s.top()=='('){
            s.pop();
       }else{
           cout <<"error"<< c << endl;
            return 1;
       }
    }
    else if(c =='}'){
              if(s.empty()){
          cout <<"error"<< endl;
    return 1;
}
        if(s.top()=='{'){
            s.pop();
        }else{
           cout <<"error"<< c << endl;
            return 1;
       }
    }

}
if(!s.empty()){
          cout <<"error"<< endl;
    return 1;
}
return 0;
}

int main(){
    int r=checkBalance("for(i=1;i<2;i++){})");
cout << "checkBalance:"<<r<<";end" << endl;
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
cout << s.size() << endl;
// can not use for loop
while(!s.empty()){
      cout << s.top() << endl;
    s.pop();
}

return 0 ;
}

