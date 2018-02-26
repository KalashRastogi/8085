#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include"tokenize.h" //headrer file having tokenization function
#include"opcode.h" //headerfile having opcode fetching function
#include"verification.h" //headerfile having verification function
#include"execution.h" //command execution
#include"fetching.h"
#include"ramadd.h"
using namespace std;
int register_A[8]={0};
int register_B[8]={0};
int register_C[8]={0};
int register_D[8]={0};
int register_E[8]={0};
int register_H[8]={0};
int register_L[8]={0};
int flags={0};
int main(){
	int ram_Add;
	cin>>ram_Add;

	while(1){
			string command;
		bool verified;
		int opcode;
		char operand1,ch;
		string operand2,end="hlt";
		vector<string> tokens;
		fflush(stdin);
		cout<<ram_Add<<"\t"; //ram address
		fflush(stdin);
		getline(cin,command);
		make_Tokens(tokens,command); //tokenization
		if((string)tokens[0]==end)
			break;
		opcode=opCode(tokens[0]);	//opcode fetching
		ram_Add+=nextRamAdd(opcode);
		operand1=tokens[1][0];	//finding operand1 and operand2
		operand2=tokens[2];
		cout<<opcode<<"  "<<operand2[0]<<"  "<<operand2[1]<<endl;
		verified=verify(opcode,operand1,operand2); //checking if the command is error free or not
		
		if(!verified){
			cout<<"***ERROR***";
			break;
		}
		else{
			cout<<"Successfull!"<<endl;
		}
		int *p=registers(operand1);
		if(opcode==0){	
			int *q=registers(operand2[0]);
			execute(p,q);	//execution of that command
		}
		else{
			execute(opcode,p,operand2);
		}
	}
	cout<<"A:";
	for(int i=0;i<8;i++){
		cout<<register_A[i]<<"  ";
	}
	cout<<endl<<"B:";
	for(int i=0;i<8;i++){
		cout<<register_B[i]<<"  ";
	}
	cout<<endl<<"C:";
	for(int i=0;i<8;i++){
		cout<<register_C[i]<<"  ";
	}
	cout<<endl<<"D:";
	for(int i=0;i<8;i++){
		cout<<register_D[i]<<"  ";
	}
	cout<<endl;
	return 0;
}
