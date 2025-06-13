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
//    printf("%zd\n", strlen("1 \0 203"));//strlen是\0之前的字符个数
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
//    int* p = NULL;//nullptr c11关键字
//    assert(p != NULL);//断言，Debug有效
//    return 0;         //不能使用空指针，未定义
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
//    int const arr[2] = { 1,2 };//指针效率高于普通执行效率
//    const int i = 0;
//    printf("%d\n", i[arr]);//指针访问数组好
//    return 0;
//}

//void test(int arr[])//形参写成数组形式，但还是指针变量 int* arr
//{
//    int sz2 = sizeof(arr) / sizeof(arr[0]);
//    printf("sz2 = %d\n", arr[2]);
//    printf("sz2 = %d\n", arr[3]);
//    printf("sz2 = %d\n", sz2);//错误，只有把数组元素个数也传过来
//}
//int main()
//{
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz1 = sizeof(arr) / sizeof(arr[0]);
//    printf("sz1 = %d\n", sz1);
//    test(arr);//数组传参本质是数组的首地址
//    return  0;
//}
// 
// 
// 
//void jiaohuan(int* x, int* y)
//{
//    int temp = 0;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//void bubble_sort(int* arr, int sz)//冒泡排序，两两相临元素比较，不满足时交换，满足找下一个
//{
//    int i = 0,j = 0,k = 1;//k表示假设有序
//    for (j = 1; j < sz; j++)
//    {
//        for (i = 0; i < sz - j; i++)
//        {
//            if (arr[i] > arr[i + 1])//    第一个>第二个升序
//            {
//                k = 0;
//                jiaohuan(&arr[i], &arr[i + 1]);//交换
//            }
//            else;
//        }
//        if (k == 1)//已经有序
//        {
//            break;
//        }
//    }
//}
//⽅法2 - 优化
//void bubble_sort(int arr[], int sz)//参数接收数组元素个数
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int flag = 1;//假设这⼀趟已经有序了
//        int j = 0;
//        for (j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                flag = 0;//发⽣交换就说明，⽆序
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//        if (flag == 1)//这⼀趟没交换就说明已经有序，后续⽆序排序了
//            break;
//    }
//}
//int main()//二分查找和冒泡排序是最基本的
//{
//    int arr[] = {0,2,1,5,6,4,8,9,3};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 10;
//    int* p1 = &a;//一级指针
//    int** p2 = &p1;//二级指针
//    int*** p3 = &p2;//三级指针
//    ***p3 = 2;
//    printf("%d", a);
//    return 0;
//}
/*     指针数组    */
//int main()
//{
//    int a = 0;
//    int b = 2;
//    int c = 4;
//    int* arr[3] = {&a,&b,&c};//存放指针变量的数组
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < sz; i++) 
//    {
//        printf("%d ", *(arr[i]));
//    }
//    return 0;
//}
//int main()//指针数组模拟⼆维数组
//{
//    int arr1[5] = { 1,2,3,4,5 };
//    int arr2[5] = { 2,3,4,5,6 };
//    int arr3[5] = { 3,4,5,6,7 };
//    //数组名是数组⾸元素的地址，类型是int*的，就可以存放在parr数组中
//    int* parr[3] = { arr1, arr2, arr3 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++) 
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%d ", *(parr[i]+j));//*(*(parr+i)+j)  (*(parr + i))[j]  *(parr[i] + j)   parr[i][j]
//        }
//        printf("\n");
//    }
//}
//野指针	        int* p2 = 1;	指针指向无效地址，访问会导致段错误
//修改字符串常量	char* p = "abc";	尝试修改p[0]会导致未定义行为
//混淆数组和指针	char* p = "abc";	误认为p是数组，实际上是指向常量的指针
//int main() 
//{
//   /* char ch = 'a';
//    char* p1 = &ch;
//    printf("%d\n", *p1);*/
//    int* p2 = 1;
//    char* p = "abcde";//字符串不能被修改
//    //const char* p = "abcde";//加上修饰
//    char arr[] = "hello bit.";//创建了一个数组，字符串可以修改
//    char* p1 = arr;//用的创建数组的首元素地址
//    return 0;
//}
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//内容相同的常量字符串，系统只会存一次，只读数据段
//    const char* str4 = "hello bit.";//内容相同的常量字符串，系统只会存一次，只读数据段
//    if (str1 == str2)
//        printf("一\n");
//    else
//        printf("二\n");//执行
//
//    if (str3 == str4)
//        printf("三\n");//执行
//    else
//        printf("四\n"); //字符串内容比较：必须使用 strcmp() 函数，而非 ==
//
//    return 0;
//}

