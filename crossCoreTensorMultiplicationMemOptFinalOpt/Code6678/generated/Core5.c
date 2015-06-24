/** 
 * @file Core5.c
 * @generated by C6678CPrinter
 * @date Tue Apr 21 13:20:59 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__26;  // explode_generateTensors_arrayA > multiplyTensors_61 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__113;  // explode_generateTensors_arrayA > multiplyTensors_60 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__121;  // explode_generateTensors_arrayA > multiplyTensors_59 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__69;  // explode_generateTensors_arrayA > multiplyTensors_39 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__45;  // explode_generateTensors_arrayA > multiplyTensors_38 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__29;  // explode_generateTensors_arrayA > multiplyTensors_33 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__97;  // explode_generateTensors_arrayA > multiplyTensors_16 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__28;  // explode_generateTensors_arrayA > multiplyTensors_15 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__59;  // explode_generateTensors_arrayB > multiplyTensors_61 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__5;  // explode_generateTensors_arrayB > multiplyTensors_60 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__14;  // explode_generateTensors_arrayB > multiplyTensors_59 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__22;  // explode_generateTensors_arrayB > multiplyTensors_39 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__33;  // explode_generateTensors_arrayB > multiplyTensors_38 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__103;  // explode_generateTensors_arrayB > multiplyTensors_33 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__123;  // explode_generateTensors_arrayB > multiplyTensors_16 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__104;  // explode_generateTensors_arrayB > multiplyTensors_15 size:= 1048576*char defined in Core0
extern int *const arrayA_3932160__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3932160 > multiplyTensors_15_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_3932160__arrayB__0;  // explode_generateTensors_arrayB_arrayB_3932160 > multiplyTensors_15_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3932160__0;  // multiplyTensors_15_arrayC > implode_displayTensor_arrayC_arrayC_3932160 size:= 262144*long defined in Core0
extern char *const multiplyTensors_15__implode___0;  // multiplyTensors_15 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_4194304__arrayA__0;  // explode_generateTensors_arrayA_arrayA_4194304 > multiplyTensors_16_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_4194304__arrayB__0;  // explode_generateTensors_arrayB_arrayB_4194304 > multiplyTensors_16_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_4194304__0;  // multiplyTensors_16_arrayC > implode_displayTensor_arrayC_arrayC_4194304 size:= 262144*long defined in Core0
extern char *const multiplyTensors_16__implode___0;  // multiplyTensors_16 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_8650752__arrayA__0;  // explode_generateTensors_arrayA_arrayA_8650752 > multiplyTensors_33_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_8650752__arrayB__0;  // explode_generateTensors_arrayB_arrayB_8650752 > multiplyTensors_33_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_8650752__0;  // multiplyTensors_33_arrayC > implode_displayTensor_arrayC_arrayC_8650752 size:= 262144*long defined in Core0
extern char *const multiplyTensors_33__implode___0;  // multiplyTensors_33 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_9961472__arrayA__0;  // explode_generateTensors_arrayA_arrayA_9961472 > multiplyTensors_38_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_9961472__arrayB__0;  // explode_generateTensors_arrayB_arrayB_9961472 > multiplyTensors_38_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_9961472__0;  // multiplyTensors_38_arrayC > implode_displayTensor_arrayC_arrayC_9961472 size:= 262144*long defined in Core0
extern char *const multiplyTensors_38__implode___0;  // multiplyTensors_38 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_10223616__arrayA__0;  // explode_generateTensors_arrayA_arrayA_10223616 > multiplyTensors_39_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_10223616__arrayB__0;  // explode_generateTensors_arrayB_arrayB_10223616 > multiplyTensors_39_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_10223616__0;  // multiplyTensors_39_arrayC > implode_displayTensor_arrayC_arrayC_10223616 size:= 262144*long defined in Core0
extern char *const multiplyTensors_39__implode___0;  // multiplyTensors_39 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_15466496__arrayA__0;  // explode_generateTensors_arrayA_arrayA_15466496 > multiplyTensors_59_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_15466496__arrayB__0;  // explode_generateTensors_arrayB_arrayB_15466496 > multiplyTensors_59_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_15466496__0;  // multiplyTensors_59_arrayC > implode_displayTensor_arrayC_arrayC_15466496 size:= 262144*long defined in Core0
extern char *const multiplyTensors_59__implode___0;  // multiplyTensors_59 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_15728640__arrayA__0;  // explode_generateTensors_arrayA_arrayA_15728640 > multiplyTensors_60_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_15728640__arrayB__0;  // explode_generateTensors_arrayB_arrayB_15728640 > multiplyTensors_60_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_15728640__0;  // multiplyTensors_60_arrayC > implode_displayTensor_arrayC_arrayC_15728640 size:= 262144*long defined in Core0
extern char *const multiplyTensors_60__implode___0;  // multiplyTensors_60 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_15990784__arrayA__0;  // explode_generateTensors_arrayA_arrayA_15990784 > multiplyTensors_61_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_15990784__arrayB__0;  // explode_generateTensors_arrayB_arrayB_15990784 > multiplyTensors_61_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_15990784__0;  // multiplyTensors_61_arrayC > implode_displayTensor_arrayC_arrayC_15990784 size:= 262144*long defined in Core0
extern char *const multiplyTensors_61__implode___0;  // multiplyTensors_61 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0

// Core Global Definitions

void core5(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__26 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__26 
		cache_inv(explode_generateTensors_arra__26, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__113 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__113 
		cache_inv(explode_generateTensors_arra__113, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__121 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__121 
		cache_inv(explode_generateTensors_arra__121, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__69 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__69 
		cache_inv(explode_generateTensors_arra__69, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__45 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__45 
		cache_inv(explode_generateTensors_arra__45, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__29 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__29 
		cache_inv(explode_generateTensors_arra__29, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__97 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__97 
		cache_inv(explode_generateTensors_arra__97, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core5: explode_generateTensors_arra__28 
		receiveEnd(0); // Core0 > Core5: explode_generateTensors_arra__28 
		cache_inv(explode_generateTensors_arra__28, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__59 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__59 
		cache_inv(explode_generateTensors_arra__59, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__5 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__5 
		cache_inv(explode_generateTensors_arra__5, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__14 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__14 
		cache_inv(explode_generateTensors_arra__14, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__22 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__22 
		cache_inv(explode_generateTensors_arra__22, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__33 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__33 
		cache_inv(explode_generateTensors_arra__33, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__103 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__103 
		cache_inv(explode_generateTensors_arra__103, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__123 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__123 
		cache_inv(explode_generateTensors_arra__123, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateTensors_arra__104 
		receiveEnd(7); // Core7 > Core5: explode_generateTensors_arra__104 
		cache_inv(explode_generateTensors_arra__104, 1048576*sizeof(char));
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_3932160__arrayA__0,arrayB_3932160__arrayB__0,arrayC__arrayC_3932160__0); // multiplyTensors_15
		cache_inv(arrayA_3932160__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_3932160__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_15__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_15__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_15__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_4194304__arrayA__0,arrayB_4194304__arrayB__0,arrayC__arrayC_4194304__0); // multiplyTensors_16
		cache_inv(arrayA_4194304__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_4194304__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_16__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_16__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_16__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_8650752__arrayA__0,arrayB_8650752__arrayB__0,arrayC__arrayC_8650752__0); // multiplyTensors_33
		cache_inv(arrayA_8650752__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_8650752__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_33__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_33__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_33__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_9961472__arrayA__0,arrayB_9961472__arrayB__0,arrayC__arrayC_9961472__0); // multiplyTensors_38
		cache_inv(arrayA_9961472__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_9961472__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_38__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_38__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_38__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_10223616__arrayA__0,arrayB_10223616__arrayB__0,arrayC__arrayC_10223616__0); // multiplyTensors_39
		cache_inv(arrayA_10223616__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_10223616__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_39__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_39__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_39__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_15466496__arrayA__0,arrayB_15466496__arrayB__0,arrayC__arrayC_15466496__0); // multiplyTensors_59
		cache_inv(arrayA_15466496__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_15466496__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_59__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_59__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_59__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_15728640__arrayA__0,arrayB_15728640__arrayB__0,arrayC__arrayC_15728640__0); // multiplyTensors_60
		cache_inv(arrayA_15728640__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_15728640__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_60__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_60__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_60__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_15990784__arrayA__0,arrayB_15990784__arrayB__0,arrayC__arrayC_15990784__0); // multiplyTensors_61
		cache_inv(arrayA_15990784__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_15990784__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_61__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyTensors_61__implode___0 
		sendEnd(); // Core5 > Core7: multiplyTensors_61__implode___0 
	}
}
