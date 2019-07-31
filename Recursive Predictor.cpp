#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char lookhead;
void match();
void error();
void E();
void R();
void T();
void M();
void F();

int main(){
	lookhead = getche();
	E();
	return 0;
}
void match(char symbol){
	if(lookhead == symbol) lookhead = getche();
	else error();
	return;
}
void error(){
	cout << "\nError";
	exit(0);
}
void E(){
	T();
	R();
}
void R(){
	if(lookhead == '+'){
		match('+');
		T();
		R();
	}
	else;
	return;
}
void T(){
	F();
	M();
}
void M(){
	if(lookhead == '*'){
		match('*');
		F();
		M();
	}
	else;
	return;
}
void F(){
	if(lookhead == '('){
		match('(');
		E();
		match(')');
	}
	else if(lookhead == 'i'){
		match('i');
		match('d');
	}
	else error();
	return;
}
/*
		E --> TR
		R --> +TR | ε
		T --> FM
		M --> *FM | ε
		F --> (E) | id
		example :
		id*id+(id)+id*(id)+id*id+(id)
*/