/*    数组指针  */

//int main()
//{
//    char* arr[5] = {1,2,3,4,5};
//    char* (*p1)[5] = &arr;
//    *((*p1)[1]);//用法对不对
//    return 0;
//}
/*    二维数组 */

//void test(int(*a)[5], int r, int c)//数组指针来接收  int a[3][5]
//{
//     int i = 0;
//    int j = 0;
//
//    for (i = 0; i < r; i++)
//      {
//        for (j = 0; j < c; j++)
//          {
//             printf("%d ", a[i][j]);//a[i][j]  (*(a+i))[j]  (*(a[i])+j)  *(*(a+i)+j)
//          }
//        printf("\n");
//      }
// }
// int main(void)
//{
//     int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//     test(arr, 3, 5);//arr是第一行的地址，不是首元素的地址
//     return 0;
// }

/*    函数指针  */
//int ajj(int x, int y)
//{
//    return x - y;
//}
//int main()
//{
//    //int arr[5] = { 0 };
//    //int (*p1)[5] = &arr;
//    printf("%p\n", &ajj);//ajj函数名和&ajj没有任何区别
//    printf("%p", ajj);
//    int (*p1)(int, int) = &ajj;//函数指针   
//    //int (*p1)(int x, int y) = &ajj;//这样写也可以
//    int ac = (*p1)(3, 4);//这样调用
//    //int ac = p1(3, 4);//也可以不写
//    printf("%d", ac);
//  /*  (*(void (*)())0)(); 强制类型转换：将数值 0 转换为一个函数指针（指向返回值为 void 且无参数的函数）
//        解引用指针：获取该地址处的 “函数”
//        调用函数：执行该地址处的代码*/
// //void (*signal(int , void(*)(int)))(int);
//    return 0;
//}
//typedef int(*parr_t)[6];//数组指针只能这样，函数指针也只能这样
////typedef int(*)[6] parr_t;//不能这样
//int main()
//{
//    int* arr[6] = { 0 };
//    int*(*p)[6] = &arr;
//    //int (*p)[6] = &arr;
//    //parr_t p2 = &arr;
//    return 0;
//}

//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表函数指针数组
//    do
//    {
//        printf("*************************\n");
//        printf(" 1:add 2:sub \n");
//        printf(" 3:mul 4:div \n");
//        printf(" 0:exit \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf("%d", &input);
//        if ((input <= 4 && input >= 1))
//        {
//            printf("输⼊操作数：");
//            scanf("%d %d", &x, &y);
//            ret = (*p[input])(x, y);
//            printf("ret = %d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出计算器\n");
//        }
//        else
//        {
//            printf("输⼊有误\n");
//        }
//    } while (input);
//    return 0;
//}
/*    回调函数   */
//把函数的指针（地址）作为参数传递给另⼀个函数，当这个指针被⽤来调⽤其所指向的函数
//时，被调⽤的函数就是回调函数。
//qsort函数，C语言中的库函数，用来排序，底层是快速排序
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);//
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//
//    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);//C语言函数
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//struct St //学⽣
//{
//    char name[20];//名字
//    int age;//年龄
//};
//int main()//结构访问操作符，只有这两个
//{
//    struct St arr = { "nihao",20 };
//    printf("%s %d\n ", arr.name, arr.age);//直接访问
//    struct St* p = &arr;
//    printf("%s %d\n ", p->name, p->age);//结构体指针访问
//}
//struct Stu //学⽣
//{
//    char name[20];//名字
//    int age;//年龄
//};
////假设按照年龄来⽐较
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////strcmp - 是库函数，是专⻔⽤来⽐较两个字符串的⼤⼩的
////假设按照名字来⽐较
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//字符串比较字符串是从ASCLL大小依次比较
//}
////按照年龄来排序，默认升序，降序将相减的变量调换位置
//void test2()
//{
//    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
////按照名字来排序
//void test3()
//{
//    struct Stu s[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//    test2();
//    test3();
//    return 0;
//}
         
