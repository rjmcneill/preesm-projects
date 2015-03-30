/** 
 * @file Core0.c
 * @generated by C6678CPrinter
 * @date Mon Mar 30 14:58:31 BST 2015
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
char SharedMem[6816128]; //  size:= 6816128*char
char *const multiplyTensors_0__implode_d__0 = (char*) (SharedMem+4194688);  // multiplyTensors_0 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__17 = (char*) (SharedMem+2359552);  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 131072*char
char *const broadcastTensorB_0__multiply__4 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_2 size:= 1048576*char
char *const multiplyTensors_3__implode_d__0 = (char*) (SharedMem+4063488);  // multiplyTensors_3 > implode_displayTensor_arrayC size:= 131072*char
char *const broadcastTensorB_1__multiply__0 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_14 size:= 1048576*char
char *const multiplyTensors_2__implode_d__0 = (char*) (SharedMem+4456832);  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 131072*char
char *const generateTensors__explode_gen__1 = (char*) (SharedMem+2097408);  // generateTensors > explode_generateTensors_arrayA size:= 2097152*char
char *const broadcastTensorB_0__multiply__1 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_5 size:= 1048576*char
char *const multiplyTensors_1__implode_d__0 = (char*) (SharedMem+6685056);  // multiplyTensors_1 > implode_displayTensor_arrayC size:= 131072*char
char *const implode_displayTensor_arrayC__0 = (char*) (SharedMem+4194688);  // implode_displayTensor_arrayC > displayTensor size:= 2097152*char
char *const multiplyTensors_7__implode_d__0 = (char*) (SharedMem+3539200);  // multiplyTensors_7 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__9 = (char*) (SharedMem+2621696);  // explode_generateTensors_arrayA > multiplyTensors_4 size:= 131072*char
char *const multiplyTensors_15__implode___0 = (char*) (SharedMem+6553984);  // multiplyTensors_15 > implode_displayTensor_arrayC size:= 131072*char
char *const broadcastTensorB_0__multiply__3 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_3 size:= 1048576*char
char *const explode_generateTensors_arra__1 = (char*) (SharedMem+2752768);  // explode_generateTensors_arrayA > multiplyTensors_5 size:= 131072*char
char *const explode_generateTensors_arra__0 = (char*) (SharedMem+3145984);  // explode_generateTensors_arrayA > multiplyTensors_8 size:= 131072*char
char *const broadcastTensorB_0__multiply__6 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_0 size:= 1048576*char
char *const explode_generateTensors_arra__11 = (char*) (SharedMem+128);  // explode_generateTensors_arrayB > broadcastTensorB_0 size:= 1048576*char
char *const broadcastTensorB_1__multiply__3 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_15 size:= 1048576*char
char *const explode_generateTensors_arra__10 = (char*) (SharedMem+4063488);  // explode_generateTensors_arrayA > multiplyTensors_15 size:= 131072*char
char *const broadcastTensorB_1__multiply__4 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_8 size:= 1048576*char
char *const multiplyTensors_8__implode_d__0 = (char*) (SharedMem+5243264);  // multiplyTensors_8 > implode_displayTensor_arrayC size:= 131072*char
char *const multiplyTensors_9__implode_d__0 = (char*) (SharedMem+3670272);  // multiplyTensors_9 > implode_displayTensor_arrayC size:= 131072*char
char *const broadcastTensorB_0__multiply__2 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_1 size:= 1048576*char
char *const explode_generateTensors_arra__15 = (char*) (SharedMem+3932416);  // explode_generateTensors_arrayA > multiplyTensors_14 size:= 131072*char
char *const explode_generateTensors_arra__2 = (char*) (SharedMem+3014912);  // explode_generateTensors_arrayA > multiplyTensors_7 size:= 131072*char
char *const explode_generateTensors_arra__14 = (char*) (SharedMem+1048704);  // explode_generateTensors_arrayB > broadcastTensorB_1 size:= 1048576*char
char *const explode_generateTensors_arra__8 = (char*) (SharedMem+3277056);  // explode_generateTensors_arrayA > multiplyTensors_9 size:= 131072*char
char *const broadcastTensorB_0__multiply__0 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_7 size:= 1048576*char
char *const multiplyTensors_13__implode___0 = (char*) (SharedMem+6422912);  // multiplyTensors_13 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__6 = (char*) (SharedMem+3408128);  // explode_generateTensors_arrayA > multiplyTensors_10 size:= 131072*char
char *const multiplyTensors_4__implode_d__0 = (char*) (SharedMem+4718976);  // multiplyTensors_4 > implode_displayTensor_arrayC size:= 131072*char
char *const multiplyTensors_14__implode___0 = (char*) (SharedMem+6029696);  // multiplyTensors_14 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__12 = (char*) (SharedMem+2228480);  // explode_generateTensors_arrayA > multiplyTensors_1 size:= 131072*char
char *const explode_generateTensors_arra__3 = (char*) (SharedMem+2097408);  // explode_generateTensors_arrayA > multiplyTensors_0 size:= 131072*char
char *const broadcastTensorB_1__multiply__2 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_13 size:= 1048576*char
char *const explode_generateTensors_arra__7 = (char*) (SharedMem+3539200);  // explode_generateTensors_arrayA > multiplyTensors_11 size:= 131072*char
char *const broadcastTensorB_1__multiply__7 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_12 size:= 1048576*char
char *const multiplyTensors_11__implode___0 = (char*) (SharedMem+6291840);  // multiplyTensors_11 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__5 = (char*) (SharedMem+2883840);  // explode_generateTensors_arrayA > multiplyTensors_6 size:= 131072*char
char *const broadcastTensorB_0__multiply__5 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_6 size:= 1048576*char
char *const broadcastTensorB_1__multiply__6 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_9 size:= 1048576*char
char *const multiplyTensors_5__implode_d__0 = (char*) (SharedMem+3932416);  // multiplyTensors_5 > implode_displayTensor_arrayC size:= 131072*char
char *const broadcastTensorB_1__multiply__1 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_10 size:= 1048576*char
char *const multiplyTensors_10__implode___0 = (char*) (SharedMem+5505408);  // multiplyTensors_10 > implode_displayTensor_arrayC size:= 131072*char
char *const explode_generateTensors_arra__16 = (char*) (SharedMem+3801344);  // explode_generateTensors_arrayA > multiplyTensors_13 size:= 131072*char
char *const multiplyTensors_12__implode___0 = (char*) (SharedMem+5767552);  // multiplyTensors_12 > implode_displayTensor_arrayC size:= 131072*char
char *const generateTensors__displayTens__0 = (char*) (SharedMem+0);  // generateTensors > displayTensor size:= 8*char
char *const generateTensors__explode_gen__0 = (char*) (SharedMem+128);  // generateTensors > explode_generateTensors_arrayB size:= 2097152*char
char *const broadcastTensorB_0__multiply__7 = (char*) (SharedMem+128);  // broadcastTensorB_0 > multiplyTensors_4 size:= 1048576*char
char *const explode_generateTensors_arra__13 = (char*) (SharedMem+2490624);  // explode_generateTensors_arrayA > multiplyTensors_3 size:= 131072*char
char *const explode_generateTensors_arra__4 = (char*) (SharedMem+3670272);  // explode_generateTensors_arrayA > multiplyTensors_12 size:= 131072*char
char *const multiplyTensors_6__implode_d__0 = (char*) (SharedMem+4981120);  // multiplyTensors_6 > implode_displayTensor_arrayC size:= 131072*char
char *const broadcastTensorB_1__multiply__5 = (char*) (SharedMem+1048704);  // broadcastTensorB_1 > multiplyTensors_11 size:= 1048576*char
int *const output_262144__arrayB__1 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_262144 > multiplyTensors_9_arrayB size:= 262144*int
int *const arrayA_65536__arrayA__0 = (int*) (SharedMem+2359552);  // explode_generateTensors_arrayA_arrayA_65536 > multiplyTensors_2_arrayA size:= 32768*int
long *const arrayC__arrayC_163840__0 = (long*) (SharedMem+3932416);  // multiplyTensors_5_arrayC > implode_displayTensor_arrayC_arrayC_163840 size:= 32768*long
int *const arrayA_425984__arrayA__0 = (int*) (SharedMem+3801344);  // explode_generateTensors_arrayA_arrayA_425984 > multiplyTensors_13_arrayA size:= 32768*int
double *const startTime__startTime__0 = (double*) (SharedMem+0);  // generateTensors_startTime > displayTensor_startTime size:= 1*double
int *const output_1048576__arrayB__0 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_1048576 > multiplyTensors_4_arrayB size:= 262144*int
long *const arrayC__arrayC_98304__0 = (long*) (SharedMem+4063488);  // multiplyTensors_3_arrayC > implode_displayTensor_arrayC_arrayC_98304 size:= 32768*long
int *const arrayA_229376__arrayA__0 = (int*) (SharedMem+3014912);  // explode_generateTensors_arrayA_arrayA_229376 > multiplyTensors_7_arrayA size:= 32768*int
int *const arrayB_0__input__0 = (int*) (SharedMem+128);  // explode_generateTensors_arrayB_arrayB_0 > broadcastTensorB_0_input size:= 262144*int
int *const arrayA_32768__arrayA__0 = (int*) (SharedMem+2228480);  // explode_generateTensors_arrayA_arrayA_32768 > multiplyTensors_1_arrayA size:= 32768*int
int *const output_1835008__arrayB__1 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_1835008 > multiplyTensors_15_arrayB size:= 262144*int
int *const arrayA_131072__arrayA__0 = (int*) (SharedMem+2621696);  // explode_generateTensors_arrayA_arrayA_131072 > multiplyTensors_4_arrayA size:= 32768*int
long *const arrayC__arrayC_0__0 = (long*) (SharedMem+4194688);  // multiplyTensors_0_arrayC > implode_displayTensor_arrayC_arrayC_0 size:= 32768*long
int *const arrayA_98304__arrayA__0 = (int*) (SharedMem+2490624);  // explode_generateTensors_arrayA_arrayA_98304 > multiplyTensors_3_arrayA size:= 32768*int
int *const output_262144__arrayB__0 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_262144 > multiplyTensors_1_arrayB size:= 262144*int
long *const arrayC__arrayC__0 = (long*) (SharedMem+4194688);  // implode_displayTensor_arrayC_arrayC > displayTensor_arrayC size:= 524288*long
int *const arrayA_262144__arrayA__0 = (int*) (SharedMem+3145984);  // explode_generateTensors_arrayA_arrayA_262144 > multiplyTensors_8_arrayA size:= 32768*int
long *const arrayC__arrayC_229376__0 = (long*) (SharedMem+3539200);  // multiplyTensors_7_arrayC > implode_displayTensor_arrayC_arrayC_229376 size:= 32768*long
long *const arrayC__arrayC_491520__0 = (long*) (SharedMem+6553984);  // multiplyTensors_15_arrayC > implode_displayTensor_arrayC_arrayC_491520 size:= 32768*long
long *const arrayC__arrayC_65536__0 = (long*) (SharedMem+4456832);  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_65536 size:= 32768*long
long *const arrayC__arrayC_425984__0 = (long*) (SharedMem+6422912);  // multiplyTensors_13_arrayC > implode_displayTensor_arrayC_arrayC_425984 size:= 32768*long
long *const arrayC__arrayC_32768__0 = (long*) (SharedMem+6685056);  // multiplyTensors_1_arrayC > implode_displayTensor_arrayC_arrayC_32768 size:= 32768*long
int *const output_1310720__arrayB__0 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_1310720 > multiplyTensors_5_arrayB size:= 262144*int
int *const arrayA_491520__arrayA__0 = (int*) (SharedMem+4063488);  // explode_generateTensors_arrayA_arrayA_491520 > multiplyTensors_15_arrayA size:= 32768*int
int *const arrayA_458752__arrayA__0 = (int*) (SharedMem+3932416);  // explode_generateTensors_arrayA_arrayA_458752 > multiplyTensors_14_arrayA size:= 32768*int
long *const arrayC__arrayC_262144__0 = (long*) (SharedMem+5243264);  // multiplyTensors_8_arrayC > implode_displayTensor_arrayC_arrayC_262144 size:= 32768*long
int *const output_0__arrayB__1 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_0 > multiplyTensors_0_arrayB size:= 262144*int
long *const arrayC__arrayC_196608__0 = (long*) (SharedMem+4981120);  // multiplyTensors_6_arrayC > implode_displayTensor_arrayC_arrayC_196608 size:= 32768*long
int *const output_524288__arrayB__1 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_524288 > multiplyTensors_2_arrayB size:= 262144*int
int *const arrayA_0__arrayA__0 = (int*) (SharedMem+2097408);  // explode_generateTensors_arrayA_arrayA_0 > multiplyTensors_0_arrayA size:= 32768*int
int *const arrayA_294912__arrayA__0 = (int*) (SharedMem+3277056);  // explode_generateTensors_arrayA_arrayA_294912 > multiplyTensors_9_arrayA size:= 32768*int
long *const arrayC__arrayC_327680__0 = (long*) (SharedMem+5505408);  // multiplyTensors_10_arrayC > implode_displayTensor_arrayC_arrayC_327680 size:= 32768*long
int *const output_0__arrayB__0 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_0 > multiplyTensors_8_arrayB size:= 262144*int
long *const arrayC__arrayC_294912__0 = (long*) (SharedMem+3670272);  // multiplyTensors_9_arrayC > implode_displayTensor_arrayC_arrayC_294912 size:= 32768*long
int *const arrayA__arrayA__0 = (int*) (SharedMem+2097408);  // generateTensors_arrayA > explode_generateTensors_arrayA_arrayA size:= 524288*int
int *const output_1835008__arrayB__0 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_1835008 > multiplyTensors_7_arrayB size:= 262144*int
long *const arrayC__arrayC_393216__0 = (long*) (SharedMem+5767552);  // multiplyTensors_12_arrayC > implode_displayTensor_arrayC_arrayC_393216 size:= 32768*long
int *const arrayA_163840__arrayA__0 = (int*) (SharedMem+2752768);  // explode_generateTensors_arrayA_arrayA_163840 > multiplyTensors_5_arrayA size:= 32768*int
int *const arrayA_327680__arrayA__0 = (int*) (SharedMem+3408128);  // explode_generateTensors_arrayA_arrayA_327680 > multiplyTensors_10_arrayA size:= 32768*int
int *const output_1310720__arrayB__1 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_1310720 > multiplyTensors_13_arrayB size:= 262144*int
int *const arrayA_360448__arrayA__0 = (int*) (SharedMem+3539200);  // explode_generateTensors_arrayA_arrayA_360448 > multiplyTensors_11_arrayA size:= 32768*int
long *const arrayC__arrayC_360448__0 = (long*) (SharedMem+6291840);  // multiplyTensors_11_arrayC > implode_displayTensor_arrayC_arrayC_360448 size:= 32768*long
long *const arrayC__arrayC_458752__0 = (long*) (SharedMem+6029696);  // multiplyTensors_14_arrayC > implode_displayTensor_arrayC_arrayC_458752 size:= 32768*long
int *const arrayB__input__0 = (int*) (SharedMem+128);  // generateTensors_arrayB > explode_generateTensors_arrayB_input size:= 524288*int
int *const output_786432__arrayB__0 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_786432 > multiplyTensors_3_arrayB size:= 262144*int
int *const arrayA_196608__arrayA__0 = (int*) (SharedMem+2883840);  // explode_generateTensors_arrayA_arrayA_196608 > multiplyTensors_6_arrayA size:= 32768*int
long *const arrayC__arrayC_131072__0 = (long*) (SharedMem+4718976);  // multiplyTensors_4_arrayC > implode_displayTensor_arrayC_arrayC_131072 size:= 32768*long
int *const arrayB_262144__input__0 = (int*) (SharedMem+1048704);  // explode_generateTensors_arrayB_arrayB_262144 > broadcastTensorB_1_input size:= 262144*int
int *const output_524288__arrayB__0 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_524288 > multiplyTensors_10_arrayB size:= 262144*int
int *const arrayA_393216__arrayA__0 = (int*) (SharedMem+3670272);  // explode_generateTensors_arrayA_arrayA_393216 > multiplyTensors_12_arrayA size:= 32768*int
int *const output_1572864__arrayB__1 = (int*) (SharedMem+128);  // broadcastTensorB_0_output_1572864 > multiplyTensors_6_arrayB size:= 262144*int
int *const output_1048576__arrayB__1 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_1048576 > multiplyTensors_12_arrayB size:= 262144*int
int *const output_1572864__arrayB__0 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_1572864 > multiplyTensors_14_arrayB size:= 262144*int
int *const output_786432__arrayB__1 = (int*) (SharedMem+1048704);  // broadcastTensorB_1_output_786432 > multiplyTensors_11_arrayB size:= 262144*int

void core0(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		generate(512/*rowsA*/,512/*columnsA*/,2/*depthA*/,512/*rowsB*/,512/*columnsB*/,2/*depthB*/,arrayA__arrayA__0,arrayB__input__0,startTime__startTime__0); // generateTensors
		cache_wbInv(generateTensors__explode_gen__1, 2097152*sizeof(char));
		sendStart(7); // Core0 > Core7: generateTensors__explode_gen__1 
		sendEnd(); // Core0 > Core7: generateTensors__explode_gen__1 
		receiveStart(); // Core7 > Core0: explode_generateTensors_arra__10 
		receiveEnd(7); // Core7 > Core0: explode_generateTensors_arra__10 
		cache_inv(explode_generateTensors_arra__10, 131072*sizeof(char));
		receiveStart(); // Core7 > Core0: explode_generateTensors_arra__13 
		receiveEnd(7); // Core7 > Core0: explode_generateTensors_arra__13 
		cache_inv(explode_generateTensors_arra__13, 131072*sizeof(char));
		// Fork explode_generateTensors_arrayB
		{
			cache_wb(arrayB__input__0, 524288*sizeof(int));
		}
		cache_wb(((char*)arrayB__input__0) + 0, 2097152);
		cache_inv(arrayB__input__0, 524288*sizeof(int));
		cache_wbInv(explode_generateTensors_arra__11, 1048576*sizeof(char));
		sendStart(7); // Core0 > Core7: explode_generateTensors_arra__11 
		sendEnd(); // Core0 > Core7: explode_generateTensors_arra__11 
		receiveStart(); // Core7 > Core0: broadcastTensorB_0__multiply__3 
		receiveEnd(7); // Core7 > Core0: broadcastTensorB_0__multiply__3 
		cache_inv(broadcastTensorB_0__multiply__3, 1048576*sizeof(char));
		// Broadcast broadcastTensorB_1
		{
			cache_wb(arrayB_262144__input__0, 262144*sizeof(int));
		}
		cache_wb(((char*)arrayB_262144__input__0) + 0, 1048576);
		cache_inv(arrayB_262144__input__0, 262144*sizeof(int));
		cache_wbInv(broadcastTensorB_1__multiply__0, 1048576*sizeof(char));
		sendStart(4); // Core0 > Core4: broadcastTensorB_1__multiply__0 
		sendEnd(); // Core0 > Core4: broadcastTensorB_1__multiply__0 
		cache_wbInv(broadcastTensorB_1__multiply__2, 1048576*sizeof(char));
		sendStart(3); // Core0 > Core3: broadcastTensorB_1__multiply__2 
		sendEnd(); // Core0 > Core3: broadcastTensorB_1__multiply__2 
		cache_wbInv(broadcastTensorB_1__multiply__7, 1048576*sizeof(char));
		sendStart(6); // Core0 > Core6: broadcastTensorB_1__multiply__7 
		sendEnd(); // Core0 > Core6: broadcastTensorB_1__multiply__7 
		cache_wbInv(broadcastTensorB_1__multiply__5, 1048576*sizeof(char));
		sendStart(5); // Core0 > Core5: broadcastTensorB_1__multiply__5 
		sendEnd(); // Core0 > Core5: broadcastTensorB_1__multiply__5 
		cache_wbInv(broadcastTensorB_1__multiply__1, 1048576*sizeof(char));
		sendStart(1); // Core0 > Core1: broadcastTensorB_1__multiply__1 
		sendEnd(); // Core0 > Core1: broadcastTensorB_1__multiply__1 
		cache_wbInv(broadcastTensorB_1__multiply__6, 1048576*sizeof(char));
		sendStart(6); // Core0 > Core6: broadcastTensorB_1__multiply__6 
		sendEnd(); // Core0 > Core6: broadcastTensorB_1__multiply__6 
		cache_wbInv(broadcastTensorB_1__multiply__4, 1048576*sizeof(char));
		sendStart(1); // Core0 > Core1: broadcastTensorB_1__multiply__4 
		sendEnd(); // Core0 > Core1: broadcastTensorB_1__multiply__4 
		multiply(512/*rowsA*/,512/*columnsA*/,2/*depthA*/,512/*rowsB*/,512/*columnsB*/,2/*depthB*/,arrayA_491520__arrayA__0,output_1835008__arrayB__1,arrayC__arrayC_491520__0); // multiplyTensors_15
		cache_inv(arrayA_491520__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1835008__arrayB__1, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_15__implode___0, 131072*sizeof(char));
		sendStart(2); // Core0 > Core2: multiplyTensors_15__implode___0 
		sendEnd(); // Core0 > Core2: multiplyTensors_15__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,2/*depthA*/,512/*rowsB*/,512/*columnsB*/,2/*depthB*/,arrayA_98304__arrayA__0,output_786432__arrayB__0,arrayC__arrayC_98304__0); // multiplyTensors_3
		cache_inv(arrayA_98304__arrayA__0, 32768*sizeof(int));
		cache_inv(output_786432__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_3__implode_d__0, 131072*sizeof(char));
		sendStart(2); // Core0 > Core2: multiplyTensors_3__implode_d__0 
		sendEnd(); // Core0 > Core2: multiplyTensors_3__implode_d__0 
		receiveStart(); // Core2 > Core0: implode_displayTensor_arrayC__0 
		receiveEnd(2); // Core2 > Core0: implode_displayTensor_arrayC__0 
		cache_inv(implode_displayTensor_arrayC__0, 2097152*sizeof(char));
		display(512/*rowsA*/,512/*columnsB*/,2/*depthA*/,arrayC__arrayC__0,startTime__startTime__0); // displayTensor
		cache_inv(arrayC__arrayC__0, 524288*sizeof(long));
		cache_inv(startTime__startTime__0, 1*sizeof(double));
	}
}
