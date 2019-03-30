#include <iostream>
#include <cmath>

using namespace std;
int handle_math(){
    cout << pow(2,5) << endl;
    cout << sqrt(22) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.2) << endl;
    cout << floor(4.1) << endl;
    cout << fmax(3,8) << endl;
    cout << fmin(3,8) << endl;
    return 0;
}

int handle_calculator(){
    int num1,num2;
    cout << "enter first number:";
    cin >> num1;
    cout << "enter second number:";
    cin >> num2;
    cout << num1 + num2;
    return 0;
}

int handle_getline(){
    string name;
    string sk = "bug";
    getline(cin,name);
    cout << "Hello world!" << name << sk << endl;
}

int handle_cin(){
    int age;
    cin >> age;
    cout << "You are " << age << endl;
}

int handle_color(){
    string color,pluralNoun,celebrity;
    cout << "enter a color:";
    getline(cin,color);
    cout << "enter a plural noun:";
    getline(cin,pluralNoun);
    cout << "enter a celebrity:";
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "i love " << celebrity << endl;
}

int handle_array(){
    int luckyNums[] = {4,2,15,16,23,42};
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;
    int nums[20] = {1,2,3};
    return 0;
}

string handle_switch(int dayNum){
    string dayName;
    switch(dayNum){
      case 1:
      dayName = "Monday";
      break;
      default:
        dayName="Invalid";
        break;
    }
    cout << dayName;
    return dayName;
};

int handle_while(){
    int index = 1;
    while(index <5){
        cout << index <<endl;
        index++;
    }
    return index;
}
int handle_for(){
    for(int i=1;i<500;i++){
        cout << i <<endl;
    }
    return 0;
}
class Book{
private :
    string rating;
public:
    string name;
    int weight;
    double price;
    Book(string a_name,int a_weight,double a_price){
    name = a_name;
    weight = a_weight;
    price = a_price;
    rating = "rate";
    }
    string getRating(){
        return rating;
    }
    void setRating(string newRate){
    rating = newRate;
    }
    bool hasName(){
    if(price >3){
        return true;
    }else{
    return false;
    }
    }
};

//class SubBook : public Book


int main()
{
    Book book1("book 1",33,444);
    book1.name="book 1";
    book1.price=123.33;
    book1.setRating("cc");

    cout << book1.name << endl;
    cout << book1.price << endl;
    cout << book1.weight << endl;
    cout << book1.hasName() << endl;
     cout << book1.getRating() << endl;

   //  SubBook subbook1;

   //     cout << subbook1.getRating() << endl;

    return 0;
    handle_for();
    return 0;
    handle_while();
    return 0;
    handle_switch(1);
    return 0;
    handle_array();
    return 0;
    handle_color();
    return 0;
    handle_calculator();
    return 0;
    cout << "Enter you age:";
    handle_cin();
    handle_math();
    return 0;
}


