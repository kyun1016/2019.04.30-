//#include<stdio.h>
//#include<stdlib.h>
//#include "p144ť.h"
//
//int Initialize(ArrayIntQueue * s, int max)
//{
//	s->num = 0;
//	if ((s->que = (int *)calloc(max, sizeof(int))) == NULL) {
//		s->max = 0;
//		return -1;
//	}
//	s->max = max;
//	return 0;
//}
//
//int InQueue(ArrayIntQueue * s, int x)
//{
//	if (s->num >= s->max)
//		return -1;
//	s->que[s->num++] = x;
//	return 0;
//}
//
//int DeQueue(ArrayIntQueue * s, int * x)
//{
//	if (s->num <= 0)
//		return -1;
//	*x = s->que[0];
//	for (int i = 0;i < s->num-1;i++) {
//		s->que[i] = s->que[i + 1];
//	}
//	s->num--;
//	return 0;
//}
//
//int Size(ArrayIntQueue * s)
//{
//	return s->num;
//}
//
//int Capacity(ArrayIntQueue * s)
//{
//	return s->max;
//}
//
//void Terminate(ArrayIntQueue * q)
//{
//	if(q->que != NULL)
//		free(q->que);
//	q->max = q->num = 0;
//}
