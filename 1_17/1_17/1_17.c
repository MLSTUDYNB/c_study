#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char a;
	while (~scanf("%c", &a))
	{
		getchar();
		printf("%c\n", a+'a'-'A');
	}
	
	return 0;
}
/*小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）

输入描述：
输入包含一个整数n (0 ≤ n ≤ 109)

输出描述：
输出一个整数，即小乐乐到达楼上需要的时间。*/
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n / 9 * 4 + 2);
//	return 0;
//}
//int main()
//{
//	int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int n = 0;
//	for (n = 0; n < 12; n++)
//	{
//		printf("%c,", arr[n]+'0');
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}