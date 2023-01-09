#include<stdio.h>
#include<math.h>
int main(){
	int i,c,k,r,z,b;
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	
	
	for(i=m;i<=n;i++){

	z=i;
	b=i;

	k=0;

	}
	
	while(z>0){
		r=z%10;
		k=k+r*r*r;
		z=z/10;
	}
	if(k==b){
		printf("%d",k);
	}
	
	
	return 0;
}
