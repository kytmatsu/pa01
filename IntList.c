// This is pretty much just IntList.java translated into c.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "intList.h"
 
const IntList intNil = NULL;

struct IntListNode {
	int node;
	IntList next;
};

int intFirst(IntList oldL) {
	return oldL->node;
}


IntList intRest(IntList oldL) {
	return oldL->next;
}


IntList intCons(int newE, IntList oldL) {
        IntList x = (IntList)calloc(1,sizeof(IntList));
        x->node = newE;
	x->next = oldL;
	return x;
}