// 整数比较函数，用于qsort或自定义排序算法
// 参数：p1和p2是指向要比较的整数的指针（类型为const void*以支持任意类型）
// 返回值：
//   - 负数：如果p1指向的整数小于p2指向的整数
//   - 零：如果两个整数相等
//   - 正数：如果p1指向的整数大于p2指向的整数
//int int_cmp(const void* p1, const void* p2)
//{
//    // 将const void*类型的指针转换为const int*类型，然后解引用获取整数值
//    return (*(const int*)p1 - *(const int*)p2);
//}
//
//// 通用内存交换函数，用于交换两个任意类型的数据块
//// 参数：
////   p1, p2：指向要交换的两个数据块的指针
////   size：每个数据块的大小（以字节为单位）
//void _swap(void* p1, void* p2, int size)
//{
//    // 使用char*指针（1字节）逐字节交换两个数据块的内容
//    for (int i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);          // 保存p1位置的当前字节
//        *((char*)p1 + i) = *((char*)p2 + i);  // 将p2位置的字节复制到p1
//        *((char*)p2 + i) = tmp;               // 将保存的字节复制到p2
//    }
//}
//
//// 通用冒泡排序函数，可以对任意类型的数组进行排序
//// 参数：
////   base：指向数组起始位置的指针（类型为void*以支持任意类型）
////   count：数组中元素的数量
////   size：每个元素的大小（以字节为单位）
////   cmp：比较函数指针，用于确定元素的顺序
//void bubble(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//    // 冒泡排序的外层循环，控制排序的轮数
//    for (int i = 0; i < count - 1; i++)
//    {
//        // 冒泡排序的内层循环，每轮比较相邻元素并交换顺序错误的元素
//        for (int j = 0; j < count - i - 1; j++)
//        {
//            // 计算相邻元素的地址：
//            //   当前元素地址 = 数组基址 + j * 元素大小
//            //   下一个元素地址 = 数组基址 + (j+1) * 元素大小
//            void* elem1 = (char*)base + j * size;
//            void* elem2 = (char*)base + (j + 1) * size;
//
//            // 使用用户提供的比较函数比较两个元素
//            // 如果返回值大于0，表示elem1应该排在elem2后面
//            if (cmp(elem1, elem2) > 0)
//            {
//                // 交换这两个元素的位置
//                _swap(elem1, elem2, size);
//            }
//        }
//    }
//}
//
//// 主函数：程序入口点
//int main()
//{
//    // 待排序的整数数组
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//
//    // 计算数组元素个数
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // 调用通用冒泡排序函数对数组进行排序
//    // 参数说明：
//    //   arr：数组首地址
//    //   n：元素个数
//    //   sizeof(int)：每个元素的大小（int类型为4字节）
//    //   int_cmp：比较函数，用于确定整数的顺序
//    bubble(arr, n, sizeof(int), int_cmp);
//
//    // 输出排序后的数组
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//int main()
//{
//    int a = 10;
//    printf("%zd\n", sizeof(a));//sizeof是操作符，不是函数
//    printf("%zd\n", sizeof a);//找变量占空间的大小，单位字节，与内容无关
//    printf("%zd\n", sizeof(int*));//一样
//    char arr1[3] = { 'a', 'b', 'c' };
//    char arr2[] = "abc";
//    printf("%zd\n", strlen(arr1));//strlen是函数，只能求字符串长度
//    printf("%zd\n", strlen(arr2));
//    printf("%zd\n", sizeof(arr1));//数组占的空间
//    return 0;
//}

