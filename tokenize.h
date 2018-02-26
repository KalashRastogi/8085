#include<bits/stdc++.h>
using namespace std;
#include<vector>
void make_Tokens(vector<string> &tokens,string cmd){
	stringstream check1(cmd);
	string word;
	while(getline(check1,word,' ')){
		tokens.push_back(word);
	}
}

