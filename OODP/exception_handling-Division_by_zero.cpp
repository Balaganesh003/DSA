#include <iostream>
using namespace std;

double division(int numerator,int denominator){
    if(denominator==0){
        throw 0;
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
    catch(int e){
        cout<<"Error: Division by " << e << " is not possible";
    }
    return 0;
}
