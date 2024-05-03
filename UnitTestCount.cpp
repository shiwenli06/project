#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(integerArithmetic)//整数运算
		{
			int Max = 50; //最大值
			int tishu = 5;//数量
			int  Symbo = 1;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 1;//0表示没有小数，1表示有小数 int Print = 0;//用户选择输出方式（1表示输出到文件，0表示输出屏幕）
			int  Print = 1;//是否输出到文件0.不通过文件输出  1.通过文件输出
			int a, b;//随机数
			int ans[100];
			int i = 0;
			char type = ' ';//运算符
			int result[100];//答案
			for (i = 1; i <= tishu; i++) {

			}
			for (i = 1; i <= tishu; i++) {
				Assert::AreEqual(ans[i], result[i]);
			};

		}
		TEST_METHOD(integer)//整数四则运算
		{
			int Max = 50; //最大值
			int tishu = 5;//数量
			int  Symbo = 2;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 1;//0表示没有小数，1表示有小数 
			int Print = 0;//用户选择输出方式（1表示输出到文件，0表示输出屏幕）
			int a, b;//随机数
			int ans[100];
			int i = 0;
			char type = ' ';//运算符
			int result[100];//答案
			for (i = 1; i <= tishu; i++) {

			}
			for (i = 1; i <= tishu; i++) {
				Assert::AreEqual(ans[i], result[i]);
			};

		}
		TEST_METHOD(mixinteger)//整数混合运算
		{
			int Max = 50; //最大值
			int tishu = 5;//数量
			int  Symbo = 9;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 0;//0表示没有小数，1表示有小数 
			int Print = 0;//用户选择输出方式（1表示输出到文件，0表示输出屏幕）
			int a, b;//随机数
			int ans[100];
			int i = 0;
			char type = ' ';//运算符
			int result[100];//答案
			for (i = 1; i <= tishu; i++) {

			}
			for (i = 1; i <= tishu; i++) {
				Assert::AreEqual(ans[i], result[i]);
			};

		}
		
		TEST_METHOD(fractionalArithmetic)// 小数运算
		{
			int Max = 10; //最大值
			int tishu = 3;//数量
			int  Symbo = 3;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 2;//0表示没有小数，1表示有小数
			int  Print = 1;//是否输出到文件0.不通过文件输出  1.通过文件输出
			float a = 6, b = 3;
			float ans = 9;
			float result = a + b;
			Assert::AreEqual(ans, result);
		}
		TEST_METHOD(decimals)// 小数四则运算
		{
			int Max = 10; //最大值
			int tishu = 3;//数量
			int  Symbo = 3;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 2;//0表示没有小数，1表示有小数
			int  Print = 1;//是否输出到文件0.不通过文件输出  1.通过文件输出
			float a = 6.0, b = 3.0;
			float ans = 3.0;
			float result = a - b;
			Assert::AreEqual(ans, result);
		}
		TEST_METHOD(mixlittle)// 小数混合运算
		{
			int Max = 10; //最大值
			int tishu = 3;//数量
			int  Symbo = 3;//请连续输入使用的运算符（在“+”，“-”，“*”，“/”中选择输入）
			int Xiaoshu = 2;//0表示没有小数，1表示有小数
			int  Print = 1;//是否输出到文件0.不通过文件输出  1.通过文件输出
			float a = 6.0, b = 3.0;
			float ans = 18.0;
			float result = a * b;
			Assert::AreEqual(ans, result);
		}
		
	};
}
