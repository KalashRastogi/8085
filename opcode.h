#include<bits/stdc++.h>
using namespace std;
int opCode(string cmd){
	if(cmd=="mov"){
		return 0;	
	}
	else if(cmd=="mvi"){
		return 1;
	}
	else if(cmd=="lxi"){
		return 2;
	}
	else if(cmd=="lda"){
		return 3;
	}
	else if(cmd=="sta"){
		return 4;
	}
	else if(cmd=="lhld"){
		return 5;
	}
	else if(cmd=="shld"){
		return 6;
	}
	else if(cmd=="stax"){
		return 7;
	}
	else if(cmd=="xchg"){
		return 8;
	}
}
