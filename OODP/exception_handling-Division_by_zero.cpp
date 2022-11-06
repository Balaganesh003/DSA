#include <iostream>
#include <string>
using namespace std;

double division(int numerator,int denominator){
    if(denominator==0){
        throw 0;
    }
    if(numerator <0 || denominator <0){
        throw string("Negative number");
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
    catch(string e){
        cout<<"Error: "<<e;
    }
    catch(...){
        cout<<"Error: Unknown";
    }

    return 0;
}
