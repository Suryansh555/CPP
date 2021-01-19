#include<bits/stdc++.h>
using namespace std;
int main(){
    int size1 , size2 ;
    
    cout << " Enter first Array size :- \n";
    cin >> size1;
    int arr1[size1];
    cout << " Enter first Array elements :- \n";
    for(int i = 0 ; i < size1 ; i ++){
        cin >> arr1[i];
    }
    cout << " Enter second Array size :- \n";
    cin >> size2 ;
    int arr2[size2];
    cout << " Enter second Array elements :- \n";
    for(int i = 0 ; i < size2 ; i ++){
        cin >> arr2[i];
    }


    // Intersection and Union 
    // Using 2 pointers 
    int first = 0 ;
    int second = 0 ;
    vector<int> intersection ;
    vector<int> un ;
    while(first < size1 && second < size2){
        if(arr1[first] == arr2[second]){
             un.push_back(arr1[first]);
             intersection.push_back(arr1[first]);
             first++ ;
             second++;   
        }
        else if(arr1[first] > arr2[second]){
            un.push_back(arr2[second]);
            second++;
        }
        else if(arr1[first] < arr2[second]){
            un.push_back(arr1[first]);
            first++;
        }
    }
    if(!(first == size1)){
        while(first != size1){
            un.push_back(arr1[first]);
            first++;
        }
    }
    if(!(second == size2 ) ){
        while(second != size2)
        un.push_back(arr2[second]);
        second++;
    }
    int a = un.size();
    cout << " Union : " ;
    cout << "{" ;
    for(int i = 0 ; i < a ; i++){
        cout << un[i] << ", ";
    }    
    cout << "}" << endl;

    int b = intersection.size();
    cout << " Intersection : ";
    cout << "{";
    for(int i = 0 ; i < b ; i++){
        cout << intersection[i] << ", ";
    }
    cout << "}" << endl;

    return 0 ;
}