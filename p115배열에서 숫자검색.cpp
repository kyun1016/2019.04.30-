////구현에 15분 소요
//
//#include<stdio.h>
//#include<string>
//
//int search_idx(const int a[], int n, int key, int idx[]) {
//	int i;
//	int count = 0;
//	for (i = 0;i < n;i++) {
//		if (a[i] == key) idx[count++] = i;
//	}
//	return count;
//}
//
//int main() {
//	int * a;
//	int *idx;
//	int n,i,key;
//	printf("배열의 길이 : "); scanf("%d", &n);
//	a = (int *)calloc(n, sizeof(int));
//	idx = (int *)calloc(n, sizeof(int));
//	for (i = 0;i < n;i++) {
//		printf("a[%d] : ", i);scanf("%d", &a[i]);
//	}
//	printf("찾을 숫자는?");scanf("%d", &key);
//	n = search_idx(a, n, key, idx);
//	printf("숫자의 위치\n");
//	for (i = 0;i < n;i++) {
//		printf("%d\n", idx[i]);
//	}
//	free(a);
//	free(idx);
//
//
//
//
//	return 0;
//}