//int main()
//{
//    // 一维整型数组
//    int a[] = { 1,2,3,4 };
//    printf("%d\n", sizeof(a));         // 数组总大小：4*4=16字节
//    printf("%d\n", sizeof(a + 0));       // 指针大小：4/8字节（数组退化为int*）
//    printf("%d\n", sizeof(*a));        // 首元素大小：4字节（int）
//    printf("%d\n", sizeof(a + 1));       // 指针大小：4/8字节（指向a[1]）
//    printf("%d\n", sizeof(a[1]));      // 元素大小：4字节（int）
//    printf("%d\n", sizeof(&a));        // 数组指针大小：4/8字节（int(*)[4]）
//    printf("%d\n", sizeof(*&a));       // 等价于sizeof(a)：16字节
//    printf("%d\n", sizeof(&a + 1));      // 指针大小：4/8字节（跳过整个数组）
//    printf("%d\n", sizeof(&a[0]));     // 指针大小：4/8字节（指向a[0]）
//    printf("%d\n", sizeof(&a[0] + 1));   // 指针大小：4/8字节（指向a[1]）
//
//    // 字符数组（无终止符）
//    char arr1[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr1));      // 数组大小：6字节（无终止符）
//    printf("%d\n", sizeof(arr1 + 0));    // 指针大小：4/8字节（char*）
//    printf("%d\n", sizeof(*arr1));     // 元素大小：1字节（char）
//    printf("%d\n", sizeof(arr1[1]));   // 元素大小：1字节（char）
//    printf("%d\n", sizeof(&arr1));     // 数组指针大小：4/8字节（char(*)[6]）
//    printf("%d\n", sizeof(&arr1 + 1));   // 指针大小：4/8字节（跳过整个数组）
//    printf("%d\n", sizeof(&arr1[0] + 1)); // 指针大小：4/8字节（指向'b'）
//
//    // 字符数组的strlen（危险！无终止符）
//    printf("%d\n", strlen(arr1));      // 未定义行为！继续扫描直到遇到'\0'
//    printf("%d\n", strlen(arr1 + 0));    // 同上
//    // printf("%d\n", strlen(*arr1));    // 错误！传入char('a')，非指针
//    // printf("%d\n", strlen(arr1[1]));  // 错误！同上
//    printf("%d\n", (int)strlen((char*)&arr1)); // 等价于strlen(arr1)
//    printf("%d\n", (int)strlen((char*)&arr1 + 1)); // 未定义！跳过数组后的内存
//    printf("%d\n", strlen(&arr1[0] + 1)); // 未定义！从'b'开始扫描
//
//    // 字符串字面量（自动添加终止符）
//    char arr2[] = "abcdef";
//    printf("%d\n", sizeof(arr2));      // 数组大小：7字节（含'\0'）
//    printf("%d\n", sizeof(arr2 + 0));    // 指针大小：4/8字节（char*）
//    printf("%d\n", sizeof(*arr2));     // 元素大小：1字节（char）
//    printf("%d\n", sizeof(arr2[1]));   // 元素大小：1字节（char）
//    printf("%d\n", sizeof(&arr2));     // 数组指针大小：4/8字节（char(*)[7]）
//    printf("%d\n", sizeof(&arr2 + 1));   // 指针大小：4/8字节（跳过整个数组）
//    printf("%d\n", sizeof(&arr2[0] + 1)); // 指针大小：4/8字节（指向'b'）
//
//    // 字符串字面量的strlen
//    printf("%d\n", strlen(arr2));      // 6（不包含'\0'）
//    printf("%d\n", strlen(arr2 + 0));    // 6（从'a'开始）
//    // printf("%d\n", strlen(*arr2));    // 错误！传入char('a')
//    // printf("%d\n", strlen(arr2[1]));  // 错误！传入char('b')
//    printf("%d\n", (int)strlen((char*)&arr2)); // 6（等价于strlen(arr2)）
//    printf("%d\n", (int)strlen((char*)&arr2 + 1)); // 未定义！跳过数组后的内存
//    printf("%d\n", strlen(&arr2[0] + 1)); // 5（从'b'到'\0'共5个字符）
//
//    // 字符指针指向字符串常量
//    char* p = "abcdef";
//    printf("%d\n", sizeof(p));         // 指针大小：4/8字节（char*）
//    printf("%d\n", sizeof(p + 1));       // 指针大小：4/8字节（指向'b'）
//    printf("%d\n", sizeof(*p));        // 元素大小：1字节（char）
//    printf("%d\n", sizeof(p[0]));      // 元素大小：1字节（char）
//    printf("%d\n", sizeof(&p));        // 指针的指针：4/8字节（char**）
//    printf("%d\n", sizeof(&p + 1));      // 指针大小：4/8字节（跳过p后的地址）
//    printf("%d\n", sizeof(&p[0] + 1));   // 指针大小：4/8字节（指向'b'）
//
//    // 字符指针的strlen
//    printf("%d\n", strlen(p));         // 6（字符串长度）
//    printf("%d\n", strlen(p + 1));       // 5（从'b'开始）
//    // printf("%d\n", strlen(*p));      // 错误！传入char('a')
//    // printf("%d\n", strlen(p[0]));    // 错误！传入char('a')
//    printf("%d\n", strlen(&p));        // 未定义！p的地址不是字符串起始
//    printf("%d\n", strlen(&p + 1));      // 未定义！p后的内存
//    printf("%d\n", strlen(&p[0] + 1));   // 5（从'b'开始）
//
//    // 二维数组
//    int a2[3][4] = { 0 };
//    printf("%d\n", sizeof(a2));        // 数组总大小：3*4*4=48字节
//    printf("%d\n", sizeof(a2[0][0]));  // 元素大小：4字节（int）
//    printf("%d\n", sizeof(a2[0]));     // 第一行大小：4*4=16字节（int[4]）
//    printf("%d\n", sizeof(a2[0] + 1));   // 指针大小：4/8字节（指向a2[0][1]）
//    printf("%d\n", sizeof(*(a2[0] + 1))); // 元素大小：4字节（a2[0][1]）
//    printf("%d\n", sizeof(a2 + 1));      // 指针大小：4/8字节（指向第二行）
//    printf("%d\n", sizeof(*(a2 + 1)));   // 第二行大小：16字节（int[4]）
//    printf("%d\n", sizeof(&a2[0] + 1));  // 指针大小：4/8字节（指向第二行）
//    printf("%d\n", sizeof(*(&a2[0] + 1))); // 第二行大小：16字节（int[4]）
//    printf("%d\n", sizeof(*a2));       // 第一行大小：16字节（等价于a2[0]）
//    printf("%d\n", sizeof(a2[3]));     // 16字节（编译时确定，不检查越界）
//
//    return 0;
//}


