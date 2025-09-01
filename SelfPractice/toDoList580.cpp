#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int  n;
	    int k=0;
	    cin >> n;
	    
	    int rating[n];
	    
	    for (int i=0; i<n; i++) {
	        cin >> rating[n];
	        if (rating[n]>=1000){
	            k = k + 1;
	        }
	        
	        else {
	            k = k + 0;
	        }
	        
	    }
        cout << n-k << endl;
	}
return 0;
}
