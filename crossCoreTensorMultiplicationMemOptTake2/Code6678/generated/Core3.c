/** 
 * @file Core3.c
 * @generated by C6678CPrinter
 * @date Thu Apr 02 22:24:30 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__51;  // explode_generateTensors_arrayA > multiplyTensors_117 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__41;  // explode_generateTensors_arrayA > multiplyTensors_116 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__143;  // explode_generateTensors_arrayA > multiplyTensors_115 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__125;  // explode_generateTensors_arrayA > multiplyTensors_112 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__54;  // explode_generateTensors_arrayA > multiplyTensors_98 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__66;  // explode_generateTensors_arrayA > multiplyTensors_86 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__65;  // explode_generateTensors_arrayA > multiplyTensors_77 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__55;  // explode_generateTensors_arrayA > multiplyTensors_73 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__87;  // explode_generateTensors_arrayA > multiplyTensors_48 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__47;  // explode_generateTensors_arrayA > multiplyTensors_43 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__8;  // explode_generateTensors_arrayA > multiplyTensors_41 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__3;  // explode_generateTensors_arrayA > multiplyTensors_40 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__20;  // explode_generateTensors_arrayA > multiplyTensors_34 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__74;  // explode_generateTensors_arrayA > multiplyTensors_24 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__75;  // explode_generateTensors_arrayA > multiplyTensors_7 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__19;  // explode_generateTensors_arrayA > multiplyTensors_0 size:= 2048*char defined in Core0
extern char *const explode_generateTensors_arra__107;  // explode_generateTensors_arrayB > broadcastTensorB_11 size:= 16384*char defined in Core0
extern char *const explode_generateTensors_arra__113;  // explode_generateTensors_arrayB > broadcastTensorB_4 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_0__multiply__0;  // broadcastTensorB_0 > multiplyTensors_7 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_0__multiply__3;  // broadcastTensorB_0 > multiplyTensors_0 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_10__multipl__7;  // broadcastTensorB_10 > multiplyTensors_86 size:= 16384*char defined in Core0
extern int *const output_0__arrayB__14;  // broadcastTensorB_11_output_0 > multiplyTensors_88_arrayB size:= 4096*int defined in Core0
extern int *const output_4096__arrayB__7;  // broadcastTensorB_11_output_4096 > multiplyTensors_89_arrayB size:= 4096*int defined in Core0
extern int *const output_8192__arrayB__5;  // broadcastTensorB_11_output_8192 > multiplyTensors_90_arrayB size:= 4096*int defined in Core0
extern int *const output_12288__arrayB__4;  // broadcastTensorB_11_output_12288 > multiplyTensors_91_arrayB size:= 4096*int defined in Core0
extern int *const output_16384__arrayB__1;  // broadcastTensorB_11_output_16384 > multiplyTensors_92_arrayB size:= 4096*int defined in Core0
extern int *const output_20480__arrayB__0;  // broadcastTensorB_11_output_20480 > multiplyTensors_93_arrayB size:= 4096*int defined in Core0
extern int *const output_24576__arrayB__2;  // broadcastTensorB_11_output_24576 > multiplyTensors_94_arrayB size:= 4096*int defined in Core0
extern int *const output_28672__arrayB__5;  // broadcastTensorB_11_output_28672 > multiplyTensors_95_arrayB size:= 4096*int defined in Core0
extern int *const arrayB_45056__input__0;  // explode_generateTensors_arrayB_arrayB_45056 > broadcastTensorB_11_input size:= 4096*int defined in Core0
extern char *const broadcastTensorB_11__multipl__4;  // broadcastTensorB_11 > multiplyTensors_95 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__2;  // broadcastTensorB_11 > multiplyTensors_94 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__0;  // broadcastTensorB_11 > multiplyTensors_93 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__1;  // broadcastTensorB_11 > multiplyTensors_92 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__5;  // broadcastTensorB_11 > multiplyTensors_91 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__3;  // broadcastTensorB_11 > multiplyTensors_90 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__6;  // broadcastTensorB_11 > multiplyTensors_89 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_11__multipl__7;  // broadcastTensorB_11 > multiplyTensors_88 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_12__multipl__2;  // broadcastTensorB_12 > multiplyTensors_98 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_14__multipl__6;  // broadcastTensorB_14 > multiplyTensors_117 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_14__multipl__7;  // broadcastTensorB_14 > multiplyTensors_116 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_14__multipl__5;  // broadcastTensorB_14 > multiplyTensors_115 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_14__multipl__0;  // broadcastTensorB_14 > multiplyTensors_112 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_3__multiply__6;  // broadcastTensorB_3 > multiplyTensors_24 size:= 16384*char defined in Core0
extern int *const output_0__arrayB__1;  // broadcastTensorB_4_output_0 > multiplyTensors_32_arrayB size:= 4096*int defined in Core0
extern int *const output_4096__arrayB__2;  // broadcastTensorB_4_output_4096 > multiplyTensors_33_arrayB size:= 4096*int defined in Core0
extern int *const output_8192__arrayB__14;  // broadcastTensorB_4_output_8192 > multiplyTensors_34_arrayB size:= 4096*int defined in Core0
extern int *const output_12288__arrayB__3;  // broadcastTensorB_4_output_12288 > multiplyTensors_35_arrayB size:= 4096*int defined in Core0
extern int *const output_16384__arrayB__13;  // broadcastTensorB_4_output_16384 > multiplyTensors_36_arrayB size:= 4096*int defined in Core0
extern int *const output_20480__arrayB__14;  // broadcastTensorB_4_output_20480 > multiplyTensors_37_arrayB size:= 4096*int defined in Core0
extern int *const output_24576__arrayB__8;  // broadcastTensorB_4_output_24576 > multiplyTensors_38_arrayB size:= 4096*int defined in Core0
extern int *const output_28672__arrayB__0;  // broadcastTensorB_4_output_28672 > multiplyTensors_39_arrayB size:= 4096*int defined in Core0
extern int *const arrayB_16384__input__0;  // explode_generateTensors_arrayB_arrayB_16384 > broadcastTensorB_4_input size:= 4096*int defined in Core0
extern char *const broadcastTensorB_4__multiply__0;  // broadcastTensorB_4 > multiplyTensors_39 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__4;  // broadcastTensorB_4 > multiplyTensors_38 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__5;  // broadcastTensorB_4 > multiplyTensors_37 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__6;  // broadcastTensorB_4 > multiplyTensors_36 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__3;  // broadcastTensorB_4 > multiplyTensors_35 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__2;  // broadcastTensorB_4 > multiplyTensors_33 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_4__multiply__1;  // broadcastTensorB_4 > multiplyTensors_32 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_5__multiply__6;  // broadcastTensorB_5 > multiplyTensors_43 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_5__multiply__3;  // broadcastTensorB_5 > multiplyTensors_41 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_5__multiply__7;  // broadcastTensorB_5 > multiplyTensors_40 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_6__multiply__0;  // broadcastTensorB_6 > multiplyTensors_48 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_9__multiply__5;  // broadcastTensorB_9 > multiplyTensors_77 size:= 16384*char defined in Core0
extern char *const broadcastTensorB_9__multiply__3;  // broadcastTensorB_9 > multiplyTensors_73 size:= 16384*char defined in Core0
extern int *const arrayA_0__arrayA__0;  // explode_generateTensors_arrayA_arrayA_0 > multiplyTensors_0_arrayA size:= 512*int defined in Core0
extern int *const output_0__arrayB__5;  // broadcastTensorB_0_output_0 > multiplyTensors_0_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_0__0;  // multiplyTensors_0_arrayC > implode_displayTensor_arrayC_arrayC_0 size:= 512*long defined in Core0
extern char *const multiplyTensors_0__implode_d__0;  // multiplyTensors_0 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_57344__arrayA__0;  // explode_generateTensors_arrayA_arrayA_57344 > multiplyTensors_112_arrayA size:= 512*int defined in Core0
extern int *const output_0__arrayB__0;  // broadcastTensorB_14_output_0 > multiplyTensors_112_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_57344__0;  // multiplyTensors_112_arrayC > implode_displayTensor_arrayC_arrayC_57344 size:= 512*long defined in Core0
extern char *const multiplyTensors_112__implode__0;  // multiplyTensors_112 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_58880__arrayA__0;  // explode_generateTensors_arrayA_arrayA_58880 > multiplyTensors_115_arrayA size:= 512*int defined in Core0
extern int *const output_12288__arrayB__7;  // broadcastTensorB_14_output_12288 > multiplyTensors_115_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_58880__0;  // multiplyTensors_115_arrayC > implode_displayTensor_arrayC_arrayC_58880 size:= 512*long defined in Core0
extern char *const multiplyTensors_115__implode__0;  // multiplyTensors_115 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_59392__arrayA__0;  // explode_generateTensors_arrayA_arrayA_59392 > multiplyTensors_116_arrayA size:= 512*int defined in Core0
extern int *const output_16384__arrayB__12;  // broadcastTensorB_14_output_16384 > multiplyTensors_116_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_59392__0;  // multiplyTensors_116_arrayC > implode_displayTensor_arrayC_arrayC_59392 size:= 512*long defined in Core0
extern char *const multiplyTensors_116__implode__0;  // multiplyTensors_116 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_59904__arrayA__0;  // explode_generateTensors_arrayA_arrayA_59904 > multiplyTensors_117_arrayA size:= 512*int defined in Core0
extern int *const output_20480__arrayB__12;  // broadcastTensorB_14_output_20480 > multiplyTensors_117_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_59904__0;  // multiplyTensors_117_arrayC > implode_displayTensor_arrayC_arrayC_59904 size:= 512*long defined in Core0
extern char *const multiplyTensors_117__implode__0;  // multiplyTensors_117 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_12288__arrayA__0;  // explode_generateTensors_arrayA_arrayA_12288 > multiplyTensors_24_arrayA size:= 512*int defined in Core0
extern int *const output_0__arrayB__12;  // broadcastTensorB_3_output_0 > multiplyTensors_24_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_12288__0;  // multiplyTensors_24_arrayC > implode_displayTensor_arrayC_arrayC_12288 size:= 512*long defined in Core0
extern char *const multiplyTensors_24__implode___0;  // multiplyTensors_24 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_17408__arrayA__0;  // explode_generateTensors_arrayA_arrayA_17408 > multiplyTensors_34_arrayA size:= 512*int defined in Core0
extern long *const arrayC__arrayC_17408__0;  // multiplyTensors_34_arrayC > implode_displayTensor_arrayC_arrayC_17408 size:= 512*long defined in Core0
extern char *const multiplyTensors_34__implode___0;  // multiplyTensors_34 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_20480__arrayA__0;  // explode_generateTensors_arrayA_arrayA_20480 > multiplyTensors_40_arrayA size:= 512*int defined in Core0
extern int *const output_0__arrayB__15;  // broadcastTensorB_5_output_0 > multiplyTensors_40_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_20480__0;  // multiplyTensors_40_arrayC > implode_displayTensor_arrayC_arrayC_20480 size:= 512*long defined in Core0
extern char *const multiplyTensors_40__implode___0;  // multiplyTensors_40 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_20992__arrayA__0;  // explode_generateTensors_arrayA_arrayA_20992 > multiplyTensors_41_arrayA size:= 512*int defined in Core0
extern int *const output_4096__arrayB__9;  // broadcastTensorB_5_output_4096 > multiplyTensors_41_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_20992__0;  // multiplyTensors_41_arrayC > implode_displayTensor_arrayC_arrayC_20992 size:= 512*long defined in Core0
extern char *const multiplyTensors_41__implode___0;  // multiplyTensors_41 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_22016__arrayA__0;  // explode_generateTensors_arrayA_arrayA_22016 > multiplyTensors_43_arrayA size:= 512*int defined in Core0
extern int *const output_12288__arrayB__15;  // broadcastTensorB_5_output_12288 > multiplyTensors_43_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_22016__0;  // multiplyTensors_43_arrayC > implode_displayTensor_arrayC_arrayC_22016 size:= 512*long defined in Core0
extern char *const multiplyTensors_43__implode___0;  // multiplyTensors_43 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_24576__arrayA__0;  // explode_generateTensors_arrayA_arrayA_24576 > multiplyTensors_48_arrayA size:= 512*int defined in Core0
extern int *const output_0__arrayB__2;  // broadcastTensorB_6_output_0 > multiplyTensors_48_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_24576__0;  // multiplyTensors_48_arrayC > implode_displayTensor_arrayC_arrayC_24576 size:= 512*long defined in Core0
extern char *const multiplyTensors_48__implode___0;  // multiplyTensors_48 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_3584__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3584 > multiplyTensors_7_arrayA size:= 512*int defined in Core0
extern int *const output_28672__arrayB__2;  // broadcastTensorB_0_output_28672 > multiplyTensors_7_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_3584__0;  // multiplyTensors_7_arrayC > implode_displayTensor_arrayC_arrayC_3584 size:= 512*long defined in Core0
extern char *const multiplyTensors_7__implode_d__0;  // multiplyTensors_7 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_37376__arrayA__0;  // explode_generateTensors_arrayA_arrayA_37376 > multiplyTensors_73_arrayA size:= 512*int defined in Core0
extern int *const output_4096__arrayB__8;  // broadcastTensorB_9_output_4096 > multiplyTensors_73_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_37376__0;  // multiplyTensors_73_arrayC > implode_displayTensor_arrayC_arrayC_37376 size:= 512*long defined in Core0
extern char *const multiplyTensors_73__implode___0;  // multiplyTensors_73 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_39424__arrayA__0;  // explode_generateTensors_arrayA_arrayA_39424 > multiplyTensors_77_arrayA size:= 512*int defined in Core0
extern int *const output_20480__arrayB__15;  // broadcastTensorB_9_output_20480 > multiplyTensors_77_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_39424__0;  // multiplyTensors_77_arrayC > implode_displayTensor_arrayC_arrayC_39424 size:= 512*long defined in Core0
extern char *const multiplyTensors_77__implode___0;  // multiplyTensors_77 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_44032__arrayA__0;  // explode_generateTensors_arrayA_arrayA_44032 > multiplyTensors_86_arrayA size:= 512*int defined in Core0
extern int *const output_24576__arrayB__15;  // broadcastTensorB_10_output_24576 > multiplyTensors_86_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_44032__0;  // multiplyTensors_86_arrayC > implode_displayTensor_arrayC_arrayC_44032 size:= 512*long defined in Core0
extern char *const multiplyTensors_86__implode___0;  // multiplyTensors_86 > implode_displayTensor_arrayC size:= 2048*char defined in Core0
extern int *const arrayA_50176__arrayA__0;  // explode_generateTensors_arrayA_arrayA_50176 > multiplyTensors_98_arrayA size:= 512*int defined in Core0
extern int *const output_8192__arrayB__6;  // broadcastTensorB_12_output_8192 > multiplyTensors_98_arrayB size:= 4096*int defined in Core0
extern long *const arrayC__arrayC_50176__0;  // multiplyTensors_98_arrayC > implode_displayTensor_arrayC_arrayC_50176 size:= 512*long defined in Core0
extern char *const multiplyTensors_98__implode___0;  // multiplyTensors_98 > implode_displayTensor_arrayC size:= 2048*char defined in Core0

// Core Global Definitions

void core3(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__51 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__51 
		cache_inv(explode_generateTensors_arra__51, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__41 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__41 
		cache_inv(explode_generateTensors_arra__41, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__143 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__143 
		cache_inv(explode_generateTensors_arra__143, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__125 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__125 
		cache_inv(explode_generateTensors_arra__125, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__54 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__54 
		cache_inv(explode_generateTensors_arra__54, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__66 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__66 
		cache_inv(explode_generateTensors_arra__66, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__65 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__65 
		cache_inv(explode_generateTensors_arra__65, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__55 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__55 
		cache_inv(explode_generateTensors_arra__55, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__87 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__87 
		cache_inv(explode_generateTensors_arra__87, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__47 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__47 
		cache_inv(explode_generateTensors_arra__47, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__8 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__8 
		cache_inv(explode_generateTensors_arra__8, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__3 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__3 
		cache_inv(explode_generateTensors_arra__3, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__20 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__20 
		cache_inv(explode_generateTensors_arra__20, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__74 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__74 
		cache_inv(explode_generateTensors_arra__74, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__75 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__75 
		cache_inv(explode_generateTensors_arra__75, 2048*sizeof(char));
		receiveStart(); // Core7 > Core3: explode_generateTensors_arra__19 
		receiveEnd(7); // Core7 > Core3: explode_generateTensors_arra__19 
		cache_inv(explode_generateTensors_arra__19, 2048*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__107 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__107 
		cache_inv(explode_generateTensors_arra__107, 16384*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateTensors_arra__113 
		receiveEnd(0); // Core0 > Core3: explode_generateTensors_arra__113 
		cache_inv(explode_generateTensors_arra__113, 16384*sizeof(char));
		receiveStart(); // Core4 > Core3: broadcastTensorB_0__multiply__0 
		receiveEnd(4); // Core4 > Core3: broadcastTensorB_0__multiply__0 
		cache_inv(broadcastTensorB_0__multiply__0, 16384*sizeof(char));
		receiveStart(); // Core4 > Core3: broadcastTensorB_0__multiply__3 
		receiveEnd(4); // Core4 > Core3: broadcastTensorB_0__multiply__3 
		cache_inv(broadcastTensorB_0__multiply__3, 16384*sizeof(char));
		receiveStart(); // Core7 > Core3: broadcastTensorB_10__multipl__7 
		receiveEnd(7); // Core7 > Core3: broadcastTensorB_10__multipl__7 
		cache_inv(broadcastTensorB_10__multipl__7, 16384*sizeof(char));
		// Broadcast broadcastTensorB_11
		{
			cache_wb(arrayB_45056__input__0, 4096*sizeof(int));
		}
		cache_wb(((char*)arrayB_45056__input__0) + 0, 16384);
		cache_inv(arrayB_45056__input__0, 4096*sizeof(int));
		cache_wbInv(broadcastTensorB_11__multipl__4, 16384*sizeof(char));
		sendStart(2); // Core3 > Core2: broadcastTensorB_11__multipl__4 
		sendEnd(); // Core3 > Core2: broadcastTensorB_11__multipl__4 
		cache_wbInv(broadcastTensorB_11__multipl__2, 16384*sizeof(char));
		sendStart(1); // Core3 > Core1: broadcastTensorB_11__multipl__2 
		sendEnd(); // Core3 > Core1: broadcastTensorB_11__multipl__2 
		cache_wbInv(broadcastTensorB_11__multipl__0, 16384*sizeof(char));
		sendStart(2); // Core3 > Core2: broadcastTensorB_11__multipl__0 
		sendEnd(); // Core3 > Core2: broadcastTensorB_11__multipl__0 
		cache_wbInv(broadcastTensorB_11__multipl__1, 16384*sizeof(char));
		sendStart(1); // Core3 > Core1: broadcastTensorB_11__multipl__1 
		sendEnd(); // Core3 > Core1: broadcastTensorB_11__multipl__1 
		cache_wbInv(broadcastTensorB_11__multipl__5, 16384*sizeof(char));
		sendStart(7); // Core3 > Core7: broadcastTensorB_11__multipl__5 
		sendEnd(); // Core3 > Core7: broadcastTensorB_11__multipl__5 
		cache_wbInv(broadcastTensorB_11__multipl__3, 16384*sizeof(char));
		sendStart(4); // Core3 > Core4: broadcastTensorB_11__multipl__3 
		sendEnd(); // Core3 > Core4: broadcastTensorB_11__multipl__3 
		cache_wbInv(broadcastTensorB_11__multipl__6, 16384*sizeof(char));
		sendStart(2); // Core3 > Core2: broadcastTensorB_11__multipl__6 
		sendEnd(); // Core3 > Core2: broadcastTensorB_11__multipl__6 
		cache_wbInv(broadcastTensorB_11__multipl__7, 16384*sizeof(char));
		sendStart(6); // Core3 > Core6: broadcastTensorB_11__multipl__7 
		sendEnd(); // Core3 > Core6: broadcastTensorB_11__multipl__7 
		receiveStart(); // Core2 > Core3: broadcastTensorB_12__multipl__2 
		receiveEnd(2); // Core2 > Core3: broadcastTensorB_12__multipl__2 
		cache_inv(broadcastTensorB_12__multipl__2, 16384*sizeof(char));
		receiveStart(); // Core6 > Core3: broadcastTensorB_14__multipl__6 
		receiveEnd(6); // Core6 > Core3: broadcastTensorB_14__multipl__6 
		cache_inv(broadcastTensorB_14__multipl__6, 16384*sizeof(char));
		receiveStart(); // Core6 > Core3: broadcastTensorB_14__multipl__7 
		receiveEnd(6); // Core6 > Core3: broadcastTensorB_14__multipl__7 
		cache_inv(broadcastTensorB_14__multipl__7, 16384*sizeof(char));
		receiveStart(); // Core6 > Core3: broadcastTensorB_14__multipl__5 
		receiveEnd(6); // Core6 > Core3: broadcastTensorB_14__multipl__5 
		cache_inv(broadcastTensorB_14__multipl__5, 16384*sizeof(char));
		receiveStart(); // Core6 > Core3: broadcastTensorB_14__multipl__0 
		receiveEnd(6); // Core6 > Core3: broadcastTensorB_14__multipl__0 
		cache_inv(broadcastTensorB_14__multipl__0, 16384*sizeof(char));
		receiveStart(); // Core0 > Core3: broadcastTensorB_3__multiply__6 
		receiveEnd(0); // Core0 > Core3: broadcastTensorB_3__multiply__6 
		cache_inv(broadcastTensorB_3__multiply__6, 16384*sizeof(char));
		// Broadcast broadcastTensorB_4
		{
			cache_wb(arrayB_16384__input__0, 4096*sizeof(int));
		}
		cache_wb(((char*)arrayB_16384__input__0) + 0, 16384);
		cache_inv(arrayB_16384__input__0, 4096*sizeof(int));
		cache_wbInv(broadcastTensorB_4__multiply__0, 16384*sizeof(char));
		sendStart(7); // Core3 > Core7: broadcastTensorB_4__multiply__0 
		sendEnd(); // Core3 > Core7: broadcastTensorB_4__multiply__0 
		cache_wbInv(broadcastTensorB_4__multiply__4, 16384*sizeof(char));
		sendStart(7); // Core3 > Core7: broadcastTensorB_4__multiply__4 
		sendEnd(); // Core3 > Core7: broadcastTensorB_4__multiply__4 
		cache_wbInv(broadcastTensorB_4__multiply__5, 16384*sizeof(char));
		sendStart(5); // Core3 > Core5: broadcastTensorB_4__multiply__5 
		sendEnd(); // Core3 > Core5: broadcastTensorB_4__multiply__5 
		cache_wbInv(broadcastTensorB_4__multiply__6, 16384*sizeof(char));
		sendStart(4); // Core3 > Core4: broadcastTensorB_4__multiply__6 
		sendEnd(); // Core3 > Core4: broadcastTensorB_4__multiply__6 
		cache_wbInv(broadcastTensorB_4__multiply__3, 16384*sizeof(char));
		sendStart(4); // Core3 > Core4: broadcastTensorB_4__multiply__3 
		sendEnd(); // Core3 > Core4: broadcastTensorB_4__multiply__3 
		cache_wbInv(broadcastTensorB_4__multiply__2, 16384*sizeof(char));
		sendStart(6); // Core3 > Core6: broadcastTensorB_4__multiply__2 
		sendEnd(); // Core3 > Core6: broadcastTensorB_4__multiply__2 
		cache_wbInv(broadcastTensorB_4__multiply__1, 16384*sizeof(char));
		sendStart(7); // Core3 > Core7: broadcastTensorB_4__multiply__1 
		sendEnd(); // Core3 > Core7: broadcastTensorB_4__multiply__1 
		receiveStart(); // Core1 > Core3: broadcastTensorB_5__multiply__6 
		receiveEnd(1); // Core1 > Core3: broadcastTensorB_5__multiply__6 
		cache_inv(broadcastTensorB_5__multiply__6, 16384*sizeof(char));
		receiveStart(); // Core1 > Core3: broadcastTensorB_5__multiply__3 
		receiveEnd(1); // Core1 > Core3: broadcastTensorB_5__multiply__3 
		cache_inv(broadcastTensorB_5__multiply__3, 16384*sizeof(char));
		receiveStart(); // Core1 > Core3: broadcastTensorB_5__multiply__7 
		receiveEnd(1); // Core1 > Core3: broadcastTensorB_5__multiply__7 
		cache_inv(broadcastTensorB_5__multiply__7, 16384*sizeof(char));
		receiveStart(); // Core5 > Core3: broadcastTensorB_6__multiply__0 
		receiveEnd(5); // Core5 > Core3: broadcastTensorB_6__multiply__0 
		cache_inv(broadcastTensorB_6__multiply__0, 16384*sizeof(char));
		receiveStart(); // Core0 > Core3: broadcastTensorB_9__multiply__5 
		receiveEnd(0); // Core0 > Core3: broadcastTensorB_9__multiply__5 
		cache_inv(broadcastTensorB_9__multiply__5, 16384*sizeof(char));
		receiveStart(); // Core0 > Core3: broadcastTensorB_9__multiply__3 
		receiveEnd(0); // Core0 > Core3: broadcastTensorB_9__multiply__3 
		cache_inv(broadcastTensorB_9__multiply__3, 16384*sizeof(char));
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_0__arrayA__0,output_0__arrayB__5,arrayC__arrayC_0__0); // multiplyTensors_0
		cache_inv(arrayA_0__arrayA__0, 512*sizeof(int));
		cache_inv(output_0__arrayB__5, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_0__implode_d__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_0__implode_d__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_0__implode_d__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_57344__arrayA__0,output_0__arrayB__0,arrayC__arrayC_57344__0); // multiplyTensors_112
		cache_inv(arrayA_57344__arrayA__0, 512*sizeof(int));
		cache_inv(output_0__arrayB__0, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_112__implode__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_112__implode__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_112__implode__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_58880__arrayA__0,output_12288__arrayB__7,arrayC__arrayC_58880__0); // multiplyTensors_115
		cache_inv(arrayA_58880__arrayA__0, 512*sizeof(int));
		cache_inv(output_12288__arrayB__7, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_115__implode__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_115__implode__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_115__implode__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_59392__arrayA__0,output_16384__arrayB__12,arrayC__arrayC_59392__0); // multiplyTensors_116
		cache_inv(arrayA_59392__arrayA__0, 512*sizeof(int));
		cache_inv(output_16384__arrayB__12, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_116__implode__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_116__implode__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_116__implode__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_59904__arrayA__0,output_20480__arrayB__12,arrayC__arrayC_59904__0); // multiplyTensors_117
		cache_inv(arrayA_59904__arrayA__0, 512*sizeof(int));
		cache_inv(output_20480__arrayB__12, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_117__implode__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_117__implode__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_117__implode__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_12288__arrayA__0,output_0__arrayB__12,arrayC__arrayC_12288__0); // multiplyTensors_24
		cache_inv(arrayA_12288__arrayA__0, 512*sizeof(int));
		cache_inv(output_0__arrayB__12, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_24__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_24__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_24__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_17408__arrayA__0,output_8192__arrayB__14,arrayC__arrayC_17408__0); // multiplyTensors_34
		cache_inv(arrayA_17408__arrayA__0, 512*sizeof(int));
		cache_inv(output_8192__arrayB__14, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_34__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_34__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_34__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_20480__arrayA__0,output_0__arrayB__15,arrayC__arrayC_20480__0); // multiplyTensors_40
		cache_inv(arrayA_20480__arrayA__0, 512*sizeof(int));
		cache_inv(output_0__arrayB__15, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_40__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_40__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_40__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_20992__arrayA__0,output_4096__arrayB__9,arrayC__arrayC_20992__0); // multiplyTensors_41
		cache_inv(arrayA_20992__arrayA__0, 512*sizeof(int));
		cache_inv(output_4096__arrayB__9, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_41__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_41__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_41__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_22016__arrayA__0,output_12288__arrayB__15,arrayC__arrayC_22016__0); // multiplyTensors_43
		cache_inv(arrayA_22016__arrayA__0, 512*sizeof(int));
		cache_inv(output_12288__arrayB__15, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_43__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_43__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_43__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_24576__arrayA__0,output_0__arrayB__2,arrayC__arrayC_24576__0); // multiplyTensors_48
		cache_inv(arrayA_24576__arrayA__0, 512*sizeof(int));
		cache_inv(output_0__arrayB__2, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_48__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_48__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_48__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_3584__arrayA__0,output_28672__arrayB__2,arrayC__arrayC_3584__0); // multiplyTensors_7
		cache_inv(arrayA_3584__arrayA__0, 512*sizeof(int));
		cache_inv(output_28672__arrayB__2, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_7__implode_d__0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_7__implode_d__0 
		sendEnd(); // Core3 > Core5: multiplyTensors_7__implode_d__0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_37376__arrayA__0,output_4096__arrayB__8,arrayC__arrayC_37376__0); // multiplyTensors_73
		cache_inv(arrayA_37376__arrayA__0, 512*sizeof(int));
		cache_inv(output_4096__arrayB__8, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_73__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_73__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_73__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_39424__arrayA__0,output_20480__arrayB__15,arrayC__arrayC_39424__0); // multiplyTensors_77
		cache_inv(arrayA_39424__arrayA__0, 512*sizeof(int));
		cache_inv(output_20480__arrayB__15, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_77__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_77__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_77__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_44032__arrayA__0,output_24576__arrayB__15,arrayC__arrayC_44032__0); // multiplyTensors_86
		cache_inv(arrayA_44032__arrayA__0, 512*sizeof(int));
		cache_inv(output_24576__arrayB__15, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_86__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_86__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_86__implode___0 
		multiply(64/*rowsA*/,64/*columnsA*/,16/*depthA*/,64/*rowsB*/,64/*columnsB*/,16/*depthB*/,arrayA_50176__arrayA__0,output_8192__arrayB__6,arrayC__arrayC_50176__0); // multiplyTensors_98
		cache_inv(arrayA_50176__arrayA__0, 512*sizeof(int));
		cache_inv(output_8192__arrayB__6, 4096*sizeof(int));
		cache_wbInv(multiplyTensors_98__implode___0, 2048*sizeof(char));
		sendStart(5); // Core3 > Core5: multiplyTensors_98__implode___0 
		sendEnd(); // Core3 > Core5: multiplyTensors_98__implode___0 
	}
}