//int main()
//{
//    // 字符指针数组，每个元素指向一个字符串
//    char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//    /* 内存布局:
//       c[0] ───► "ENTER"
//       c[1] ───► "NEW"
//       c[2] ───► "POINT"
//       c[3] ───► "FIRST"
//    */
//
//    // 二级指针数组，每个元素指向c数组的不同位置
//    char** cp[] = { c + 3, c + 2, c + 1, c };
//    /* 内存布局:
//       cp[0] ───► c[3] ───► "FIRST"
//       cp[1] ───► c[2] ───► "POINT"
//       cp[2] ───► c[1] ───► "NEW"
//       cp[3] ───► c[0] ───► "ENTER"
//    */
//
//    // 三级指针，指向cp数组的起始位置
//    char*** cpp = cp;
//    /* 初始状态:
//       cpp ───► cp[0] ───► c[3] ───► "FIRST"
//    */
//
//    // 第一个printf: **++cpp
//    printf("%s\n", **++cpp);
//    /* 执行过程:
//       1. ++cpp: cpp指向cp[1]
//       2. *cpp: 即cp[1]，指向c[2]
//       3. **cpp: 即c[2]，指向"POINT"
//       输出: POINT
//    */
//
//    // 第二个printf: *--*++cpp+3
//    printf("%s\n", *-- * ++cpp + 3);
//    /* 执行过程:
//       1. ++cpp: cpp指向cp[2]
//       2. *cpp: 即cp[2]，指向c[1]
//       3. --*cpp: cp[2]减1，指向c[0]（原指向c[1]）
//       4. *--*cpp: 即c[0]，指向"ENTER"
//       5. *--*cpp+3: 从"ENTER"的第4个字符开始
//       输出: ER
//    */
//
//    // 第三个printf: *cpp[-2]+3
//    printf("%s\n", *cpp[-2] + 3);
//    /* 执行过程:
//       1. cpp[-2]: 等价于*(cpp-2)，即cp[0]，指向c[3]
//       2. *cpp[-2]: 即c[3]，指向"FIRST"
//       3. *cpp[-2]+3: 从"FIRST"的第4个字符开始
//       输出: ST
//    */
//
//    // 第四个printf: cpp[-1][-1]+1
//    printf("%s\n", cpp[-1][-1] + 1);
//    /* 执行过程:
//       1. cpp[-1]: 等价于*(cpp-1)，即cp[1]，指向c[2]
//       2. cpp[-1][-1]: 等价于*(*(cpp-1)-1)，即c[1]-1（指向"NEW"的前一个位置）
//          注意: 此处实际指向"ENTER"的最后一个字符'R'
//       3. cpp[-1][-1]+1: 从'R'的下一个字符开始
//       输出: W
//    */
//
//    return 0;
//}
// 
// 
// 
//********************宏定义**********************//
//#define M 100//最好不要加分号
//#define H "nihao"
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \date:%s\ttime:%s\n" ,\
// __FILE__,__LINE__ , \
// __DATE__,__TIME__ )//\代表续航符
//int main()
//{
//    int a = M;
//    return 0;
//}
// 
//#define squ(n) n*n//宏里面的参数可以任意，宏的参数可以替换内容,做简单的任务
////#define squ(n) ((n)*(n))//这样更好，一定要括号
//#define EAVC for(;;)
//int main()
//{
//    //printf("%d",squ(2+1));//宏之后替换，不会运算，5
//    return 0;
//}
//#define MAX(a,b) ((a)>(b)?(a):(b))//执行效率比函数高，还可以直接传类型
//int main()
//{
//    printf("%d\n", MAX(2+1, 3+2));
// }
//#define PRINT(n,geshi) printf(#n"="geshi"\n",n)//#操作符是将后面参数转为字符串字面量
//int main()
//{
//    int a = 0;
//    PRINT(a, "%d");//n变成a了
//    return 0;
//}
//#define VAR(name, num) name##num
//
//int main() {
//    int VAR(a, 1) = 10;  // 展开为：int a1 = 10;
//    int VAR(a, 2) = 20;  // 展开为：int a2 = 20;
//    printf("%d, %d\n", a1, a2);  // 输出：10, 20
//    return 0;
//}
//#define GENERIC_MAX(type) \
//type type##_max(type x, type y)\
//{ \
// return (x>y?x:y); \
//}
//GENERIC_MAX(int) //替换到宏体内后int##_max ⽣成了新的符号 int_max做函数名
//GENERIC_MAX(float) //替换到宏体内后float##_max ⽣成了新的符号 float_max做函数名
//int main()
//{
//    //调⽤函数
//    int m = int_max(2, 3);
//    printf("%d\n", m);
//    float fm = float_max(3.5f, 4.5f);
//    printf("%f\n", fm);
//    return 0;
//}
//#define MAX 100
//int main()
//{
//    printf("%d\n", MAX);
//#undef MAX//移除宏定义
//    //printf("%d\n", MAX);
//    return 0;
//}


