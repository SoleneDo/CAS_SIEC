#include <stdint.h>
#include <stm32f10x.h>
#include <stdio.h>
#include "system_time.h"
#include "manager.h"
#include "common_constants.h"
#include "us_sensors.h"
#include "direction.h"

int main(void) {
	
	uint8_t acqDir = 0; 
	Manager_Init();
	while (1){
		acqDir = Direction_get();
		printf("acqUS front : %d ", acqDir) ;
		}
}


// TEST ULTRASON //
//int main(void) {
//	
//	float acqUs = 0.; 
//	Manager_Init();
//	while (1){
//		acqUs = US_CalcDistance(US_FL);
//		printf("acqUS front : %f ", acqUs) ;
//		}
//}