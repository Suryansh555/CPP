#include<bits/stdc++.h>
using namespace std ;

string solve(string A) {
    vector<string> ans ;
    string new1 = "";
    for(int i = 0 ; i < A.length(); i++){
        if(A[i] == ' '){
            ans.push_back(new1);
            new1 = "";
            continue;
        }
        new1.push_back(A[i]);
    }
    ans.push_back(new1);
    
    string day = ans[0];
    string month = ans[1];
    string year = ans[2];

    year.push_back('-');
        map<string, string> months
    {
        { "Jan", "01" },
        { "Feb", "02" },
        { "Mar", "03" },
        { "Apr", "04" },
        { "May", "05" },
        { "Jun", "06" },
        { "Jul", "07" },
        { "Aug", "08" },
        { "Sep", "09" },
        { "Oct", "10" },
        { "Nov", "11" },
        { "Dec", "12" }
    };
    string mainmonth = months[month];
    year.push_back(mainmonth[0]);
    year.push_back(mainmonth[1]);
    
    
    
    year.push_back('-');
    if(day.length() == 4){
        year.push_back(day[0]);
        year.push_back(day[1]);
    }
    else{
        year.push_back('0');
        year.push_back(day[0]);
    }
    return year;
    
}
