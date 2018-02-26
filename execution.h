#include<bits/stdc++.h>
#include<algorithm>
#include"intodecimal.h"
#include"load.h"
using namespace std;
void execute(int *dest,int *src){
	for(int i=0;i<8;i++)
	swap(src[i],dest[i]);
}
void execute(int opcode,int *dest,string operand2){
	if(opcode==1){
		int lw,hg;
		lw=intoDecimal(operand2[1]);
		hg=intoDecimal(operand2[0]);
		cout<<endl<<hg<<"  "<<lw<<endl;
		Load(opcode,lw,hg,dest);	
	}
}
