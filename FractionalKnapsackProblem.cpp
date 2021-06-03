#include<iostream>
#include<algorithm>

using namespace std ;

class Items {
    public:
        float value ;
        float weight; 
    void Display(){
        cout << "Weight = " << weight << " Value = " << value << endl;  
    }    
};

bool comp(Items a , Items b){
    float r1 = a.value / a.weight ;
    float r2 = b.value / b.weight ;
    return r1 > r2 ; 
}
float Knapsack(Items arr[] , int n ,  float w){
    float Weight = 0.0f ;
    float FinalValue = 0.0f;

    for(int i = 0 ; i < n ; i++){
        if(Weight + arr[i].weight < w){
                FinalValue = FinalValue + arr[i].value;
                Weight = Weight + arr[i].weight;
        }
        else{
                FinalValue = FinalValue + (w - Weight) * (arr[i].value/ arr[i].weight);
                break;
        }

    }
    return FinalValue ; 

}

int main(){
    Items arr[] = {{100,20},{60,10},{120,30}};
    int n =  sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,comp);
    cout << Knapsack(arr , n , 50);
    return 0 ;
}