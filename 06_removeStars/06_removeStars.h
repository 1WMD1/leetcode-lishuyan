#ifndef LEETCODE_06
#define LEETCODE_06

#define stacksize 100

typedef struct 
{
	int stack[stacksize];
	int top;
}mystack;

void stackinit(mystack *S);

_Bool judge_stack_empty(mystack *S);

_Bool judge_stack_full(mystack *S);

void stackpush(mystack *S,int a);

void stackpop(mystack *S);

char * removeStars(char * s);

#endif