#include<iostream>
using namespace std;

const float pi=3.14;
float area(float n,float b,float h)
{
    return (n*b*h);
}
float area(float r)
{
    return pi*r*r;
}
float area(float l,float b)
{
    return l*b;

}
int main()
{
    float result,r,l,b,h;


    cout<<"Enter the radius of circle:"<<endl;
    cin>>r;
    result= area(r);
    cout<<"the area is "<<result<<endl;


    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    result= area(l,b);
    cout<<"the area is "<<result<<endl;

    cout<<"Enter the height and width of triangle"<<endl;
    cin>>h>>b;
    result=area(0.5,h,b);
    cout<<"the area is "<<result<<endl;



}