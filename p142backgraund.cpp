//#include <stdio.h>
//#include <stdlib.h>
//#include "p142head.h"
//
//int Initialize(IntStack *s, int max) {
//	s->ptr = 0;
//	if ((s->stk = (int*)calloc(max, sizeof(int))) == NULL) {
//		s->max = 0;
//		return -1;
//	}
//	s->max = max;
//	s->rptr = max;
//	return 0;
//}
//
//int Push(IntStack *s, int x, int i) {
//	switch (i) {
//	case 1:
//		if (s->ptr >= s->max)
//			return -1;
//		s->stk[s->ptr++] = x;
//		return 0;
//
//	case 2:
//		if (s->max - s->rptr >= s->max)
//			return -1;
//		s->stk[--s->rptr] = x;
//		return 0;
//	}
//}
//
//int Pop(IntStack *s, int *x, int i) {
//	switch (i) {
//	case 1:
//		if (s->ptr <= 0)
//			return -1;
//		*x = s->stk[--s->ptr];
//		return 0;
//
//	case 2:
//		if (s->rptr >= s->max)
//			return -1;
//		*x = s->stk[s->rptr++];
//		return 0;
//	}
//}
//
//int Peek(const IntStack *s, int *x,int i) {
//	switch (i) {
//	case 1:
//		if (s->ptr <= 0)
//			return -1;
//		*x = s->stk[s->ptr - 1];
//		return 0;
//
//	case 2:
//		if (s->rptr >= s->max)
//			return -1;
//		*x = s->stk[s->rptr];
//		return 0;
//	}
//}
//
//void Clear(IntStack *s, int i) {
//	switch (1)
//	{
//	case 1:
//		s->ptr = 0;
//	case 2:
//		s->rptr = s->max;
//	}
//}
//
//int Capacity(const IntStack *s) {
//	return s->max;
//}
//
//int Size(const IntStack *s, int i) {
//	switch (i)
//	{
//	case 1:
//		return s->ptr;
//	case 2:
//		return s->max - s->rptr;
//	}
//}
//
//int SizeAll(const IntStack *s) {
//	return s->ptr + s->max - s->rptr;
//}
//
//int IsEmpty(const IntStack *s, int i) {
//	switch (i)
//	{
//	case 1:
//		return s->ptr <= 0;
//	case 2:
//		return s->rptr >= s->max;
//	}
//}
//
//int isEmptyAll(const IntStack *s) {
//	return (s->ptr <= 0) && (s->rptr >= s->max);
//}
//
//int IsFull(const IntStack *s) {
//	return s->ptr + s->max - s->rptr >= s->max;
//}
//
//int Search(const IntStack * s, int x, int i)
//{
//	switch (i)
//	{
//	case 1:
//		for (int k = s->ptr - 1;k >= 0;k--)
//			if (s->stk[k] == x)
//				return k;
//		return -1;
//		
//	case 2:
//		for (int k = s->rptr;k < s->max;k++)
//			if (s->stk[k] == x)
//				return k;
//		return -1;
//		
//	}
//	return 0;
//}
//
//int SearchAll(const IntStack *s, int x) {
//	for (int k = s->ptr - 1;k >= 0;k--)
//		if (s->stk[k] == x)
//			return k;
//	for (int k = s->rptr;k < s->max;k++)
//		if (s->stk[k] == x)
//			return k;
//	return -1;
//}
//
//void Print(const IntStack *s) {
//	int i;
//	printf("스택A : ");
//	for (i = 0;i < s->ptr;i++)
//		printf("%d ", s->stk[i]);
//	putchar('\n');
//
//	printf("스택B : ");
//	for (i = s->rptr;i < s->max;i++)
//		printf("%d ", s->stk[i]);
//
//	putchar('\n');
//}
//
//void Terminate(IntStack *s) {
//	if (s->stk != NULL)
//		free(s->stk);
//	s->max = s->ptr = s->rptr = 0;
//}