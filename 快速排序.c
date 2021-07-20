#include<stdio.h>
#include<stdlib.h>
void quickSort(int* arr, int startPos, int endPos)
{
	int i, j;
	int key;
	key = arr[startPos];//keyΪ��׼��
	i = startPos;
	j = endPos;
	while (i < j)
	{
		while (arr[j] >= key && i < j)--j; //�ȴӺ���ȥǰɨ��ֱ���ҵ�һ��a[j]<key�������
		arr[i] = arr[j];
		while (arr[i] <= key && i < j)++i; //�ٴӺ���ȥǰɨ��ֱ���ҵ�һ��a[i]>key�������
		arr[j] = arr[i];
	}
	arr[i] = key;
	if (i - 1 > startPos) quickSort(arr, startPos, i - 1); //���keyǰ�������������ϵ�������keyǰ��������һ���Ļ���Ȼ�Ͳ������ˣ�
	if (endPos > i + 1) quickSort(arr, i + 1, endPos);//���key�������������ϵ�������key�����
}
int main()
{
	int a[11], i;
	printf("�����룺");
	for (i = 0; i < 11; i++)
		scanf_s("%d", &a[i]);
	quickSort(a, 0, 10);
	printf("��������");
	for (i = 0; i < 11; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
