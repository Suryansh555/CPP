#include <iostream>
using namespace std;

class Animal
{
    protected:
    int legs ; 
    int hands;

};

class Dog : public Animal
{
	public:

	void makeNoise()
	{
		cout << "WoofWoof";
	}
};

class Cat : public Animal
{
	public:
	
	void makeNoise()
	{
		cout << "Meaaooooow";
	}
};