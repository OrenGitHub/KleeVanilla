#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "/home/oren/GIT/MyKlee/klee/include/klee/klee.h"

#define N 16

int main(int argc, char **argv)
{
	//int i=0;
	//int n=0;
	//char *p;
	//char *q;
	//char *r;
	//char *s1;
	//char *s2;
	//char *s3;
	//char *s4;
	//char *tmp = "OREN WEARS T SHIRTS!!!";
	//char atemp[] = "OREN IS BEAUTIFUL !!!";
	char input[N];
	char output[N];
		
	klee_make_symbolic(input,  sizeof input,  "input");
	klee_make_symbolic(output, sizeof output, "output");

	//input[0]='G';
	//input[1]='G';

	//p = (char *) malloc(2*N);
	//q = (char *) malloc(3*N);
	//r = input;
	
	//for (i=0;i<N;i++)
	//{
		//if (('a' <= r[i]) && (r[i] <= 'z'))
		//{
			//r[i] = r[i] + 'A' - 'a';
		//}
	//}

	//s1 = strchr(r,'G');
	//if (s1 != NULL)
	//{
		//s2 = strchr(s1+1,'G');
		//if (s2 != NULL)
		//{
			//if (s2 - s1 > 1)
			//{
			//	assert(0);
			//}
		//}
	//}
	//input[0]='O';
	input[1]='R';
	//input[2]='E';
	//input[3]='N';
	//input[4]='I';
	//input[5]='S';
	input[6]='I';
	//input[7]='M';
	//input[8]='O';
	
   	if (strcmp(input,"ORENISIMO") == 0)
   	{
   		assert(0);
   	}
}

