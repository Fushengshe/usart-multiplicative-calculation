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