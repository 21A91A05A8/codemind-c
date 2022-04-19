#include<stdio.h>
#include<math.h>
int main() {
	int i,n,flag,c;
	int l,r;
	scanf("%d",&l);
	scanf("%d",&r);
	
	c = 0; // counter
	// iterating all numbers from l to r
	// and checking if they are prime or not
	for(n = l;n<=r;++n){
		
		// 1 is not prime
		if(n==1)
			continue;
		
		// checking if n is prime or not
		flag = 0;
		for(i = 2;i<=sqrt(n);++i){
			// if i divies n then it means n is not prime
			// flag = 1 denotes that there exist a number
			// between 2 and sqrt(n) that divides n
			if(n%i==0){
				flag=1;
				break;
			}
		}
		
		// flag = 0 implies no number divides n
		// thus, n is prime
		if(flag==0)
			++c;
			
	}
	
	printf("%d",c);
	
}