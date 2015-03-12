/** 
 * @file Core6.c
 * @generated by C6678CPrinter
 * @date Thu Mar 12 22:30:19 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__2;  // explode_generateTensors_arrayA > multiplyTensors_15 size:= 2097152*char defined in Core0
extern char *const explode_generateTensors_arra__8;  // explode_generateTensors_arrayA > multiplyTensors_3 size:= 2097152*char defined in Core0
extern char *const broadcastTensorB_0__multiply__4;  // broadcastTensorB_0 > multiplyTensors_3 size:= 16777216*char defined in Core0
extern char *const broadcastTensorB_1__multiply__7;  // broadcastTensorB_1 > multiplyTensors_15 size:= 16777216*char defined in Core0
extern int *const arrayA_7864320__arrayA__0;  // explode_generateTensors_arrayA_arrayA_7864320 > multiplyTensors_15_arrayA size:= 524288*int defined in Core0
extern int *const output_29360128__arrayB__1;  // broadcastTensorB_1_output_29360128 > multiplyTensors_15_arrayB size:= 4194304*int defined in Core0
extern long *const arrayC__arrayC_7864320__0;  // multiplyTensors_15_arrayC > implode_displayTensor_arrayC_arrayC_7864320 size:= 524288*long defined in Core0
extern char *const multiplyTensors_15__implode___0;  // multiplyTensors_15 > implode_displayTensor_arrayC size:= 2097152*char defined in Core0
extern int *const arrayA_1572864__arrayA__0;  // explode_generateTensors_arrayA_arrayA_1572864 > multiplyTensors_3_arrayA size:= 524288*int defined in Core0
extern int *const output_12582912__arrayB__0;  // broadcastTensorB_0_output_12582912 > multiplyTensors_3_arrayB size:= 4194304*int defined in Core0
extern long *const arrayC__arrayC_1572864__0;  // multiplyTensors_3_arrayC > implode_displayTensor_arrayC_arrayC_1572864 size:= 524288*long defined in Core0
extern char *const multiplyTensors_3__implode_d__0;  // multiplyTensors_3 > implode_displayTensor_arrayC size:= 2097152*char defined in Core0

// Core Global Definitions

void core6(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__2 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__2 
		cache_inv(explode_generateTensors_arra__2, 2097152*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__8 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__8 
		cache_inv(explode_generateTensors_arra__8, 2097152*sizeof(char));
		receiveStart(); // Core3 > Core6: broadcastTensorB_0__multiply__4 
		receiveEnd(3); // Core3 > Core6: broadcastTensorB_0__multiply__4 
		cache_inv(broadcastTensorB_0__multiply__4, 16777216*sizeof(char));
		receiveStart(); // Core7 > Core6: broadcastTensorB_1__multiply__7 
		receiveEnd(7); // Core7 > Core6: broadcastTensorB_1__multiply__7 
		cache_inv(broadcastTensorB_1__multiply__7, 16777216*sizeof(char));
		multiply(2048/*rowsA*/,2048/*columnsA*/,2/*depthA*/,2048/*rowsB*/,2048/*columnsB*/,2/*depthB*/,arrayA_7864320__arrayA__0,output_29360128__arrayB__1,arrayC__arrayC_7864320__0); // multiplyTensors_15
		cache_inv(arrayA_7864320__arrayA__0, 524288*sizeof(int));
		cache_inv(output_29360128__arrayB__1, 4194304*sizeof(int));
		cache_wbInv(multiplyTensors_15__implode___0, 2097152*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_15__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_15__implode___0 
		multiply(2048/*rowsA*/,2048/*columnsA*/,2/*depthA*/,2048/*rowsB*/,2048/*columnsB*/,2/*depthB*/,arrayA_1572864__arrayA__0,output_12582912__arrayB__0,arrayC__arrayC_1572864__0); // multiplyTensors_3
		cache_inv(arrayA_1572864__arrayA__0, 524288*sizeof(int));
		cache_inv(output_12582912__arrayB__0, 4194304*sizeof(int));
		cache_wbInv(multiplyTensors_3__implode_d__0, 2097152*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_3__implode_d__0 
		sendEnd(); // Core6 > Core7: multiplyTensors_3__implode_d__0 
	}
}
