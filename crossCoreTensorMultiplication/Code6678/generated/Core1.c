/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Thu Mar 12 23:36:14 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__1;  // explode_generateTensors_arrayA > multiplyTensors_12 size:= 2097152*char defined in Core0
extern char *const explode_generateTensors_arra__5;  // explode_generateTensors_arrayA > multiplyTensors_10 size:= 2097152*char defined in Core0
extern char *const broadcastTensorB_1__multiply__5;  // broadcastTensorB_1 > multiplyTensors_12 size:= 16777216*char defined in Core0
extern char *const broadcastTensorB_1__multiply__3;  // broadcastTensorB_1 > multiplyTensors_10 size:= 16777216*char defined in Core0
extern int *const arrayA_5242880__arrayA__0;  // explode_generateTensors_arrayA_arrayA_5242880 > multiplyTensors_10_arrayA size:= 524288*int defined in Core0
extern int *const output_8388608__arrayB__0;  // broadcastTensorB_1_output_8388608 > multiplyTensors_10_arrayB size:= 4194304*int defined in Core0
extern long *const arrayC__arrayC_5242880__0;  // multiplyTensors_10_arrayC > implode_displayTensor_arrayC_arrayC_5242880 size:= 524288*long defined in Core0
extern char *const multiplyTensors_10__implode___0;  // multiplyTensors_10 > implode_displayTensor_arrayC size:= 2097152*char defined in Core0
extern int *const arrayA_6291456__arrayA__0;  // explode_generateTensors_arrayA_arrayA_6291456 > multiplyTensors_12_arrayA size:= 524288*int defined in Core0
extern int *const output_16777216__arrayB__0;  // broadcastTensorB_1_output_16777216 > multiplyTensors_12_arrayB size:= 4194304*int defined in Core0
extern long *const arrayC__arrayC_6291456__0;  // multiplyTensors_12_arrayC > implode_displayTensor_arrayC_arrayC_6291456 size:= 524288*long defined in Core0
extern char *const multiplyTensors_12__implode___0;  // multiplyTensors_12 > implode_displayTensor_arrayC size:= 2097152*char defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core1: explode_generateTensors_arra__1 
		receiveEnd(0); // Core0 > Core1: explode_generateTensors_arra__1 
		cache_inv(explode_generateTensors_arra__1, 2097152*sizeof(char));
		receiveStart(); // Core0 > Core1: explode_generateTensors_arra__5 
		receiveEnd(0); // Core0 > Core1: explode_generateTensors_arra__5 
		cache_inv(explode_generateTensors_arra__5, 2097152*sizeof(char));
		receiveStart(); // Core4 > Core1: broadcastTensorB_1__multiply__5 
		receiveEnd(4); // Core4 > Core1: broadcastTensorB_1__multiply__5 
		cache_inv(broadcastTensorB_1__multiply__5, 16777216*sizeof(char));
		receiveStart(); // Core4 > Core1: broadcastTensorB_1__multiply__3 
		receiveEnd(4); // Core4 > Core1: broadcastTensorB_1__multiply__3 
		cache_inv(broadcastTensorB_1__multiply__3, 16777216*sizeof(char));
		multiply(2048/*rowsA*/,2048/*columnsA*/,2/*depthA*/,2048/*rowsB*/,2048/*columnsB*/,2/*depthB*/,arrayA_5242880__arrayA__0,output_8388608__arrayB__0,arrayC__arrayC_5242880__0); // multiplyTensors_10
		cache_inv(arrayA_5242880__arrayA__0, 524288*sizeof(int));
		cache_inv(output_8388608__arrayB__0, 4194304*sizeof(int));
		cache_wbInv(multiplyTensors_10__implode___0, 2097152*sizeof(char));
		sendStart(7); // Core1 > Core7: multiplyTensors_10__implode___0 
		sendEnd(); // Core1 > Core7: multiplyTensors_10__implode___0 
		multiply(2048/*rowsA*/,2048/*columnsA*/,2/*depthA*/,2048/*rowsB*/,2048/*columnsB*/,2/*depthB*/,arrayA_6291456__arrayA__0,output_16777216__arrayB__0,arrayC__arrayC_6291456__0); // multiplyTensors_12
		cache_inv(arrayA_6291456__arrayA__0, 524288*sizeof(int));
		cache_inv(output_16777216__arrayB__0, 4194304*sizeof(int));
		cache_wbInv(multiplyTensors_12__implode___0, 2097152*sizeof(char));
		sendStart(7); // Core1 > Core7: multiplyTensors_12__implode___0 
		sendEnd(); // Core1 > Core7: multiplyTensors_12__implode___0 
	}
}
