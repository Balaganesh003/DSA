#include<iostream>

using namespace std;
class shape
{
public:
    int total_area = 0;
    string shape_name;
    void display()
    {
        cout<<"Area of "<<shape_name <<" is: "<<total_area<<endl;
    }
};
class circle: public shape
{
    float r; //r=radius
public:
    void area()
    {
        cout<<"\nEnter radius : ";
        cin>>r;
        total_area = 3.14*r*r;
        shape_name= "Circle";
        display();
    }
};
class rectangle: public shape
{
    int l,b;
public:
    void area()
    {
        cout<<"Enter length and breadth : "<<endl;
        cin>>l >> b;
        total_area = l*b;
        shape_name= "Rectangle";
        display();
    }
};

int main()
{
    circle c; // object created
    c.area();
    rectangle r; // object created
    r.area();
    return 0;
}
