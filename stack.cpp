#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

#define initSTACKSIZE 5
int stacksize = initSTACKSIZE;

stack::stack(){
	this->top=0;
	this->dane = (int *) malloc(stacksize * sizeof(int));
}

stack::~stack(){
    free(this->dane);
}

void stack::clear(){
	this->top=0;
}

void stack::push(int a){
	//assert(this->top<stacksize);
	if (this->top>=stacksize){
            stacksize *= 2;
            this->dane = (int *) realloc(this->dane, stacksize * sizeof(int));
        }
	this->dane[this->top++]=a;
}

int stack::pop(){
	assert(this->top>0);
	return this->dane[--this->top];
}

bool stack::isEmpty(){
	return (this->top==0 ? true : false);
}
