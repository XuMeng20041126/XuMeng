#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//系统命令
#include <string.h>
/* 关机 */
//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 120");//关机时间，单位秒"stdlib.h"
//	printf("2分钟后关机，请输入密码\n");
//	scanf("%s", arr);
//	//if ("12345" == arr)//判断两个字符串相等不能用==
//	if (strcmp("许梦", arr) == 0)//"string.h"
//	{
//		system("shutdown -a");//取消关机
//		printf("成功撤销关机\n");
//	}
//	else
//	{
//		printf("密码失败，即将关机!!!\n");
//	}
//	return 0;
//}

/******************************************************************
* ************************随机数***********************************
*******************************************************************/
//#include <time.h>
//int main(void)
//{
//	srand((unsigned int)time(NULL));//种子,将time类型换一下
//	printf("%d\n", rand()%100+1);
//	//公式：a~b随机数=a+rand()%(b-a+1)
//	return 0;
//}
// 
// 
//#include <time.h>
//void caishuzi(void)
//{
//	//system("shutdown -s -t 360");//关机时间，单位秒"stdlib.h"
//	int temp;
//	printf("欢迎来到猜数字游戏\n");
//	printf("请选择你要猜的数字:\n");
//	int r = rand() % 100 + 1;
//	while (1)
//	{
//		scanf("%d", &temp);
//		if (r > temp)
//		{
//			printf("猜小了\n");
//		}
//		else if (r < temp)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了！！！\n");
//			break;
//		}
//	}
//	return;
//}
//
/******************************************************************
* ************************小游戏***********************************
*******************************************************************/
//int main()
//{
//		int biaoshi,temp = 3,jixu = 0,a;
//		srand((unsigned int)time(NULL));//种子,将time类型换一下
//		printf("*************************\n");
//		printf("  是否开始猜数字游戏\n");
//		printf("  1:开始           \n");
//		printf("  2:退出			\n");
//		printf("*************************\n");
//		do
//		{
//			scanf("%d", &biaoshi);
//			if (biaoshi == 1)
//			{
//				a:
//				caishuzi();//猜数字
//				printf("还要玩请输入1\n");
//				scanf_s("%d", &jixu);
//				if (jixu == 1)
//				{
//					goto a;
//				}
//				break;
//			}
//			else if (biaoshi == 2)
//			{
//				printf("不玩，退出\n");
//				break;
//			}
//			else
//			{
//				temp--;
//				printf("选择错误，请重新选择，还剩%d次机会\n",temp);
//			}
//		} while (temp);
//
//			return 0;
//}
// 
/******************************************************************
* ************************打印数组成员*****************************
*******************************************************************/
//int main()
//{
//	int arr[3] = {0,0,0};
//	scanf("%d", arr);
//	printf("%d", *arr);
//	scanf("%d", &arr[0]);
//	printf("%d", arr[0]);
//	return 0;
//}
/******************************************************************
* ************************二维数组*********************************
*******************************************************************/
//int main()
//{
//	int arr12[3][3] = {1,2,3,4,5,6,5,10,52};//行可省
//	/*scanf("%d", arr12);
//	printf("%d\n", **arr12);*/
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d",&arr12[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d", arr12[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//} 
/******************************************************************
* ************************变长数组*********************************
*******************************************************************/
//int main()
//{
//	int i = 3;
//	int arr[i];//变长数组，一旦指定不可变，还不能初始化给值
//	int arr12[3][3] = { 1,2,3,4,5,6,5,10,52 };//行可省
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d", *arr12[i]);
//		printf("\n");
//	}
//	return 0;
//}
/******************************************************************
* ************************打印字符及字符串*************************
*******************************************************************/
//int main() {
//    char arr1[] = "abcd";                     // 初始化字符数组arr1，自动添加'\0'，大小为5
//    char arr2[5] = { 'a','b','c','d','\0'};  // 显式初始化arr2，手动添加'\0'，大小为5
//    int arr3[3] = { 96,3,2 };                  // 初始化整型数组arr3，包含3个元素：96,3,2
//    int temp = sizeof(arr1) / sizeof(arr1[0]) - 1; // 计算arr1长度-1（4），因为sizeof包含'\0'
//    printf("%s\n", arr1);     // arr1退化为char*，指向首地址，%s从首地址开始打印到'\0'
//    printf("%c\n", *arr1);    // *arr1等价于arr1[0]，即首字符
//    printf("%c\n", arr2[3]);  // 访问arr2[3]，即第4个字符（索引从0开始）
//
//    printf("%s\n", arr2);     // arr2退化为char*，且末尾有'\0'，可安全作为字符串
//    printf("%c\n", *arr2);    // *arr2等价于arr2[0]，即首字符
//    printf("%c\n", arr1[3]);  // 访问arr1[3]，即第4个字符
//    printf("%d\n", *arr3);    // *arr3等价于arr3[0]，即第一个整型元素的值
//
//    return 0;
//}
//#include <windows.h>
//int main()
//{
//	char arr[]  = "nihaoshijiepingpinganan";
//	char arr1[] = "***********************";
//	printf("%s\n", arr1);
//
//	int temp = sizeof(arr) / sizeof(arr[0])-1;//计算字符串长度
//	//temp = strlen(arr1);//计算字符串长度，不包括\0
//	int shou = 0;
//	while ((shou != temp) && (temp > shou))
//	{
//		system("cls");//清理控制台
//		temp--;
//		arr1[shou] = arr[shou];
//		arr1[temp] = arr[temp];
//		shou++;
//		printf("%s\n", arr1);
//		Sleep(100);//延时
//		
//	}
//	return 0;
//}
/******************************************************************
**************************二分查找*********************************
*******************************************************************/
/*                       缺陷:两边相加的值不能超过整型值          */
//int main()//条件有序
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 }; // 定义有序数组
//    int k = 0;                          // 存储要查找的目标值
//    scanf("%d", &k);                    // 读取用户输入的目标值
//    int zuo = 0;                        // 二分查找左边界(起始索引)
//    int you = sizeof(arr) / sizeof(arr[0]) - 1; // 计算右边界(数组长度-1)
//
//    // 当左边界<=右边界时持续查找(包含相等情况，处理单个元素)
//    while (zuo <= you)
//    {
//        int zhongjian = (zuo + you) / 2; // 计算中间索引(有整数溢出风险，但本例数组较小无影响)
//
//        if (arr[zhongjian] > k)         // 中间值大于目标值
//        {
//            printf("%d大了\n", arr[zhongjian]);
//            you = zhongjian - 1;        // 调整右边界到中间左侧
//        }
//        else if (arr[zhongjian] < k)    // 中间值小于目标值
//        {
//            printf("%d小了\n", arr[zhongjian]);
//            zuo = zhongjian + 1;        // 调整左边界到中间右侧
//        }
//        else                            // 找到目标值
//        {
//            printf("找到了:%d\n", arr[zhongjian]);
//            printf("下标是:%d\n", zhongjian);
//            break;                      // 跳出循环
//        }
//    }
//    // 当左边界越过右边界时，说明数组中不存在目标值
//    if (zuo > you)
//        printf("找不到\n");
//    return 0;
//
//}
/******************************************************************
**************************函数*************************************
*******************************************************************/
//add(int x, int y)//形参，定义函数，写在前面不要声明
//{
//	if(1)return (int)3.14;//int 要保证每种情况都有返回值
//	else return 0;
//	//函数不写返回值，编译器默认是int
//	// 3整型
//}
//int main()
//{
//	int x = 1, y = 2;
//	int c = add(x,y);//实参，调用函数
//	printf("%d\n", c);
//	return 0;
//
//}
//void set_1(int arr[], int sz)//可以不带值,带值不影响，传arr[]只关注地址，不关注大小
//{
//	int i= 0;					//如果是set_1(int arr, int sz)就是整型了，不是数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void set_1(int *arr, int sz,int x)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i] = x);
//
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[5] = { 1,23,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_1(&arr, sz,-1);//取地址也可以，但步长发生变化，不能&&arr
//	set_1(arr, sz, 1);
//	return 0;
//}
//void set_2(int arr[2][3], int x, int y)//第二个方块不能省参数
//{
//	int i = 0;
//	for (i = 0; i < x;i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	set_2(arr, 2, 3);
//	return 0;
//}
//#include <stdbool.h>
//bool run_nian(int nian)
//{
//	if ((nian % 4 == 0) && (nian % 100 != 0) || (nian % 400 == 0))
//		return true;
//	else 
//		return false;
//
//	
//}
//nian_yue(int nian, int yue)
//{
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};//计算某年某月有多少天
//	int tian = arr[yue];//天数
//	if((run_nian(nian) == true) && (yue == 2) )//闰年返回1,函数嵌套
//	{
//		tian ++;
//	}
//	return tian;
//}
//int main() 
//{
//	
//	int nian, yue;
//	scanf("%d %d", &nian, &yue);
//	 int tian = nian_yue(nian,yue);
//	 printf("%d\n", tian);
//	 return 0;
//}
//#include "add.h"//   
//int main()//函数放在前面要声明
//{
//	printf("%d\n", strlen("123456789"));//链式访问:将一个函数的返回值作为另一个函数的参数
//	printf("%d", printf("%d", printf("%d", 654321)));//不要加\n
//	//printf返回的是打印字符的个数
//	int a = 1, b = 2;
//	int c = add(a, b);
//	printf("\n");
//	printf("%d\n", c);
//	return 0;
//}
//int a;//声明
//extern int a;//外部文件声明
//int main()
//{
//	printf("%d", a);
//}
//int a = 0;
//函数声明可以不加extern
//static int jia(int a, int b)//改变函数的链接属性，加外部声明也用不了，意思就是别的文件用不了
//{
//	return a + b;
//}
//static int y = 6;//改变全局变量的链接属性，加外部声明也用不了，意思就是别的文件用不了
//
//void ttt(void)
//{
//	static int i = 1;//将局部变量修饰为全局变量，且只初始化一次
//	i++;		     //编译器在编译代码时就为静态变量分配了地址，不是进入函数后创建的，作用域不变
//					
//	printf("%d\n", i);
//}
////预处理（处理 #include、#define）→
////编译（C 代码→汇编）→
////汇编（汇编→机器码）→
////链接（合并目标文件，解析外部符号）→
//// 编译过程中
//
////加载（程序入内存，初始化静态 / 全局变量）→
////执行（从main开始，处理局部变量、函数逻辑）→
////终止（释放资源，程序结束）。
////栈区：局部变量，函数形式参数
////堆区：动态内存管理
////静态区：静态变量，全局变量
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		//ttt();
//	}
//	return 0;
//}
//Debug:调试版本
//Release:发布版本,没办法一步步调试
//int main()//错误示例,看编译器
//{
//	int i = 0;
//	int arr[10] = { 0,31,28,31,30,31,30,31,30,31 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("nihao\n");
//	}
//	return 0;
//}
//void ty(int arr1[10])//调试看参数arr1,10
//{
//
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	ty(arr);
//}
/******************************************************************
**************************函数高级篇**********************************
*******************************************************************/
//int main()//栈地址是从高往低使用的,
//{
//	int a = 1;  //ebp:栈低指针  //esp：栈顶指针
//	return a;	//将a的值会给寄存器eax，然会在返回
//}   
//函数递归
//递归就是自己调用自己
//int main()
//{
//	printf("你好\n");
//	main();//可以调用,无限递归会导致栈溢出
//	return 0;
//}
//qiu(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * qiu(n - 1);//递归
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = qiu(n);
//	printf("%d\n", i);
//	return 0;
//}

