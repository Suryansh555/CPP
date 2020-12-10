#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int arr[a];
	for(int i = 0 ; i < a ; i++){
		cin >> arr[i];
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key ;
	}
	for(int b = 0 ; b < a ; b++){
		cout<<arr[b]<<" ";
	}
}