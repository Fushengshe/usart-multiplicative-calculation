# include <reg51.h>
# include <stdio.h>
# include <fun.h>

void product()
{
    int a,b,c;
    printf("Please enter two integers between 0 to 100, then you'll get the product.\n ");//printf()����������stdio.hͷ�ļ��Ϊ���ڷ��Ͳ����ķ�װ
    Delay100ms();
	
    scanf("%d%d",&a,&b);//scanf()����������stdio.hͷ�ļ��Ϊ������������ķ�װ
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
/***����������ʹ�õ�������װ��ĺ���������ʹ�÷����� http://www.51hei.com/mcu/3295.html ***/
/***�������Ĳ���������ڴ����ж��У������г��ԣ������� ***/

void main()
{
    product();
    while(1)
    {

    }
}