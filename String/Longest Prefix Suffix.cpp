	int lps(string s) {
	    // Your code goes here
	    int len=0, i=1;
	    while(i<s.size()){
	        if(s[len]==s[i]){
	           len++;
	           i++;
	        }
	        else{
	            i=i-len+1;
	            len=0;
	        }
	    }
	    return len;
	}