//chan(int n)
//{
//	if (n > 9)
//	{
//		chan(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int n, i;
//	scanf("%d", &n);//5678 先分离10位
//	chan(n);
//	return 0;
//}


//// ***斐波那契数，不适合递归，应该迭代
//int fibonacci(int n) 
//{
//    if (n<=2) return 1; // 前两项定义为1
//    else return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", fibonacci(n));
//    return 0;
//}
/******************************************************************
************************** 操作运算符******************************
*******************************************************************/
//移位操作符只能操作整数，小数不行
//int main()
//{
//	int a = -1;//
//	//10000000 00000000 00000000 000a00001   //源码
//	//11111111 11111111 11111111 11111110   //反码
//	//11111111 11111111 11111111 11111111   //补码
//	a = ~a;
//	printf("%d\n", a);//补码方式
//	return 0;
//}


//int main() 
// {
//    // 1. 算术运算符（+ - * / % ++ --）[1,2,8]
//    int a = 10, b = 3;
//    float c = 5.5;
//
//    printf("加法：%d\n", a + b);    // 13
//    printf("减法：%d\n", a - b);    // 7
//    printf("乘法：%d\n", a * b);    // 30
//    printf("整数除法：%d\n", a / b); // 3（注意整数截断）[4]
//    printf("浮点除法：%.1f\n", c / 2); // 2.75
//    printf("取余：%d\n", a % b);    // 1（只能用于整数）[1,8]
//
//    // 自增/自减运算符[1,3,8]
//    int x = 5;
//    printf("前缀自增：%d\n", ++x);  // 先增后使用 → 6
//    printf("后缀自增：%d\n", x++);  // 先使用后增 → 6（x变为7）
//
//    // 2. 赋值运算符（= += -= *= /= %=）
//    int num = 10;
//    num += 5;  // 等效于 num = num + 5 → 15
//    num %= 4;  // 等效于 num = num % 4 → 3
//
//    // 3. 关系运算符（> < == != >= <=）
//    printf("大于判断：%d\n", a > b);    // 1（真）
//    printf("相等判断：%d\n", a == 10); // 1（真）
//    printf("不等判断：%d\n", b != 3);  // 0（假）
//
//    // 4. 逻辑运算符（&& || !）
//    int flag1 = 1, flag2 = 0;
//    printf("逻辑与：%d\n", flag1 && flag2); // 0（全真为真）
//    printf("逻辑或：%d\n", flag1 || flag2); // 1（有真即真）
//    printf("逻辑非：%d\n", !flag1);        // 0（取反）
//
//    // 5. 位运算符（& | ^ ~ << >>）
//    unsigned char m = 0b00111100; // 60
//    unsigned char n = 0b00001101; // 13
//
//    printf("按位与：%d\n", m & n);   // 00001100 → 12
//    printf("按位或：%d\n", m | n);   // 00111101 → 61
//    printf("左移两位：%d\n", m << 2); // 11110000 → 240
//
//    // 6. 条件运算符
//    int max = (a > b) ? a : b;  // 等价于if-else判断 → 10
//
//    // 7. sizeof运算符
//    printf("int大小：%zu字节\n", sizeof(int)); // 4（32位系统）
//
//    // 8. 逗号运算符
//    int res = (a++, b++, a + b);  // 先执行a++和b++，最后返回a+b → 14
//
//    // 9. 运算符优先级示例
//    int complex = 5 + 3 * 2;     // 先乘后加 → 11
//    int priority = (5 + 3) * 2;  // 括号改变优先级 → 16
//
//    return 0;
//}

