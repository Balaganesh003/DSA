#include <iostream>
#include <string>
using namespace std;

class DivideByZeroException{};

class NegativeNumberException{};

double division(int numerator,int denominator){
    if(denominator==0){
        throw DivideByZeroException();
    }
    if(numerator <0 || denominator <0){
        throw NegativeNumberException();
    }
    return static_cast<double> (numerator)/denominator;
}

int main() {
    int n,d;
    cout<<"Enter numerator: ";
    cin>>n;
    cout<<"Enter denominator: ";
    cin>>d;
    try{
        cout<<"Result:"<<division(n,d);}
    catch(const DivideByZeroException &e){
        cout<<"Error: Division by zero is not possible";
    }
    catch(const NegativeNumberException &e){
        cout<<"Error: Negative number";
    }
    catch(...){
        cout<<"Error: Unknown";
    }

    return 0;
}
