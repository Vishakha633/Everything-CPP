//take input from the user and store in array
#include<iostream>
using namespace std;
int main(){
	int arr[5],i,n;
	cout<<"enter any 5 numbers";
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	//print numbers
//	for(const int &n : arr){
//		cout<<n<<endl;
//	}
    for(i=0;i<5;i++){
    	cout<<"the numbers are:";
    	cout<<arr[i]<<endl;
	}
}
