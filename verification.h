#include<bits/stdc++.h>
using namespace std;
bool verify(int opcode ,char operand1,string operand2){
	if(operand1=='a'||operand1=='b'||operand1=='c'||operand1=='d'||operand1=='e'||operand1=='h'||operand1=='l'){
		if(opcode==0){
			if(operand2[0]=='a'||operand2[0]=='b'||operand2[0]=='c'||operand2[0]=='d'||operand2[0]=='e'||operand2[0]=='h'||operand2[0]=='l'){
				return true;
			}
			else{
				return false;
			}
		}
		else if(opcode==1){
			if((operand2[0]>='a'&&operand2[0]<='f')||(operand2[0]>='0'&&operand2[0]<='9')){
				if((operand2[1]>='a'&&operand2[1]<='f')||(operand2[1]>='0'&&operand2[1]<='9')){
					return true;
				}
				else{
					return false;
				}
			}
		}
	}
}
