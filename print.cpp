/*
#include <stdio.h>

int main () {
	int n,jum,sum=0,tidak=0,cetak;
	char doc[1000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%s %d",doc,&jum);
		sum=sum+jum; //sum=27 + 24
		if (sum<=32) {
			printf("%s\n",doc);
		}
		else if (sum>=32) {
			sum=sum-jum; //sum= 51 -24
			tidak++;
		}
	}
	cetak=n-tidak;
	printf("%d %d\n",cetak,tidak);
	return 0;
}
* */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <vector>
 
using namespace std;

int main () {
	int a=0,b=0,c=0,d=0,n;
	char sim[1000];
	
	scanf("%s",sim);
	n=strlen(sim);
	for(int i=0; i<n;i++) {
		if (sim[i]=='{') a++;
		else if (sim[i]=='}') a--;
		else if (sim[i]=='(') b++;
		else if (sim[i]==')') b--;
		else if (sim[i]=='<') c++;
		else if (sim[i]=='>') c--;
		else if (sim[i]=='[') d++;
		else if (sim[i]==']') d--;
	}
	
	if(a==0 && b==0 && c==0 && d==0) cout <<"VALID"<<"\n";
    else cout <<"TIDAK VALID"<<"\n";
	
}
