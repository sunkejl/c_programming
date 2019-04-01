#include <iostream>
#include <list>

using
namespace std;

//vector and linked list implement the operations of the abstract data type called "list"
int main()
{
list<int> l = { 7, 5, 16, 8 };


    for (int n : l) {
        std::cout << n << '\n';
    }
}
