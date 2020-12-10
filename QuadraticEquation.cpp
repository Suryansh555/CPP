#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a,b,c,x1,x2,discriminant;
    cin>>a>>b>>c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Real and Distinct" << endl;
        if(x1 > x2){
            cout <<x2<<" "<<x1;
            }
        else {
            cout <<x1<<" "<<x2;
        }
    }
    
    else if (discriminant == 0) {
        cout << "Real and Equal" << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout<<x1<<" "<<x1;
    }

    else {
    cout<<"Imaginary";
	
    }

    return 0;
}