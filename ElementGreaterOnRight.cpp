#include <bits/stdc++.h>
using namespace std;
 
void display(int countLeftGreater[], int N)
{
    for (int i = 0; i < N; i++) {
        cout << countLeftGreater[i]
             << " ";
    }
}

void countGreater(int arr[], int N)
{
    set<int> St;
 
    int countLeftGreater[N];
 
    for (int i = 0; i < N; i++) {

        St.insert(arr[i]);
        auto it = St.upper_bound(arr[i]);
        countLeftGreater[i]
            = distance(it, St.end());
    }
    display(countLeftGreater, N);
}
int main()
{
    int arr[] = { 12, 1, 2, 3, 0, 11, 4 };
    int N = sizeof(arr) / sizeof(arr[0]);
    countGreater(arr, N);
}