////������ 15�� �ҿ�
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
//	printf("�迭�� ���� : "); scanf("%d", &n);
//	a = (int *)calloc(n, sizeof(int));
//	idx = (int *)calloc(n, sizeof(int));
//	for (i = 0;i < n;i++) {
//		printf("a[%d] : ", i);scanf("%d", &a[i]);
//	}
//	printf("ã�� ���ڴ�?");scanf("%d", &key);
//	n = search_idx(a, n, key, idx);
//	printf("������ ��ġ\n");
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