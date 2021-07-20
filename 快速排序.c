#include<stdio.h>
#include<stdlib.h>
void quickSort(int* arr, int startPos, int endPos)
{
	int i, j;
	int key;
	key = arr[startPos];//key为基准数
	i = startPos;
	j = endPos;
	while (i < j)
	{
		while (arr[j] >= key && i < j)--j; //先从后往去前扫，直到找到一个a[j]<key或遍历完
		arr[i] = arr[j];
		while (arr[i] <= key && i < j)++i; //再从后往去前扫，直到找到一个a[i]>key或遍历完
		arr[j] = arr[i];
	}
	arr[i] = key;
	if (i - 1 > startPos) quickSort(arr, startPos, i - 1); //如果key前还有两个及以上的数，排key前的数（有一个的话自然就不用排了）
	if (endPos > i + 1) quickSort(arr, i + 1, endPos);//如果key后还有两个及以上的数，排key后的数
}
int main()
{
	int a[11], i;
	printf("请输入：");
	for (i = 0; i < 11; i++)
		scanf_s("%d", &a[i]);
	quickSort(a, 0, 10);
	printf("排序结果：");
	for (i = 0; i < 11; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
