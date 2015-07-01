
#include "ebox.h"
#include "uartx.h"
#include "interrupts.h"

#include "mpu6050.h"


//MPU6050 mpu(24,25);
#include "i2c.h"

I2C m;
void setup()
{
	eBoxInit();
	uart3.begin(115200);

	
//	mpu.begin();
//	mpu.setSpeed(100000);
//	pinMode(7,OUTPUT);
}

int16_t tmp[7];
int16_t x,y,z;
int16_t id;
int main(void)
{
	setup();
	m.init();
	m.init();
	m.init();
	m.mpuInit();
	m.mpuInit();
	m.mpuInit();
	while(1)
	{
		id = m.getID();
		uart3.printf("\r\nid = %d",id);
		x = m.GetData(ACCEL_XOUT_H);
//		id = mpu.getID();
//		mpu.getData(ACCEL_XOUT_H,tmp,7);
//		x = mpu.getData(ACCEL_XOUT_H);
//		y = mpu.getData(ACCEL_YOUT_H);
//		z = mpu.getData(ACCEL_ZOUT_H);
		uart3.printf("\r\nX = %d",x);
//		uart3.printf("\r\naccx = %d",tmp[0]);
//		uart3.printf("\r\naccy = %d",tmp[1]);
//		uart3.printf("\r\naccz = %d",tmp[2]);
//		uart3.printf("\r\ntemp = %d",tmp[3]);
//		uart3.printf("\r\ngyrox = %d",tmp[4]);
//		uart3.printf("\r\ngyroy = %d",tmp[5]);
//		uart3.printf("\r\ngyroz = %d",tmp[6]);
		uart3.printf("\r\n==========");
//		uart3.printf("\r\nY = %d",y);
//		uart3.printf("\r\nZ = %d",z);
//		uart3.printf("\r\n==========");
		delay_ms(500);
	}


}



