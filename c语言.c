//#include<stdio.h>
// 距离
//#include<math.h>
//int main()
//{
//	int n, a[1010],x,i,c,d=50000;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		c = fabs(x - a[i]);
//		if (c < d)
//			d = c;
//	}
//	printf("%d", d);
//	return 0;
//}
//#include<stdio.h>
// 第三大数
//#include<math.h>
//int main(void)
//{
//	int max0=-2147483648, max1= -2147483648, max2= -2147483648, n, m, l, r, i,a[5010];
//	scanf("%d%d", &n, &m);
//	for (i = 1; i <=n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d%d",&r,&l);
//		for (r; r <= l; r++)
//		{
//			if (a[r]> max0)
//			{
//				max2 = max1;
//				max1 = max0;
//				max0 = a[r];
//			}
//			else if (a[r] > max1)
//			{
//				max2 = max1;
//				max1 = a[r];
//			}
//			else if (a[r] > max2)
//			{
//				max2 = a[r];
//			}
//		}
//		printf("%d\n", max2);
//		max0 = -2147483648;
//		max1 = -2147483648;
//		max2 = -2147483648;
//
//
//	}
//	return 0;
//}
//#include<stdio.h>
// 名次预测
//int main()
//{
//	int a[60], f[1010]={0}, n, i, j, t;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 1; j <= 50; j++)
//		{
//			scanf("%d", &t);
//			if (t == j)
//				f[i]++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = n - 1; j > i; j--)
//		{
//			if (f[i] < f[j])
//			{
//				t = f[i];
//				f[i] = f[j];
//				f[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d\n", f[i]);
//	return 0;
//}
//#include<stdio.h>
// 实矩阵乘法
//int main()
//{
//	int a[101][101], b[101][101], c[101][101]={0}, i1, j1, i2, j2, i, j, k;
//	scanf("%d%d%d%d", &i1,&j1,&i2,&j2);
//	for (i = 0; i < i1; i++)
//	{
//		for (j = 0; j < j1; j++)
//			scanf("%d", &a[i][j]);
//	}
//	for (i = 0; i < i2; i++)
//	{
//		for (j = 0; j < j2; j++)
//			scanf("%d", &b[i][j]);
//	}
//	for (i = 0; i < i1; i++)
//	{
//		for (j = 0; j < j2; j++)
//		{
//			for (k = 0; k < i2; k++)
//				c[i][j] += (a[i][k] * b[k][j]);
//		}
//	}
//	for (i = 0; i < i1; i++)
//	{
//		for (j = 0; j < j2; j++)
//			printf("%d ", c[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
// 选举
//int main()
//{
//	char a[200];
//	int n,i,t;
//	while (gets(a)!=NULL)
//	{
//		t = 0;
//		n = strlen(a);
//		for (i = 0; i <n; i++)
//		{
//			if ('2' == a[i])
//				t++;
//		}
//		if (t > (n / 2))
//			printf("Pass\n");
//		else
//			printf("Veto\n");
//		}
//	return 0;
//}
//#include<stdio.h>
// 快排
//#include<stdlib.h>
//int compare(const void *p, const void *q);
//int main()
//{
//	int a[1010],i,n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	qsort(a, n, sizeof(int), compare);
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//int compare(const void *p, const void *q)
//{
//	int a = *(int *)p;
//	int b = *(int *)q;
//	if (a < b)
//		return -1;
//	if (a > b)
//		return 1;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//二分查找
//int compare(const void *p, const void *q);
//int bin_find(int A[], int, int, int);
//int main()
//{
//	int a, b, i, A[310], B[310];
//	double sum=0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//		scanf("%d", &A[i]);
//	for (i = 0; i < b; i++)
//		scanf("%d", &B[i]);
//	qsort(A, a, sizeof(int), compare);
//	for (i = 0; i < b; i++)
//	{
//		if (bin_find(A, B[i], 0, a - 1) != -1)
//		{
//			sum += (1.0 * A[bin_find(A, B[i], 0, a - 1)] / 2.0);
//			A[bin_find(A, B[i], 0, a - 1)] = 0;
//			qsort(A, a, sizeof(int), compare);
//		}
//		else
//			continue;
//	}
//	for (i = b; i < a; i++)
//		sum += (A[i] * 4.0);
//	printf("%.2lf\n", sum);
//	return 0;
//}
//int compare(const void *p, const void *q)
//{
//	int a = *(int *)p;
//	int b = *(int *)q;
//	if (a < b)
//		return -1;
//	if (a > b)
//		return 1;
//	return 0; 
//}
//int bin_find(int A[], int key, int low, int high)
//{
//	int mid;
//	if (low > high)
//		return -1;
//	mid = (low + high) / 2;
//	if (key == A[mid])
//		return mid;
//	else if (key < A[mid])
//		return bin_find(A, key, low, mid - 1);
//	else if (key > A[mid])
//		return bin_find(A, key, mid + 1, high);
//}
//#include <stdio.h>
//#include <ctype.h>
//大小写
//int main()
//{
//    char c;
//    while (scanf("%c", &c) != EOF)
//    {
//        if (isupper(c))
//            printf("%c", tolower(c));
//        else if (islower(c))
//            printf("%c", toupper(c));
//        else
//            printf("%c", c);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
// 一元二次方程
//int main()
//{
//	int n, a, b, c, delat;
//	double r1, r2;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (0 == a)
//		{
//			r1 = -c * 1.0 / b;
//			printf("%.6f\n", r1);
//		}
//		else
//		{
//			delat = b * b - 4 * a * c;
//			if (delat < 0)
//			{
//				double p = -b / (2.0 * a), q = sqrt(-delat) / (2.0 * a);
//				if (q < 0)
//					q = -q;
//				printf("%.6f+%.6fi %.6f-%.6fi\n", p, q, p, q);
//			}
//			else
//			{
//				r1 = (-b + sqrt(delat)) / (2 * a);
//				r2= (-b - sqrt(delat)) / (2 * a);
//				if (r1 < r2)
//					printf("%.6f %.6f\n", r2, r1);
//				else
//					printf("%.6f %.6f\n", r1, r2);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
// 二分法，首位
//int a[1000002];
//int find(int num, int length)
//{
//	int left = 1, right = length;
//	while (left < right)
//	{
//		int mid = left + (right - left) / 2;
//		if (a[mid] >= num)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	if (a[left] == num)
//		return left;
//	else
//		return -1;
//}
//int main()
//{
//	int n, m, q;
//	while (~scanf("%d %d", &n, &m))
//	{
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &a[i]);
//		while (m--)
//		{
//			scanf("%d", &q);
//			int des = find(q, n);
//			if (des == -1)
//				puts("error");
//			else
//				printf("%d\n", des);
//		}
//	}
//}
//#include <stdio.h>
//查找差值最小
//#include <stdlib.h>
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 < *(int*)p2 ? -1 : 1;
//}
//int lower_bound(int a[], int n, int val)
//{
//	int l = 0, r = n, mid;
//	while (l < r)
//	{
//		mid = (l + r) >> 1;
//		if (a[mid] >= val)
//			r = mid;
//		else
//			l = mid + 1;
//	}
//	return r;
//}
//int m, n;
//int a[100005], b[100005];
//long long ans;
//int main()
//{
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < m; i++)scanf("%d", &a[i]);
//	qsort(a, m, sizeof(a[0]), cmp);
//	for (int i = 0; i < n; i++)
//	{
//		int key, index;
//		scanf("%d", &key);
//		index = lower_bound(a, m, key);//找到第⼀个⼤于等于key的下标index
//		if (index == 0)ans += abs(a[index] - key);//考虑是第⼀个数的情况
//		else
//		{
//			int l1 = abs(a[index] - key);//否则⽐较index和index-1这两个数
//			int l2 = abs(a[index - 1] - key);
//			if (l1 < l2)ans += l1;
//			else ans += l2;
//		}
//	}
//	printf("%lld", ans);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//int a=0,i,sum=0;
//for (i = 0; i < 5; i++)
//{
//	scanf("%d", &a);
//	sum += a;
//}
//double m = sum/ 5.0;
//if (m > 90)
//printf("A\n");
//else if (m > 75 && m <= 90)
//printf("B\n");
//else if (m >=60&& m <=75)
//printf("C\n");
//else if (m<60)
//printf("F\n");
//return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//int main()
//{
//	int n,i;
//	double a,b,c,d;
//	scanf("%d", &n);
//	scanf("%lf", &a);
//	b = a;
//	scanf("%lf", &a);
//	c =a- b;
//	d = c;
//	for (i = 0; i < n-2; i++)
//	{
//		b = a;
//		scanf("%lf", &a);
//		c = a - b;
//		if (d < c)
//			d = c;
//	}
//	printf("%.2f m", d * 13.14);
//	return 0;
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
// 种树
//int main()
//{
//    int n, h, m, g, i, j;
//    scanf("%d", &h);
//    n = (2 * h) / 3;
//    m = h / 3;
//    g = (m / 4) * 2 + 1;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i-1; j++)
//            printf(" ");
//        for (j = 0; j < 2 * i+1 ; j++)
//            printf("*");
//        printf("\n");
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < (n - (m / 4)-1); j++)
//            printf(" ");
//        for (j = 0; j < g; j++)
//            printf("|");
//        printf("\n");
//    }
//    printf("\n");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a * b);
//	return 0;
//}
//#include <stdio.h>
//#include<ctype.h>
// 小写变大写
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	printf("%c\n", toupper(c));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b,c,d;
//	scanf("%1d%1d%1d.%1d", &a, &b,&c,&d);
//	printf("%d.%d%d%d",d,c,b,a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double a;
//	int b;
//	scanf("%lf%d", &a, &b);
//	printf("%.3f\n%d\n", a / b, b * 2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	d = d - b;
//	if (d < 0)
//	{
//		d += 60;
//		c = c- 1;
//	}
//	c = c - a;
//	printf("%d %d",c,d);
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c,p;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	p = (a + b + c) / 2;
//	p = p * (p - a) * (p - b) * (p - c);
//	printf("%.1f",sqrt(p));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	b = a * 10 + b;
//	printf("%d\n", b / 19);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	unsigned long long int n;
//	scanf("%llu", &n);
//	printf("%llu", n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int s, v,t,h,m;
//	scanf("%d%d", &s, &v);
//	if (0 == s % v)
//		t = s / v+10;
//	else
//		t = s / v + 11;
//	m = 60-t % 60;
//	h = 31-t / 60;
//	if (h >= 24)
//		h -= 24;
//	if (h >= 10 && m >= 10)
//		printf("%d:%d", h, m);
//	else if (h < 10 && m >= 10)
//		printf("0%d:%d", h, m);
//	else if (h >= 10 && m <10)
//		printf("%d:0%d", h, m);
//	else if (h < 10 && m < 10)
//		printf("0%d:0%d", h, m);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", (a * 2 + b * 3 + c * 5) / 10);
//	return 0;
//}