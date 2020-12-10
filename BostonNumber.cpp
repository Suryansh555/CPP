#include<iostream>
using namespace std;

int isprime(int no)
{
    int i=2;
    while(i<=no-1)
    {
        if(no%i==0)
        {
            return 1;
        }
        i=i+1;
    }
    return 0;
}

int digits(int no)
{
	int b,sum,sum1=0;
	for(int a=no;a>0;a=a/10)
	{
		b=a%10;
		sum1=sum1+b;		
	}
	return sum1;
}

int primefactor(int n)
{
	int a,sum=0,b,c;
    b=n;
    int i=2;
    while(b>1)
    {
        for(int j=i;j>0;)
        {
            if(b%j==0)
            {
                a=isprime(j);
                b=b/j;
                if(j<=9)
                {
                    if(a==0)
                        sum=sum+j;
                }
                else
                {   
                   c=digits(j);
                   sum=sum+c;
                } 
            }
            else    
                break;
        }
        i++;

    }
    return sum;
}
int main() {
	int n,sum,sum1;
	cin>>n;
	sum=digits(n);
	sum1=primefactor(n);
	if(sum==sum1)
		cout<<'1';
	else
		cout<<'0';
		return 0;
}
