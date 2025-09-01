#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int numberOfSoldiers;
	int i,k;
	int x=0;
	
	cin >> numberOfSoldiers;

	int num[numberOfSoldiers];
	
	for (i=0; i<numberOfSoldiers; i++) {
	    cin >> num[i];
	}
	
	for (i=0; i<numberOfSoldiers; i++) {
	    
	    if (num[i]%2==0) {
	        k=1;
	    }
	    
	    else {
	        k=0;
	    }
	        
	        x = x+k;
	        
	    }

	
	if (2*x>numberOfSoldiers) {
	    cout <<"READY FOR BATTLE"<< endl;
	}
	    else {
	        cout <<"NOT READY" << endl;
	    }
	}
	