/*
// [1] 基本类型
int age = 25;          // 声明整型变量，通常占4字节[2,5](@ref)
char ch = 'A';         // 声明字符变量（1字节，存储ASCII码）[3,5](@ref)
float pi = 3.14f;      // 单精度浮点数（4字节，约7位有效数字）[3,5](@ref)
double salary = 5000.5; // 双精度浮点数（8字节，约15位有效数字）[2,5](@ref)
void func();           // 声明无返回值函数或无参数函数[5,8](@ref)

// [2] 类型修饰符
short s = 100;          // 短整型（通常2字节）[2,5](@ref)
long population = 7e9;  // 长整型（通常4或8字节）[3,5](@ref)
signed int temp = -10;  // 有符号整型（默认行为）[3,5](@ref)
unsigned int count = 99; // 无符号整型（仅非负值）[5,8](@ref)

// [3] 复合类型
struct Student {       // 定义结构体（成员内存独立）[3,5](@ref)
    char name[20];
    int score;
};
union Data {            // 定义联合体（成员共享内存）[3,5](@ref)
    int i;
    float f;
};
enum Week { Mon, Tue }; // 定义枚举类型（常量集合）[5,8](@ref)

// [1] 分支结构
if (age >= 18) {       // 条件判断[2,5](@ref)
    printf("成年");
} else {                // 否定分支[2,5](@ref)
    printf("未成年");
}

switch (grade) {       // 多路选择[2,5](@ref)
    case 'A': printf("优秀"); break; // 分支标签
    default: printf("未知");        // 默认分支[5,8](@ref)
}

// [2] 循环结构
for (int i=0; i<5; i++) { // 确定次数循环[2,5](@ref)
    printf("%d ", i);
}
while (count > 0) {     // 前测试循环[2,5](@ref)
    count--;
}
do {                    // 后测试循环[5,8](@ref)
    printf("执行一次");
} while (count > 0);

// [3] 跳转控制
break;                  // 跳出循环或switch[2,5](@ref)
continue;               // 跳过本次循环剩余代码[5,8](@ref)
goto cleanup;           // 无条件跳转（慎用）[5,8](@ref)
return 0;               // 函数返回值[2,5](@ref)


// [1] 存储类别
auto int x = 10;        // 自动变量（默认可省略）[2,5](@ref)
static int counter = 0; // 静态变量（程序生命周期）[5,8](@ref)
extern int globalVar;   // 声明外部变量（跨文件引用）[5,8](@ref)
register int fast = 10;  // 建议变量存入寄存器（现代编译器自动优化）[5,8](@ref)

// [2] 类型操作与限定
typedef int Integer;    // 定义类型别名[5,8](@ref)
sizeof(int);            // 计算类型/变量内存大小（单位：字节）[3,5](@ref)
const int MAX = 100;    // 声明只读变量（不可修改）[2,5](@ref)
volatile int flag = 0;  // 易变变量（防止编译器优化）[5,8](@ref)

#include <stdbool.h>
_Bool isOpen = 1;       // 布尔类型（C99）
bool isTrue = true;     // 需包含stdbool.h头文件[2](@ref)

inline int add(int a, int b) { // 内联函数（减少调用开销）
    return a + b;
}

int* restrict ptr = malloc(100); // 限制指针唯一访问路径（优化内存操作）[2](@ref)

double _Complex z = 3.0 + 4.0i;  // 复数类型（需包含complex.h）[6](@ref)
*/
/******************************************************************
************************** 指针************************************
*******************************************************************/
//指针就是地址
//int main()
//{
//    int a = 0X12121212;
//    printf("%p\n", &a);//取的是int 四个字节中最低的地址（一个字节）
//    int* pa = &a;//指针变量大小取决于系统,与类型无关，32位：4字节  64位：8字节
//    *pa = 0;//指针类型要和普通类型一致
//    /*printf("%zd\n", sizeof(pa));
//    printf("%zd\n", sizeof(int *));*/
//    printf("%d\n", *pa);//*解引用操作符
//    return 0;
//}
//int main()
//{
//    int a = 2;
//    int* p = &a;//*表示指针，int表示指向的类型
//    char* pa = &a;
//    printf("%p\n", &a);
//    printf("%p\n", p);
//    printf("%p\n", pa);
//
//    printf("%p\n", &a+1);//加1是加类型占的字节
//    printf("%p\n", p+1);//指针类型，表示一步走多长
//    printf("%p\n", pa+1);
//
//}
//int main() 
//{
//    int a = 10;
//    void* p = &a;//无具体类型指针,可以接收任何指针的类型地址
//    //局限性:不能改值，不能加一减一，也不能解引用
//}
//int main()
//{
//    const int a = 10;//使变量有常属性，不能被更改：叫常变量
//    //int arr[a];//C99不支持变长数组，所以a是常量
//    //a = 10;错误
//    //int* p = &a;//可以改
//    //*p = 85;//但能通过指针更改
// 
//    //int* const p = &a;//不能更改指针指向
//    //int const*  p = &a;   const int* p = &a;//这两个等价，不能改变指针指向的值
//    //  const int a = 10;
//      const int* const p = &a;  // p和*p均不可变
//      *p = 20;               // 错误
//      p = &b;                // 错误
//    printf("%d\n", a);
//}
/*指针运算*/
//void main()//指针加减整数  指针-指针  
//{     //指针加指针没有意义
//    char arr[6] = {1,2,3,4,5,6};
//    int i = 0;
//    /*for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }*/
//    char* p= &arr[0];
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ",*(p+i));//p++
//
//    }
//    printf("\n");
//    for (i = sizeof(arr) / sizeof(arr[0])-1; i >= 0 ; i--)//反转数组
//    {
//        printf("%d ", *(p + i));
//
//    }
//    //指针类型决定了解引用的权限，数组在内存中是连续存放的
//}
// 指针-指针
//size_t changdustrlen(char* p)
//{
//    char* chang = p;
//    char* end = p;
//    while (*end != '\0')
//    {
//        end++;
//    }
//    return end - chang;
//}
//int changdustrlen(char arr[])
//{
//    int i = 0, cut = 0;
//    while (1)
//    {
//        if (arr[i] != '\0')
//        {
//            cut++;
//            i++;
//        }
//        else
//            break;
//    }
//    return cut;
//}
//size_t changdustrlen(char* p)
//{
//    size_t cut = 0;
//    while (*p != '0')//\0就是0
//    {
//        /*if (*p != '\0')
//        {*/
//            cut++;
//            p++;
//        //}
//    }
//    return cut;
//}
//void main()
//{
//    char arr[] = "abcdppppp";
//    //printf("%d\n", changdustrlen(arr));
//    printf("%zd\n", strlen("1 \0 203"));//strlen\0之前的字符个数
//}//指针比较指针，然后遍历数组

