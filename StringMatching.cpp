#include<iostream>
#include<string.h>
using namespace std;
//function to search pattern in text

void search(char* pat, char* txt){
int M = strlen(pat);
int N = strlen(txt);
//iterate loop from 0 to N - M
for(int i = 0; i <= N - M; i++){
//variable to hold index of pattern
int j;
//iterate loop from 0 to M-1
for (j = 0; j < M; j++){
if (txt[i + j] != pat[j])
//mismatch so break
break;

}
//if j is equal to M, mean pattern found
if (j == M){
cout<<pat<<"found at index "<< i << endl;
}
}
}
int main() {
char txt[] = "AABAACAADAABAAABAA";
char pat[] = "AABA";
search(pat, txt);
return 0;
}
