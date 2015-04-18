/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Sat Apr 18 02:06:19 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__3;  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__6;  // explode_generateTensors_arrayB > multiplyTensors_2 size:= 1048576*char defined in Core0
extern int *const arrayA_524288__arrayA__0;  // explode_generateTensors_arrayA_arrayA_524288 > multiplyTensors_2_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_524288__arrayB__0;  // explode_generateTensors_arrayB_arrayB_524288 > multiplyTensors_2_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_524288__0;  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_524288 size:= 262144*long defined in Core0
extern char *const multiplyTensors_2__implode_d__0;  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core1: explode_generateTensors_arra__3 
		receiveEnd(7); // Core7 > Core1: explode_generateTensors_arra__3 
		cache_inv(explode_generateTensors_arra__3, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core1: explode_generateTensors_arra__6 
		receiveEnd(0); // Core0 > Core1: explode_generateTensors_arra__6 
		cache_inv(explode_generateTensors_arra__6, 1048576*sizeof(char));
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_524288__arrayA__0,arrayB_524288__arrayB__0,arrayC__arrayC_524288__0); // multiplyTensors_2
		cache_inv(arrayA_524288__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_524288__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_2__implode_d__0, 1048576*sizeof(char));
		sendStart(7); // Core1 > Core7: multiplyTensors_2__implode_d__0 
		sendEnd(); // Core1 > Core7: multiplyTensors_2__implode_d__0 
	}
}
