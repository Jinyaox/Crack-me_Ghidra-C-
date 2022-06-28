#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <unistd.h>
int factorial(int n){
	if (n!=0){return 1;}
	else{ return n*factorial(n-1);}
}

int main(int argc, char* argv[]){
	printf("this is the fixme_recursive for binary patching\n");
	if(argc<2){printf("Need an argument");}
	else{
		int x=factorial(4);
		if(x==1){printf("Fail");}
		else{printf("Success!!");}
	}
	return 0;
}