//#define __DEBUG__
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//            #ifdef __DEBUG__//有这个东西就执行下一条语句，没有就不执行
//                printf("%d\n", arr[i]);//为了观察数组是否赋值成功。 
//            #endif //__DEBUG__
//    }
//    return 0;
//}
//int main()
//{
//#if 1//为真执行下面的代码
//    printf("你好\n");
//#endif 
//
//}

#define M 2
#if M<1//条件编译
int main()
{
#if M>1
    printf("你好\n");
#endif
    return 0;
}
#define M 2
int add(int* x, int* y)
{
#if M>1
    printf(".....\n");
#endif
    {
    return *x + *y;
    }
}
int main()
{
    int a = 3, b = 4;
    printf("%d\n",add(&a, &b));
    return 0;
}
#endif//跳过几行的条件编译


//#define M 0
//int main()
//{
//#if M == 0
//    printf("000\n");
//#elif M == 1
//    printf("111\n");
//#elif M == 2
//    printf("222\n");
//#else
//    printf("333\n");
//#endif
//    return 0;
//}

//判断是否被定义
//#define symbol 2
//int main()
//{
////#if defined(symbol)//这两个一样，可以取反
// #ifdef symbol
//    printf("你好\n");
//#endif
//}

//#ifndef MAX//没有定义就执行
//printf("你好\n");
//#endif

