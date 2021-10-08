#include <iostream>
using namespace std;
// int frstdgt(int t[]){
//     while(int fst<10){
//       int fst=  
//     }
// }
int main() {
	// your code goes here
	int n,t[1000],lstdgt,frstdgt;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>t[i];
       
	    // lstdgt=t[i]%10;
	    // while(frstdgt<10){
	    //     frstdgt=t[i]/10; 
	    // }
	}
	for(int i=0;i<n;i++){
	    // cin>>t[i];
	     lstdgt=t[i]%10;
        frstdgt=t[i];
	    while(frstdgt>10){
	        frstdgt=t[i]/10; 
	    }
        cout<<frstdgt+lstdgt;
	}
    cout<<endl;
	
// 	frstdgt(t);
	return 0;
}

