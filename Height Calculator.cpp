#include<bits/stdc++.h>
using namespace std;
struct Height{
    int feet;
    float inch;
}h1 , h2, Result;

int main()
{
    cout << "Enter 1st height," << endl;
    cout << "Enter feet: ";
    cin >> h1.feet;
    cout << "Enter inch: ";
    cin >> h1.inch;

    cout << "\nEnter information for 2nd height" << endl;
    cout << "Enter feet: ";
    cin >> h2.feet;
    cout << "Enter inch: ";
    cin >> h2.inch;

    Result.feet = h1.feet+h2.feet;
    Result.inch = h1.inch+h2.inch;

  
    if(Result.inch > 12)
    {
        ++ Result.feet;
        Result.inch -= 12;
    } 

    cout << endl << "Result of Height = " << Result.feet << " feet  " << Result.inch << " inches";
    return 0;
}