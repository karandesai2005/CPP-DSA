#include <iostream>


#include <cstdio>
#include <array>
using namespace std;

int main() {
    // Complete the code
    int a,b;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout << "enter number";
    cin>> a >> b;
    for (int i=a; i<=b;i++) {
	    if(i > 9){
		    if(i%2 == 0){
			    cout << "even" << endl;
		    }
		    else{
			    cout << "odd" << endl; 
		    }
	    }
	    else{
		 cout << arr[i] << endl;
	    }
    }
    return 0;
}
