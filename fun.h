# include <intrins.h>

void Delay100ms()
{
    unsigned char i, j, k;

    _nop_(); //���ǻ��ָ�����Ϊ��ʱһ��ָ�����ڣ���ָ���λ��instrins.hͷ�ļ���
    _nop_();
    i = 5;
    j = 52;
    k = 195;
	
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

 void init_usart()
 {
    SCON=0X50;  //	@12mhz 4800
    TMOD=0X20;
    PCON=0X80;
    TH1=0XF3;
    TL1=0XF3;
    RI=0;
    ES=0;
    TR1=1;
    TI=1;
 }