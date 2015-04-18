/** 
 * @file Core0.c
 * @generated by C6678CPrinter
 * @date Sat Apr 18 02:06:19 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration

// Core Global Definitions
// Won't work if the shared memory is >= 512 MB 
#pragma DATA_SECTION(SharedMem, ".mySharedMem")
char SharedMem[29360512]; //  size:= 29360512*char
char *const generateTensors__explode_gen__1 = (char*) (SharedMem+8388864);  // generateTensors > explode_generateTensors_arrayB size:= 8388608*char
char *const explode_generateTensors_arra__9 = (char*) (SharedMem+13631744);  // explode_generateTensors_arrayB > multiplyTensors_5 size:= 1048576*char
char *const explode_generateTensors_arra__0 = (char*) (SharedMem+7340160);  // explode_generateTensors_arrayA > multiplyTensors_7 size:= 1048576*char
char *const explode_generateTensors_arra__14 = (char*) (SharedMem+9437440);  // explode_generateTensors_arrayB > multiplyTensors_1 size:= 1048576*char
char *const explode_generateTensors_arra__8 = (char*) (SharedMem+128);  // explode_generateTensors_arrayA > multiplyTensors_0 size:= 1048576*char
char *const explode_generateTensors_arra__6 = (char*) (SharedMem+10486016);  // explode_generateTensors_arrayB > multiplyTensors_2 size:= 1048576*char
char *const multiplyTensors_4__implode_d__0 = (char*) (SharedMem+20971904);  // multiplyTensors_4 > implode_displayTensor_arrayC size:= 1048576*char
char *const generateTensors__displayTens__0 = (char*) (SharedMem+0);  // generateTensors > displayTensor size:= 8*char
char *const explode_generateTensors_arra__10 = (char*) (SharedMem+12583168);  // explode_generateTensors_arrayB > multiplyTensors_4 size:= 1048576*char
char *const explode_generateTensors_arra__4 = (char*) (SharedMem+1048704);  // explode_generateTensors_arrayA > multiplyTensors_1 size:= 1048576*char
char *const explode_generateTensors_arra__7 = (char*) (SharedMem+6291584);  // explode_generateTensors_arrayA > multiplyTensors_6 size:= 1048576*char
char *const explode_generateTensors_arra__11 = (char*) (SharedMem+3145856);  // explode_generateTensors_arrayA > multiplyTensors_3 size:= 1048576*char
char *const implode_displayTensor_arrayC__0 = (char*) (SharedMem+16777600);  // implode_displayTensor_arrayC > displayTensor size:= 8388608*char
char *const explode_generateTensors_arra__3 = (char*) (SharedMem+2097280);  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 1048576*char
char *const explode_generateTensors_arra__1 = (char*) (SharedMem+8388864);  // explode_generateTensors_arrayB > multiplyTensors_0 size:= 1048576*char
char *const explode_generateTensors_arra__5 = (char*) (SharedMem+11534592);  // explode_generateTensors_arrayB > multiplyTensors_3 size:= 1048576*char
char *const multiplyTensors_2__implode_d__0 = (char*) (SharedMem+18874752);  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 1048576*char
char *const multiplyTensors_1__implode_d__0 = (char*) (SharedMem+25166208);  // multiplyTensors_1 > implode_displayTensor_arrayC size:= 1048576*char
char *const multiplyTensors_3__implode_d__0 = (char*) (SharedMem+26214784);  // multiplyTensors_3 > implode_displayTensor_arrayC size:= 1048576*char
char *const generateTensors__explode_gen__0 = (char*) (SharedMem+128);  // generateTensors > explode_generateTensors_arrayA size:= 8388608*char
char *const multiplyTensors_5__implode_d__0 = (char*) (SharedMem+27263360);  // multiplyTensors_5 > implode_displayTensor_arrayC size:= 1048576*char
char *const explode_generateTensors_arra__12 = (char*) (SharedMem+5243008);  // explode_generateTensors_arrayA > multiplyTensors_5 size:= 1048576*char
char *const explode_generateTensors_arra__2 = (char*) (SharedMem+14680320);  // explode_generateTensors_arrayB > multiplyTensors_6 size:= 1048576*char
char *const explode_generateTensors_arra__13 = (char*) (SharedMem+4194432);  // explode_generateTensors_arrayA > multiplyTensors_4 size:= 1048576*char
char *const explode_generateTensors_arra__15 = (char*) (SharedMem+15728896);  // explode_generateTensors_arrayB > multiplyTensors_7 size:= 1048576*char
char *const multiplyTensors_7__implode_d__0 = (char*) (SharedMem+28311936);  // multiplyTensors_7 > implode_displayTensor_arrayC size:= 1048576*char
char *const multiplyTensors_6__implode_d__0 = (char*) (SharedMem+23069056);  // multiplyTensors_6 > implode_displayTensor_arrayC size:= 1048576*char
char *const multiplyTensors_0__implode_d__0 = (char*) (SharedMem+16777600);  // multiplyTensors_0 > implode_displayTensor_arrayC size:= 1048576*char
int *const arrayB__arrayB__0 = (int*) (SharedMem+8388864);  // generateTensors_arrayB > explode_generateTensors_arrayB_arrayB size:= 2097152*int
int *const arrayA_1310720__arrayA__0 = (int*) (SharedMem+5243008);  // explode_generateTensors_arrayA_arrayA_1310720 > multiplyTensors_5_arrayA size:= 262144*int
double *const startTime__startTime__0 = (double*) (SharedMem+0);  // generateTensors_startTime > displayTensor_startTime size:= 1*double
long *const arrayC__arrayC_262144__0 = (long*) (SharedMem+25166208);  // multiplyTensors_1_arrayC > implode_displayTensor_arrayC_arrayC_262144 size:= 262144*long
int *const arrayA_0__arrayA__0 = (int*) (SharedMem+128);  // explode_generateTensors_arrayA_arrayA_0 > multiplyTensors_0_arrayA size:= 262144*int
int *const arrayB_1835008__arrayB__0 = (int*) (SharedMem+15728896);  // explode_generateTensors_arrayB_arrayB_1835008 > multiplyTensors_7_arrayB size:= 262144*int
int *const arrayB_1310720__arrayB__0 = (int*) (SharedMem+13631744);  // explode_generateTensors_arrayB_arrayB_1310720 > multiplyTensors_5_arrayB size:= 262144*int
int *const arrayB_786432__arrayB__0 = (int*) (SharedMem+11534592);  // explode_generateTensors_arrayB_arrayB_786432 > multiplyTensors_3_arrayB size:= 262144*int
long *const arrayC__arrayC_1048576__0 = (long*) (SharedMem+20971904);  // multiplyTensors_4_arrayC > implode_displayTensor_arrayC_arrayC_1048576 size:= 262144*long
int *const arrayA_786432__arrayA__0 = (int*) (SharedMem+3145856);  // explode_generateTensors_arrayA_arrayA_786432 > multiplyTensors_3_arrayA size:= 262144*int
long *const arrayC__arrayC_1835008__0 = (long*) (SharedMem+28311936);  // multiplyTensors_7_arrayC > implode_displayTensor_arrayC_arrayC_1835008 size:= 262144*long
int *const arrayB_1572864__arrayB__0 = (int*) (SharedMem+14680320);  // explode_generateTensors_arrayB_arrayB_1572864 > multiplyTensors_6_arrayB size:= 262144*int
int *const arrayA__arrayA__0 = (int*) (SharedMem+128);  // generateTensors_arrayA > explode_generateTensors_arrayA_arrayA size:= 2097152*int
int *const arrayB_524288__arrayB__0 = (int*) (SharedMem+10486016);  // explode_generateTensors_arrayB_arrayB_524288 > multiplyTensors_2_arrayB size:= 262144*int
int *const arrayA_1835008__arrayA__0 = (int*) (SharedMem+7340160);  // explode_generateTensors_arrayA_arrayA_1835008 > multiplyTensors_7_arrayA size:= 262144*int
int *const arrayA_1572864__arrayA__0 = (int*) (SharedMem+6291584);  // explode_generateTensors_arrayA_arrayA_1572864 > multiplyTensors_6_arrayA size:= 262144*int
long *const arrayC__arrayC_0__0 = (long*) (SharedMem+16777600);  // multiplyTensors_0_arrayC > implode_displayTensor_arrayC_arrayC_0 size:= 262144*long
int *const arrayA_262144__arrayA__0 = (int*) (SharedMem+1048704);  // explode_generateTensors_arrayA_arrayA_262144 > multiplyTensors_1_arrayA size:= 262144*int
long *const arrayC__arrayC_786432__0 = (long*) (SharedMem+26214784);  // multiplyTensors_3_arrayC > implode_displayTensor_arrayC_arrayC_786432 size:= 262144*long
long *const arrayC__arrayC__0 = (long*) (SharedMem+16777600);  // implode_displayTensor_arrayC_arrayC > displayTensor_arrayC size:= 2097152*long
int *const arrayB_262144__arrayB__0 = (int*) (SharedMem+9437440);  // explode_generateTensors_arrayB_arrayB_262144 > multiplyTensors_1_arrayB size:= 262144*int
int *const arrayA_524288__arrayA__0 = (int*) (SharedMem+2097280);  // explode_generateTensors_arrayA_arrayA_524288 > multiplyTensors_2_arrayA size:= 262144*int
int *const arrayB_1048576__arrayB__0 = (int*) (SharedMem+12583168);  // explode_generateTensors_arrayB_arrayB_1048576 > multiplyTensors_4_arrayB size:= 262144*int
long *const arrayC__arrayC_1572864__0 = (long*) (SharedMem+23069056);  // multiplyTensors_6_arrayC > implode_displayTensor_arrayC_arrayC_1572864 size:= 262144*long
long *const arrayC__arrayC_1310720__0 = (long*) (SharedMem+27263360);  // multiplyTensors_5_arrayC > implode_displayTensor_arrayC_arrayC_1310720 size:= 262144*long
long *const arrayC__arrayC_524288__0 = (long*) (SharedMem+18874752);  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_524288 size:= 262144*long
int *const arrayB_0__arrayB__0 = (int*) (SharedMem+8388864);  // explode_generateTensors_arrayB_arrayB_0 > multiplyTensors_0_arrayB size:= 262144*int
int *const arrayA_1048576__arrayA__0 = (int*) (SharedMem+4194432);  // explode_generateTensors_arrayA_arrayA_1048576 > multiplyTensors_4_arrayA size:= 262144*int

void core0(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		generate(512/*rowsA*/,512/*columnsA*/,8/*depthA*/,512/*rowsB*/,512/*columnsB*/,8/*depthB*/,arrayA__arrayA__0,arrayB__arrayB__0,startTime__startTime__0); // generateTensors
		cache_wbInv(generateTensors__explode_gen__0, 8388608*sizeof(char));
		sendStart(7); // Core0 > Core7: generateTensors__explode_gen__0 
		sendEnd(); // Core0 > Core7: generateTensors__explode_gen__0 
		receiveStart(); // Core7 > Core0: explode_generateTensors_arra__7 
		receiveEnd(7); // Core7 > Core0: explode_generateTensors_arra__7 
		cache_inv(explode_generateTensors_arra__7, 1048576*sizeof(char));
		// Fork explode_generateTensors_arrayB
		{
			cache_wb(arrayB__arrayB__0, 2097152*sizeof(int));
		}
		cache_wb(((char*)arrayB__arrayB__0) + 0, 8388608);
		cache_inv(arrayB__arrayB__0, 2097152*sizeof(int));
		cache_wbInv(explode_generateTensors_arra__15, 1048576*sizeof(char));
		sendStart(6); // Core0 > Core6: explode_generateTensors_arra__15 
		sendEnd(); // Core0 > Core6: explode_generateTensors_arra__15 
		cache_wbInv(explode_generateTensors_arra__9, 1048576*sizeof(char));
		sendStart(4); // Core0 > Core4: explode_generateTensors_arra__9 
		sendEnd(); // Core0 > Core4: explode_generateTensors_arra__9 
		cache_wbInv(explode_generateTensors_arra__10, 1048576*sizeof(char));
		sendStart(5); // Core0 > Core5: explode_generateTensors_arra__10 
		sendEnd(); // Core0 > Core5: explode_generateTensors_arra__10 
		cache_wbInv(explode_generateTensors_arra__5, 1048576*sizeof(char));
		sendStart(3); // Core0 > Core3: explode_generateTensors_arra__5 
		sendEnd(); // Core0 > Core3: explode_generateTensors_arra__5 
		cache_wbInv(explode_generateTensors_arra__6, 1048576*sizeof(char));
		sendStart(1); // Core0 > Core1: explode_generateTensors_arra__6 
		sendEnd(); // Core0 > Core1: explode_generateTensors_arra__6 
		cache_wbInv(explode_generateTensors_arra__14, 1048576*sizeof(char));
		sendStart(7); // Core0 > Core7: explode_generateTensors_arra__14 
		sendEnd(); // Core0 > Core7: explode_generateTensors_arra__14 
		cache_wbInv(explode_generateTensors_arra__1, 1048576*sizeof(char));
		sendStart(2); // Core0 > Core2: explode_generateTensors_arra__1 
		sendEnd(); // Core0 > Core2: explode_generateTensors_arra__1 
		multiply(512/*rowsA*/,512/*columnsA*/,512/*rowsB*/,512/*columnsB*/,arrayA_1572864__arrayA__0,arrayB_1572864__arrayB__0,arrayC__arrayC_1572864__0); // multiplyTensors_6
		cache_inv(arrayA_1572864__arrayA__0, 262144*sizeof(int));
		cache_inv(arrayB_1572864__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_6__implode_d__0, 1048576*sizeof(char));
		sendStart(7); // Core0 > Core7: multiplyTensors_6__implode_d__0 
		sendEnd(); // Core0 > Core7: multiplyTensors_6__implode_d__0 
		receiveStart(); // Core7 > Core0: implode_displayTensor_arrayC__0 
		receiveEnd(7); // Core7 > Core0: implode_displayTensor_arrayC__0 
		cache_inv(implode_displayTensor_arrayC__0, 8388608*sizeof(char));
		display(512/*rowsA*/,512/*columnsB*/,8/*depthA*/,arrayC__arrayC__0,startTime__startTime__0); // displayTensor
		cache_inv(arrayC__arrayC__0, 2097152*sizeof(long));
		cache_inv(startTime__startTime__0, 1*sizeof(double));
	}
}
