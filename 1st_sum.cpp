//Verilmis 6 reqemli ededin ilk 3 reqeminin cemini tapin: example: 123600= 1+2+3
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n,k=0;
	cin>>n;
	n/=1000;
	for(int i=n;n>=1;n/=10)  {
		k+=n%10;
	}
	cout<<k;	
}
