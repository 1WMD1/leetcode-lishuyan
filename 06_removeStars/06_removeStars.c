#include <stdio.h>
#include "./06_removeStars.h"
#include <stdlib.h>
#include <stdbool.h>


void stackinit(mystack *S)
{
	S->top = -1;
}

_Bool judge_stack_empty(mystack *S)
{
	if(S->top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

_Bool judge_stack_full(mystack *S)
{
	if(S->top == (stacksize-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void stackpush(mystack *S,int a)
{
	S->top++;
	S->stack[S->top] = a;
}

void stackpop(mystack *S)
{
	S->top--;
}

char * removeStars(char * s)
{
	mystack * stack_leetcode;
	stack_leetcode = (mystack *)malloc(sizeof(mystack));
	stackinit(stack_leetcode);
	int len_s = strlen(s);
	printf("len_s的长度是：%d\n", len_s);
	for(int i = 0 ;i<11;i++)
	{
		if(s[i] != '*')
		{
			stackpush(stack_leetcode,s[i]);
		}
		else
		{
			printf("第%d个元素是：*\n", i);
			stackpop(stack_leetcode);
		}

	}

	for(int j = 0 ;j<=stack_leetcode->top;j++)
	{
			s[j] = stack_leetcode->stack[j];		
	}

	s[stack_leetcode->top+1] = '\0';
	return s;
}




























