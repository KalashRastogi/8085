#include<bits/stdc++.h>
using namespace std;
extern int register_A[8];
extern int register_B[8];
extern int register_C[8];
extern int register_D[8];
extern int register_E[8];
extern int register_H[8];
extern int register_L[8];
int* registers(char reg){
	int *r;
	if(reg=='a'){
		r=register_A;	
	}
	else if(reg=='b'){
		r=register_B;
	}
	else if(reg=='c'){
		r=register_C;
	}
	else if(reg=='d'){
		r=register_D;
	}
	else if(reg=='e'){
		r=register_E;
	}
	else if(reg=='h'){
		r=register_H;
	}
	else if(reg=='l'){
		r=register_L;
	}
	return r;
}
