/************************************************************************************************************************************
*本程序为串口进行100以内整数乘法的例程，其功能如下：
*程序运行开始，在串口调试器窗口输出“ Please enter two integers between 0 to 100, then you'll get the product.”
*输入两个100以内的整数后（中间有空格）后发送到单片机，单片机返回两数乘积并在串口调试器窗口输出
*如果输入不合规范的话，串口调试器窗口输出“ Warnning! Please make sure the numbers you've entered were two integers between 0 to 100!”
************************************************************************************************************************************/

# include <reg51.h>
# include <stdio.h>
# include <fun.h>

void product()
{
    int a,b,c;
    printf("Please enter two integers between 0 to 100, then you'll get the product.\n ");//printf()函数包含在stdio.h头文件里，为串口发送操作的封装
    Delay100ms();
	
    scanf("%d%d",&a,&b);//scanf()函数包含在stdio.h头文件里，为串口输入操作的封装
    Delay100ms();
    printf("you print%d%d\n ",a,b);
	
    if((a<100)&&(a>0)&&(b<100)&&(b>0))
    {
        c = a*b;
        printf("result is %d\n",c);
    }
    else
        printf("Warnning! Please make sure the numbers you've entered were two integers between 0 to 100!\n");
}
/***本函数中所使用的两个封装后的函数操作及使用方法见 http://www.51hei.com/mcu/3295.html ***/
/***本函数的操作亦可置于串口中断中，可自行尝试，不另述 ***/

void main()
{
    product();
    while(1)
    {

    }
}