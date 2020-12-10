#include <iostream>
using namespace std;
int main() {
	char ch;
	cin>>ch;

	if(islower(ch)){
		cout<<"L";
	}
	else if(isupper(ch)){
		cout<<"U";
	}
    else{
        cout<<"I";
    }
	return 0;
}