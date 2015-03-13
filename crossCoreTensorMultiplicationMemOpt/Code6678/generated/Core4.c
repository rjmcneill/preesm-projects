/** 
 * @file Core4.c
 * @generated by C6678CPrinter
 * @date Fri Mar 13 01:30:27 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__10;  // explode_generateTensors_arrayA > multiplyTensors_9 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__4;  // explode_generateTensors_arrayA > multiplyTensors_8 size:= 32*char defined in Core0
extern char *const broadcastTensorB_1__multiply__4;  // broadcastTensorB_1 > multiplyTensors_9 size:= 256*char defined in Core0
extern char *const broadcastTensorB_1__multiply__3;  // broadcastTensorB_1 > multiplyTensors_8 size:= 256*char defined in Core0
extern int *const arrayA_64__arrayA__0;  // explode_generateTensors_arrayA_arrayA_64 > multiplyTensors_8_arrayA size:= 8*int defined in Core0
extern int *const output_0__arrayB__0;  // broadcastTensorB_1_output_0 > multiplyTensors_8_arrayB size:= 64*int defined in Core0
extern long *const arrayC__arrayC_64__0;  // multiplyTensors_8_arrayC > implode_displayTensor_arrayC_arrayC_64 size:= 8*long defined in Core0
extern char *const multiplyTensors_8__implode_d__0;  // multiplyTensors_8 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern int *const arrayA_72__arrayA__0;  // explode_generateTensors_arrayA_arrayA_72 > multiplyTensors_9_arrayA size:= 8*int defined in Core0
extern int *const output_64__arrayB__0;  // broadcastTensorB_1_output_64 > multiplyTensors_9_arrayB size:= 64*int defined in Core0
extern long *const arrayC__arrayC_72__0;  // multiplyTensors_9_arrayC > implode_displayTensor_arrayC_arrayC_72 size:= 8*long defined in Core0
extern char *const multiplyTensors_9__implode_d__0;  // multiplyTensors_9 > implode_displayTensor_arrayC size:= 32*char defined in Core0

// Core Global Definitions

void core4(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__10 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__10 
		cache_inv(explode_generateTensors_arra__10, 32*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateTensors_arra__4 
		receiveEnd(7); // Core7 > Core4: explode_generateTensors_arra__4 
		cache_inv(explode_generateTensors_arra__4, 32*sizeof(char));
		receiveStart(); // Core0 > Core4: broadcastTensorB_1__multiply__4 
		receiveEnd(0); // Core0 > Core4: broadcastTensorB_1__multiply__4 
		cache_inv(broadcastTensorB_1__multiply__4, 256*sizeof(char));
		receiveStart(); // Core0 > Core4: broadcastTensorB_1__multiply__3 
		receiveEnd(0); // Core0 > Core4: broadcastTensorB_1__multiply__3 
		cache_inv(broadcastTensorB_1__multiply__3, 256*sizeof(char));
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_64__arrayA__0,output_0__arrayB__0,arrayC__arrayC_64__0); // multiplyTensors_8
		cache_inv(arrayA_64__arrayA__0, 8*sizeof(int));
		cache_inv(output_0__arrayB__0, 64*sizeof(int));
		cache_wbInv(multiplyTensors_8__implode_d__0, 32*sizeof(char));
		sendStart(2); // Core4 > Core2: multiplyTensors_8__implode_d__0 
		sendEnd(); // Core4 > Core2: multiplyTensors_8__implode_d__0 
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_72__arrayA__0,output_64__arrayB__0,arrayC__arrayC_72__0); // multiplyTensors_9
		cache_inv(arrayA_72__arrayA__0, 8*sizeof(int));
		cache_inv(output_64__arrayB__0, 64*sizeof(int));
		cache_wbInv(multiplyTensors_9__implode_d__0, 32*sizeof(char));
		sendStart(2); // Core4 > Core2: multiplyTensors_9__implode_d__0 
		sendEnd(); // Core4 > Core2: multiplyTensors_9__implode_d__0 
	}
}
