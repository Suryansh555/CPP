#include <bits/stdc++.h>
using namespace std;
int main(){
    int calls ;
    int sms ;
    printf("Please Enter Number of Calls \n");
    scanf("%d",&calls);

    printf("Please Enter Number of SMS \n");
    scanf("%d",&sms);
    
    float ChargeCalls ;
    if(calls < 50){
        ChargeCalls = 50 * calls ;
    }
    else if(calls < 150){
        ChargeCalls = (50 * 50) + (calls-50) * 70 ;   
    }
    else if(calls < 300){
       ChargeCalls = (50 * 50) +  (100 * 70) + (calls - 150) * 85 ;  
    }
    else {
        ChargeCalls = (50 * 50) +  (100 * 70) + 150 * 85 + (calls - 300) * 95 ;
    }

    float ChargeSMS;
        if(sms < 50){
        ChargeSMS = 0 ;
    }
    else if(sms < 200){
        ChargeSMS = (sms - 50) * 25 ;   
    }
    else if(sms < 400){
       ChargeSMS = 150 * 25 + (sms - 200) * 40 ;  
    }
    else {
        ChargeSMS = 150 * 25 + 200 * 40 + (sms - 400) * 45 ;
    }
    float res = (float) ChargeCalls / 100 ;
    float res1 = (float) ChargeSMS / 100 ;

    cout << "Charges for call : " << fixed << setprecision(2) << res << "/-" << endl;
    cout << "Charges for SMS : " << fixed << setprecision(2)   << res1 << "/-" << endl;
    cout << "Total Charges : "  << fixed << setprecision(2) <<  res1 + res << "/-" << endl;
    
return 0 ;

}