//void main() 
//{
//    //一个局部变量不初始化，值是随机的，全局变量默认给0
//    //int* p = 20;//不能将整数直接赋给指针，或者赋给地址值
//    //int* p = (int*)20;  // 正确语法：将整数20强制转换为地址
//    //int* p;//野指针,就是没有初始化
//    //*p = 20;//不能使用未初始化的指针，否则会成为野指针
//}

//int* n()
//{
//    int x = 10;
//    return &x;
//}
//void main()
//{
//    int* p = n();//p存的是野指针
//    *p = 5;
//    printf("%p\n", p);
//    printf("%d\n", *p);
//}
//void main()
//{
//    int a = 10;
//    int* p = NULL;//空指针
//    p = &a;
//    *p = 2;
//    //p = NULL;
//    if (p != NULL)
//    {
//        *p = 200;
//    }
//    printf("%d\n", *p);
//}

//#define NDEBUG  //有这条语句后不使用 assert
//#include <assert.h> 
//int main()
//{
//    int* p = NULL;
//    assert(p != NULL);//断言，Debug有效
//    return 0;
//}
//int main() //在x86环境下地址是4个字节，在x64环境下地址是8个字节
//{
//    char arr[] = "ni hao";//数组名是首元素的地址
//    char* p = &arr[0];//地址加减是加减的类型字节
//    printf("%d\n", sizeof(arr));//这是一个例外，计算的是整个数组的大小
//    printf("&arr = %p\n", &arr);//这是第二个例外,&的是整个数组的首地址，步长为整个数组
//    printf("&arr+1 = %p\n", &arr+1);
//
//    printf("arr = %p\n", arr);//传数组名，会自动退化为首元素的地址
//    printf("arr+1 = %p\n", arr+1);//传数组名，会自动退化为首元素的地址
//
//    printf("&arr[0] = %p\n", &arr[0]);
//    printf("&arr[0]+1 = %p\n", &arr[0]+1);
//    return 0;
//}

//int main()//*(arr+i)<==>arr[i],C语言编译器会将右边的转换为左边的
//{         //方括号只是个操作符，arr[i]和i[arr]等价
//    int const arr[2] = { 1,2 };//指针效率高与普通执行效率
//    const int i = 0;
//    printf("%d\n", i[arr]);//指针访问数组好
//    return 0;
//}

