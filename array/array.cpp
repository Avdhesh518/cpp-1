#include<iostream>
#include<stdlib.h>
#include<iomanip>

#define random(num)   rand()%num

using namespace std;
int main(){
	int a[10],i;
	//input phase 
	for(i=0;i<10;i++)
		a[i] = random(10);
	// output phase
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];
	return 0;
}
