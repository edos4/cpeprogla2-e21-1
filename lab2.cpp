#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
// Lab 2 by Smith Ramoy
double problem1(double num){
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Round off value: "<<round(num)<<"\n\n";
	return round(num);
}

void problem2(){
	int uniques[10], num;
	srand((unsigned)time(NULL)); 
	cout << "Unique Numbers: ";
	for(int i=0;i<10;i++){
		num=(rand()%21);
		for(int j=0;j<10;j++){
			if(num==uniques[j]){
					num=(rand()%21);
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << uniques[i]<<" ";
	}
}

void call_by_value(){
	int n, result=1;
	cout<<"\n\nEnter a number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" The factor of " << n << " is" << result << endl;
		else result=result*i;
	}
	cout<<"The factorial of "<< n << " is " << result << endl;
}

main(){
	double num;
	int result;
	problem1(num);
	problem2();
	call_by_value();
}




