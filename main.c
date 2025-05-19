#include "main.h"
#include "dht11.h"

int main(void)
{
	.....
	HAL_TIM_Base_Start(&htim6);  // for us Delay
	HAL_Delay(2000);
	while (1)
	{
		DHT11_Start();
		Presence = DHT11_Check_Response();
		Rh_byte1 = DHT11_Read ();
		Rh_byte2 = DHT11_Read ();
		Temp_byte1 = DHT11_Read ();
		Temp_byte2 = DHT11_Read ();
		SUM = DHT11_Read();
		TEMP = Temp_byte1;
		RH = Rh_byte1;
		Temperature = (float) TEMP;
		Humidity = (float) RH;
		HAL_Delay(3000);
	}
}
