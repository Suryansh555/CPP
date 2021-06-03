#include<bits/stdc++.h>
using namespace std ;

class Activity{
    public : 
    int start ; 
    int finish ;
    void Display(){
        cout << "Start Time = " << start << " Finish Time = " << finish << endl ; 
    }
};

bool compare(Activity A , Activity B){
    return A.finish < B.finish ; 
}

int Solve(Activity arr [] , int n){
    arr[0].Display();
    int index = 0 ;
    int count = 1 ; 
    for(int i = 1 ; i < n ; i++){
        if(arr[i].start >= arr[index].finish){
            index = i ; 
            arr[i].Display();
            count ++;
        }
    }
    return count ;
}


int main(){
    Activity arr[] = {{10,20},{12,25},{20,30}};
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr,arr+n,compare);
    cout << Solve(arr , n );



    return 0 ; 
}