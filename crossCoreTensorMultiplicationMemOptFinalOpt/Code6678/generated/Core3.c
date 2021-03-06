/** 
 * @file Core3.c
 * @generated by C6678CPrinter
 * @date Tue Apr 21 13:20:59 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__114;  // explode_generateTensors_arrayA > multiplyTensors_57 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__66;  // explode_generateTensors_arrayA > multiplyTensors_45 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__89;  // explode_generateTensors_arrayA > multiplyTensors_30 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__93;  // explode_generateTensors_arrayA > multiplyTensors_25 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__8;  // explode_generateTensors_arrayA > multiplyTensors_14 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__15;  // explode_generateTensors_arrayA > multiplyTensors_12 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__46;  // explode_generateTensors_arrayA > multiplyTensors_11 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__78;  // explode_generateTensors_arrayA > multiplyTensors_10 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__117;  // explode_generateTensors_arrayB > multiplyTensors_57 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__7;  // explode_generateTensors_arrayB > multiplyTensors_45 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__19;  // explode_generateTensors_arrayB > multiplyTensors_30 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__80;  // explode_generateTensors_arrayB > multiplyTensors_25 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__39;  // explode_generateTensors_arrayB > multiplyTensors_14 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__106;  // explode_generateTensors_arrayB > multiplyTensors_12 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__83;  // explode_generateTensors_arrayB > multiplyTensors_11 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__105;  // explode_generateTensors_arrayB > multiplyTensors_10 size:= 1048576*char defined in Core0
extern int *const arrayA_2621440__arrayA__0;  // explode_generateTensors_arrayA_arrayA_2621440 > multiplyTensors_10_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_2621440__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2621440 > multiplyTensors_10_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_2621440__0;  // multiplyTensors_10_arrayC > implode_displayTensor_arrayC_arrayC_2621440 size:= 262144*long defined in Core0
extern char *const multiplyTensors_10__implode___0;  // multiplyTensors_10 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_2883584__arrayA__0;  // explode_generateTensors_arrayA_arrayA_2883584 > multiplyTensors_11_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_2883584__arrayB__0;  // explode_generateTensors_arrayB_arrayB_2883584 > multiplyTensors_11_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_2883584__0;  // multiplyTensors_11_arrayC > implode_displayTensor_arrayC_arrayC_2883584 size:= 262144*long defined in Core0
extern char *const multiplyTensors_11__implode___0;  // multiplyTensors_11 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_3145728__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3145728 > multiplyTensors_12_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_3145728__arrayB__0;  // explode_generateTensors_arrayB_arrayB_3145728 > multiplyTensors_12_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3145728__0;  // multiplyTensors_12_arrayC > implode_displayTensor_arrayC_arrayC_3145728 size:= 262144*long defined in Core0
extern char *const multiplyTensors_12__implode___0;  // multiplyTensors_12 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_3670016__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3670016 > multiplyTensors_14_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_3670016__arrayB__0;  // explode_generateTensors_arrayB_arrayB_3670016 > multiplyTensors_14_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3670016__0;  // multiplyTensors_14_arrayC > implode_displayTensor_arrayC_arrayC_3670016 size:= 262144*long defined in Core0
extern char *const multiplyTensors_14__implode___0;  // multiplyTensors_14 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_6553600__arrayA__0;  // explode_generateTensors_arrayA_arrayA_6553600 > multiplyTensors_25_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_6553600__arrayB__0;  // explode_generateTensors_arrayB_arrayB_6553600 > multiplyTensors_25_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_6553600__0;  // multiplyTensors_25_arrayC > implode_displayTensor_arrayC_arrayC_6553600 size:= 262144*long defined in Core0
extern char *const multiplyTensors_25__implode___0;  // multiplyTensors_25 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_7864320__arrayA__0;  // explode_generateTensors_arrayA_arrayA_7864320 > multiplyTensors_30_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_7864320__arrayB__0;  // explode_generateTensors_arrayB_arrayB_7864320 > multiplyTensors_30_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_7864320__0;  // multiplyTensors_30_arrayC > implode_displayTensor_arrayC_arrayC_7864320 size:= 262144*long defined in Core0
extern char *const multiplyTensors_30__implode___0;  // multiplyTensors_30 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_11796480__arrayA__0;  // explode_generateTensors_arrayA_arrayA_11796480 > multiplyTensors_45_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_11796480__arrayB__0;  // explode_generateTensors_arrayB_arrayB_11796480 > multiplyTensors_45_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_11796480__0;  // multiplyTensors_45_arrayC > implode_displayTensor_arrayC_arrayC_11796480 size:= 262144*long defined in Core0
extern char *const multiplyTensors_45__implode___0;  // multiplyTensors_45 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0
extern int *const arrayA_14942208__arrayA__0;  // explode_generateTensors_arrayA_arrayA_14942208 > multiplyTensors_57_arrayA size:= 262144*int defined in Core0
extern int *const arrayB_14942208__arrayB__0;  // explode_generateTensors_arrayB_arrayB_14942208 > multiplyTensors_57_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_14942208__0;  // multiplyTensors_57_arrayC > implode_displayTensor_arrayC_arrayC_14942208 size:= 262144*long defined in Core0
extern char *const multiplyTensors_57__implode___0;  // multiplyTensors_57 > implode_displayTensor_arrayC size:= 1048576*char defined in Core0

// Core Global Definitions

void core3(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__114 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__114 
		cache_inv(explode_generateTensors_arra__114, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__66 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__66 
		cache_inv(explode_generateTensors_arra__66, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__89 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__89 
		cache_inv(explode_generateTensors_arra__89, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__93 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__93 
		cache_inv(explode_generateTensors_arra__93, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__8 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__8 
		cache_inv(explode_generateTensors_arra__8, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__15 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__15 
		cache_inv(explode_generateTensors_arra__15, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__46 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__46 
		cache_inv(explode_generateTensors_arra__46, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__78 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__78 
		cache_inv(explode_generateTensors_arra__78, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__117 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__117 
		cache_inv(explode_generateTensors_arra__117, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__7 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__7 
		cache_inv(explode_generateTensors_arra__7, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__19 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__19 
		cache_inv(explode_generateTensors_arra__19, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__80 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__80 
		cache_inv(explode_generateTensors_arra__80, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__39 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__39 
		cache_inv(explode_generateTensors_arra__39, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__106 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__106 
		cache_inv(explode_generateTensors_arra__106, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__83 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__83 
		cache_inv(explode_generateTensors_arra__83, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__105 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__105 
		cache_inv(explode_generateTensors_arra__105, 1048576*sizeof(char));
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_2621440__arrayA__0,arrayB_2621440__arrayB__0,arrayC__arrayC_2621440__0); // multiplyTensors_10
		cache_inv(arrayA_2621440__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_2621440__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_10__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_10__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_10__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_2883584__arrayA__0,arrayB_2883584__arrayB__0,arrayC__arrayC_2883584__0); // multiplyTensors_11
		cache_inv(arrayA_2883584__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_2883584__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_11__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_11__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_11__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_3145728__arrayA__0,arrayB_3145728__arrayB__0,arrayC__arrayC_3145728__0); // multiplyTensors_12
		cache_inv(arrayA_3145728__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_3145728__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_12__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_12__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_12__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_3670016__arrayA__0,arrayB_3670016__arrayB__0,arrayC__arrayC_3670016__0); // multiplyTensors_14
		cache_inv(arrayA_3670016__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_3670016__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_14__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_14__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_14__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_6553600__arrayA__0,arrayB_6553600__arrayB__0,arrayC__arrayC_6553600__0); // multiplyTensors_25
		cache_inv(arrayA_6553600__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_6553600__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_25__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_25__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_25__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_7864320__arrayA__0,arrayB_7864320__arrayB__0,arrayC__arrayC_7864320__0); // multiplyTensors_30
		cache_inv(arrayA_7864320__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_7864320__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_30__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_30__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_30__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_11796480__arrayA__0,arrayB_11796480__arrayB__0,arrayC__arrayC_11796480__0); // multiplyTensors_45
		cache_inv(arrayA_11796480__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_11796480__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_45__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_45__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_45__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_14942208__arrayA__0,arrayB_14942208__arrayB__0,arrayC__arrayC_14942208__0); // multiplyTensors_57
		cache_inv(arrayA_14942208__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_14942208__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_57__implode___0, 1048576*sizeof(char));
		sendStart(7); // Core3 > Core7: multiplyTensors_57__implode___0 
		sendEnd(); // Core3 > Core7: multiplyTensors_57__implode___0 
	}
}