//int main() 
//{
//    int arr[5] = { 1, 2, 3, 4, 5 };
//    int (*p)[5] = &arr;  // 数组指针，指向整个数组
//
//    printf("一维数组遍历：\n");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", *(*p + i));  // (*p)[i]   p[0][i]
//    }
//    printf("\n");
//
//    return 0;
//}


//int main() {
//    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
//    int (*p)[3] = arr;  // 指向第一行的数组指针（自动退化为行指针）
//
//    //printf("二维数组遍历：\n");
//    //for (int i = 0; i < 2; i++) {
//    //    for (int j = 0; j < 3; j++) {
//            printf("%d ", *(*(p+1)+1));  // 等价于 arr[i][j] p[i][j]
//    //    }
//    //    printf("\n");
//    //}
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int arr[2][3][4] = {
//        { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} },
//        { {13,14,15,16}, {17,18,19,20}, {21,22,23,24} }
//    };
//    int (*p)[3][4] = arr;  // 指向第一"层"的数组指针
//
//    printf("三维数组遍历：\n");
//    for (int i = 0; i < 2; i++) {  // 层
//        for (int j = 0; j < 3; j++) {  // 行
//            for (int k = 0; k < 4; k++) {  // 列
//                printf("%d ", p[i][j][k]);  // 等价于 arr[i][j][k]
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}\
//
/***********************************结构体**************************/
//struct jiegouti//正常类型
//{
//    char zifu;
//    int nian;
//    double xiaoshu;
//}s1，s2;//s1是一个生成的结构体名，可以多个
//struct //不完全声明类型，没有这个，就不能在其他地方创建结构体，一般只能用一次
//{
//    char zifu;
//    int nian;
//    double xiaoshu;
//}s1，s2;//s1是一个生成的结构体名，可以多个
//struct s
//{
//    char zifu;//数据
//    struct s* x1;//找到下一个同类型的结构体struct s x1这样不行
//};
//typedef struct scct//将struct scct重命名为ss
//{
//    char zifu;//数据
//    struct s* x1;//找到下一个同类型的结构体struct s x1这样不行
//}ss;
//typedef struct ss
//{
//    int data;
////    Node* next;//不能这样写，这个Node是顺序在最后生成的
// struct ss* next;
//}Node;

#include <stddef.h>//求结构体对齐
struct S1
{
    char c1;
    int i;
    char c2;
};
//练习2
struct S2
{
    char c1;
    char c2;
    int i;
};//第一个元素偏移值为0，VS默认对齐是8(意思是超过8字节都按8字节对齐处理)，小于等于8字节按照最大类型对齐
//变量类型字节必须是偏移字节的整数倍。
//最后一个要补位，结构体的总大小是最大类型的整数倍（比如24字节（23））。
//小的数据类型写在上面，大的写下面，更省  空间
struct S3
{
    double i;
    char j;
    char k;
    double n;
    int o;
};
int main()
{

    printf("%d\n", sizeof(struct S3));
    printf("%d\n", offsetof(struct S1,c1));
    printf("%d\n", offsetof(struct S1,i));
    printf("%d\n", offsetof(struct S1,c2));
    //练习2
    //printf("%d\n", sizeof(struct S2));
}

