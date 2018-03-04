//reverse.cpp
//Aaron Nicanor
//anicnor

#include <iostream>
#include "dstack.h"

using namespace std;

int main(){
    
    double input;
    Dstack stack;

    while (cin >> input){
        
      stack.push(input);
    }
    cout << "There are " << stack.size() << " numbers in the stack." << endl;
    
    while (stack.pop(value)){
        
      cout << value << endl;
    } 

    cout << "There are " << stack.size() << " numbers in the stack." << endl;

    return 0;
}
