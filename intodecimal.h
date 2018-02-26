#include<bits/stdc++.h>
using namespace std;
int intoDecimal(char op)
{
	if((char)op>='a'&&(char)op<='f'){
		return (int)(op-87);
	}
	else{
		return (int)(op-48);
	}
}
