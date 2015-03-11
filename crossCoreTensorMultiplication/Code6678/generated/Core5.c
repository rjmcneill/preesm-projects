/** 
 * @file Core5.c
 * @generated by C6678CPrinter
 * @date Wed Mar 11 22:27:57 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__6;  // explode_generateTensors_arrayA > multiplyTensors_14 size:= 32*char defined in Core0
extern char *const explode_generateTensors_arra__0;  // explode_generateTensors_arrayA > multiplyTensors_3 size:= 32*char defined in Core0
extern char *const broadcastTensorB_0__multiply__3;  // broadcastTensorB_0 > multiplyTensors_3 size:= 256*char defined in Core0
extern char *const broadcastTensorB_1__multiply__7;  // broadcastTensorB_1 > multiplyTensors_14 size:= 256*char defined in Core0
extern int *const arrayA_112__arrayA__0;  // explode_generateTensors_arrayA_arrayA_112 > multiplyTensors_14_arrayA size:= 8*int defined in Core0
extern int *const output_384__arrayB__0;  // broadcastTensorB_1_output_384 > multiplyTensors_14_arrayB size:= 64*int defined in Core0
extern long *const arrayC__arrayC_112__0;  // multiplyTensors_14_arrayC > implode_displayTensor_arrayC_arrayC_112 size:= 8*long defined in Core0
extern char *const multiplyTensors_14__implode___0;  // multiplyTensors_14 > implode_displayTensor_arrayC size:= 32*char defined in Core0
extern int *const arrayA_24__arrayA__0;  // explode_generateTensors_arrayA_arrayA_24 > multiplyTensors_3_arrayA size:= 8*int defined in Core0
extern int *const output_192__arrayB__0;  // broadcastTensorB_0_output_192 > multiplyTensors_3_arrayB size:= 64*int defined in Core0
extern long *const arrayC__arrayC_24__0;  // multiplyTensors_3_arrayC > implode_displayTensor_arrayC_arrayC_24 size:= 8*long defined in Core0
extern char *const multiplyTensors_3__implode_d__0;  // multiplyTensors_3 > implode_displayTensor_arrayC size:= 32*char defined in Core0

// Core Global Definitions

void core5(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__6 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__6 
		cache_inv(explode_generateTensors_arra__6, 32*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__0 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__0 
		cache_inv(explode_generateTensors_arra__0, 32*sizeof(char));
		receiveStart(); // Core7 > Core5: broadcastTensorB_0__multiply__3 
		receiveEnd(7); // Core7 > Core5: broadcastTensorB_0__multiply__3 
		cache_inv(broadcastTensorB_0__multiply__3, 256*sizeof(char));
		receiveStart(); // Core0 > Core5: broadcastTensorB_1__multiply__7 
		receiveEnd(0); // Core0 > Core5: broadcastTensorB_1__multiply__7 
		cache_inv(broadcastTensorB_1__multiply__7, 256*sizeof(char));
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_112__arrayA__0,output_384__arrayB__0,arrayC__arrayC_112__0); // multiplyTensors_14
		cache_inv(arrayA_112__arrayA__0, 8*sizeof(int));
		cache_inv(output_384__arrayB__0, 64*sizeof(int));
		cache_wbInv(multiplyTensors_14__implode___0, 32*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_14__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_14__implode___0 
		multiply(8/*rowsA*/,8/*columnsA*/,2/*depthA*/,8/*rowsB*/,8/*columnsB*/,2/*depthB*/,arrayA_24__arrayA__0,output_192__arrayB__0,arrayC__arrayC_24__0); // multiplyTensors_3
		cache_inv(arrayA_24__arrayA__0, 8*sizeof(int));
		cache_inv(output_192__arrayB__0, 64*sizeof(int));
		cache_wbInv(multiplyTensors_3__implode_d__0, 32*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_3__implode_d__0 
		sendEnd(); // Core5 > Core7: multiplyTensors_3__implode_d__0 
	}
}
