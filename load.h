#include<bits/stdc++.h>
using namespace std;
extern int register_A[8];
extern int register_B[8];
extern int register_C[8];
extern int register_D[8];
extern int register_E[8];
extern int register_H[8];
extern int register_L[8];
void Load(int opcode,int l,int h,int *dest){
	int *bin = new int[4],s=3;
	for(int i=0;i<4;i++){
		bin[i]=h%2;
		h/=2;
		dest[s]=bin[i];
		s--;
	}
	s=7;
	for(int i=0;i<4;i++){
		bin[i]=l%2;
		l/=2;
		dest[s]=bin[i];
		s--;
	}
}
