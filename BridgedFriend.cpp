#include <iostream.h>
using namespace std ; 

class friendcl
{
private:
    int a,b;
public:
    // Friend Function
    friend int add( friendcl x);
    void set( int w, int q);
};

void friendcl:: set( int w, int q){
    a = w;
    b = q;
}

int add (friendcl x){
    return x.a + x.b;
}

int main(){
friendcl r;
r.set(10,15);
cout << "The sum of the values is = " << add (r);
return 0;
}