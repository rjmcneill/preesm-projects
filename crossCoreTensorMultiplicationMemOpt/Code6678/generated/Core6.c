/** 
 * @file Core6.c
 * @generated by C6678CPrinter
 * @date Sat Apr 18 00:38:34 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateTensors_arra__127;  // explode_generateTensors_arrayA > multiplyTensors_117 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__22;  // explode_generateTensors_arrayA > multiplyTensors_109 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__24;  // explode_generateTensors_arrayA > multiplyTensors_96 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__14;  // explode_generateTensors_arrayA > multiplyTensors_85 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__7;  // explode_generateTensors_arrayA > multiplyTensors_69 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__85;  // explode_generateTensors_arrayA > multiplyTensors_68 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__36;  // explode_generateTensors_arrayA > multiplyTensors_58 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__25;  // explode_generateTensors_arrayA > multiplyTensors_57 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__20;  // explode_generateTensors_arrayA > multiplyTensors_50 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__112;  // explode_generateTensors_arrayA > multiplyTensors_44 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__124;  // explode_generateTensors_arrayA > multiplyTensors_30 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__78;  // explode_generateTensors_arrayA > multiplyTensors_28 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__55;  // explode_generateTensors_arrayA > multiplyTensors_22 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__58;  // explode_generateTensors_arrayA > multiplyTensors_21 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__57;  // explode_generateTensors_arrayA > multiplyTensors_7 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__116;  // explode_generateTensors_arrayA > multiplyTensors_2 size:= 131072*char defined in Core0
extern char *const explode_generateTensors_arra__3;  // explode_generateTensors_arrayB > broadcastTensorB_7 size:= 1048576*char defined in Core0
extern char *const explode_generateTensors_arra__34;  // explode_generateTensors_arrayB > broadcastTensorB_3 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_0__multiply__0;  // broadcastTensorB_0 > multiplyTensors_7 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_0__multiply__5;  // broadcastTensorB_0 > multiplyTensors_2 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_10__multipl__5;  // broadcastTensorB_10 > multiplyTensors_85 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_12__multipl__0;  // broadcastTensorB_12 > multiplyTensors_96 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_13__multipl__3;  // broadcastTensorB_13 > multiplyTensors_109 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_14__multipl__6;  // broadcastTensorB_14 > multiplyTensors_117 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_2__multiply__6;  // broadcastTensorB_2 > multiplyTensors_22 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_2__multiply__1;  // broadcastTensorB_2 > multiplyTensors_21 size:= 1048576*char defined in Core0
extern int *const output_0__arrayB__6;  // broadcastTensorB_3_output_0 > multiplyTensors_24_arrayB size:= 262144*int defined in Core0
extern int *const output_262144__arrayB__6;  // broadcastTensorB_3_output_262144 > multiplyTensors_25_arrayB size:= 262144*int defined in Core0
extern int *const output_524288__arrayB__8;  // broadcastTensorB_3_output_524288 > multiplyTensors_26_arrayB size:= 262144*int defined in Core0
extern int *const output_786432__arrayB__10;  // broadcastTensorB_3_output_786432 > multiplyTensors_27_arrayB size:= 262144*int defined in Core0
extern int *const output_1048576__arrayB__11;  // broadcastTensorB_3_output_1048576 > multiplyTensors_28_arrayB size:= 262144*int defined in Core0
extern int *const output_1310720__arrayB__12;  // broadcastTensorB_3_output_1310720 > multiplyTensors_29_arrayB size:= 262144*int defined in Core0
extern int *const output_1572864__arrayB__7;  // broadcastTensorB_3_output_1572864 > multiplyTensors_30_arrayB size:= 262144*int defined in Core0
extern int *const output_1835008__arrayB__9;  // broadcastTensorB_3_output_1835008 > multiplyTensors_31_arrayB size:= 262144*int defined in Core0
extern int *const arrayB_786432__input__0;  // explode_generateTensors_arrayB_arrayB_786432 > broadcastTensorB_3_input size:= 262144*int defined in Core0
extern char *const broadcastTensorB_3__multiply__7;  // broadcastTensorB_3 > multiplyTensors_31 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_3__multiply__5;  // broadcastTensorB_3 > multiplyTensors_29 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_3__multiply__2;  // broadcastTensorB_3 > multiplyTensors_27 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_3__multiply__6;  // broadcastTensorB_3 > multiplyTensors_26 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_3__multiply__4;  // broadcastTensorB_3 > multiplyTensors_25 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_3__multiply__0;  // broadcastTensorB_3 > multiplyTensors_24 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_5__multiply__6;  // broadcastTensorB_5 > multiplyTensors_44 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_6__multiply__7;  // broadcastTensorB_6 > multiplyTensors_50 size:= 1048576*char defined in Core0
extern int *const output_0__arrayB__7;  // broadcastTensorB_7_output_0 > multiplyTensors_56_arrayB size:= 262144*int defined in Core0
extern int *const output_262144__arrayB__3;  // broadcastTensorB_7_output_262144 > multiplyTensors_57_arrayB size:= 262144*int defined in Core0
extern int *const output_524288__arrayB__13;  // broadcastTensorB_7_output_524288 > multiplyTensors_58_arrayB size:= 262144*int defined in Core0
extern int *const output_786432__arrayB__15;  // broadcastTensorB_7_output_786432 > multiplyTensors_59_arrayB size:= 262144*int defined in Core0
extern int *const output_1048576__arrayB__3;  // broadcastTensorB_7_output_1048576 > multiplyTensors_60_arrayB size:= 262144*int defined in Core0
extern int *const output_1310720__arrayB__14;  // broadcastTensorB_7_output_1310720 > multiplyTensors_61_arrayB size:= 262144*int defined in Core0
extern int *const output_1572864__arrayB__1;  // broadcastTensorB_7_output_1572864 > multiplyTensors_62_arrayB size:= 262144*int defined in Core0
extern int *const output_1835008__arrayB__6;  // broadcastTensorB_7_output_1835008 > multiplyTensors_63_arrayB size:= 262144*int defined in Core0
extern int *const arrayB_1835008__input__0;  // explode_generateTensors_arrayB_arrayB_1835008 > broadcastTensorB_7_input size:= 262144*int defined in Core0
extern char *const broadcastTensorB_7__multiply__2;  // broadcastTensorB_7 > multiplyTensors_63 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_7__multiply__0;  // broadcastTensorB_7 > multiplyTensors_62 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_7__multiply__6;  // broadcastTensorB_7 > multiplyTensors_61 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_7__multiply__1;  // broadcastTensorB_7 > multiplyTensors_60 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_7__multiply__7;  // broadcastTensorB_7 > multiplyTensors_59 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_7__multiply__4;  // broadcastTensorB_7 > multiplyTensors_56 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_8__multiply__1;  // broadcastTensorB_8 > multiplyTensors_69 size:= 1048576*char defined in Core0
extern char *const broadcastTensorB_8__multiply__2;  // broadcastTensorB_8 > multiplyTensors_68 size:= 1048576*char defined in Core0
extern int *const arrayA_3571712__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3571712 > multiplyTensors_109_arrayA size:= 32768*int defined in Core0
extern int *const output_1310720__arrayB__3;  // broadcastTensorB_13_output_1310720 > multiplyTensors_109_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3571712__0;  // multiplyTensors_109_arrayC > implode_displayTensor_arrayC_arrayC_3571712 size:= 32768*long defined in Core0
extern char *const multiplyTensors_109__implode__0;  // multiplyTensors_109 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_3833856__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3833856 > multiplyTensors_117_arrayA size:= 32768*int defined in Core0
extern int *const output_1310720__arrayB__13;  // broadcastTensorB_14_output_1310720 > multiplyTensors_117_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3833856__0;  // multiplyTensors_117_arrayC > implode_displayTensor_arrayC_arrayC_3833856 size:= 32768*long defined in Core0
extern char *const multiplyTensors_117__implode__0;  // multiplyTensors_117 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_65536__arrayA__0;  // explode_generateTensors_arrayA_arrayA_65536 > multiplyTensors_2_arrayA size:= 32768*int defined in Core0
extern int *const output_524288__arrayB__10;  // broadcastTensorB_0_output_524288 > multiplyTensors_2_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_65536__0;  // multiplyTensors_2_arrayC > implode_displayTensor_arrayC_arrayC_65536 size:= 32768*long defined in Core0
extern char *const multiplyTensors_2__implode_d__0;  // multiplyTensors_2 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_688128__arrayA__0;  // explode_generateTensors_arrayA_arrayA_688128 > multiplyTensors_21_arrayA size:= 32768*int defined in Core0
extern int *const output_1310720__arrayB__1;  // broadcastTensorB_2_output_1310720 > multiplyTensors_21_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_688128__0;  // multiplyTensors_21_arrayC > implode_displayTensor_arrayC_arrayC_688128 size:= 32768*long defined in Core0
extern char *const multiplyTensors_21__implode___0;  // multiplyTensors_21 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_720896__arrayA__0;  // explode_generateTensors_arrayA_arrayA_720896 > multiplyTensors_22_arrayA size:= 32768*int defined in Core0
extern int *const output_1572864__arrayB__12;  // broadcastTensorB_2_output_1572864 > multiplyTensors_22_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_720896__0;  // multiplyTensors_22_arrayC > implode_displayTensor_arrayC_arrayC_720896 size:= 32768*long defined in Core0
extern char *const multiplyTensors_22__implode___0;  // multiplyTensors_22 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_917504__arrayA__0;  // explode_generateTensors_arrayA_arrayA_917504 > multiplyTensors_28_arrayA size:= 32768*int defined in Core0
extern long *const arrayC__arrayC_917504__0;  // multiplyTensors_28_arrayC > implode_displayTensor_arrayC_arrayC_917504 size:= 32768*long defined in Core0
extern char *const multiplyTensors_28__implode___0;  // multiplyTensors_28 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_983040__arrayA__0;  // explode_generateTensors_arrayA_arrayA_983040 > multiplyTensors_30_arrayA size:= 32768*int defined in Core0
extern long *const arrayC__arrayC_983040__0;  // multiplyTensors_30_arrayC > implode_displayTensor_arrayC_arrayC_983040 size:= 32768*long defined in Core0
extern char *const multiplyTensors_30__implode___0;  // multiplyTensors_30 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_1441792__arrayA__0;  // explode_generateTensors_arrayA_arrayA_1441792 > multiplyTensors_44_arrayA size:= 32768*int defined in Core0
extern int *const output_1048576__arrayB__14;  // broadcastTensorB_5_output_1048576 > multiplyTensors_44_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_1441792__0;  // multiplyTensors_44_arrayC > implode_displayTensor_arrayC_arrayC_1441792 size:= 32768*long defined in Core0
extern char *const multiplyTensors_44__implode___0;  // multiplyTensors_44 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_1638400__arrayA__0;  // explode_generateTensors_arrayA_arrayA_1638400 > multiplyTensors_50_arrayA size:= 32768*int defined in Core0
extern int *const output_524288__arrayB__14;  // broadcastTensorB_6_output_524288 > multiplyTensors_50_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_1638400__0;  // multiplyTensors_50_arrayC > implode_displayTensor_arrayC_arrayC_1638400 size:= 32768*long defined in Core0
extern char *const multiplyTensors_50__implode___0;  // multiplyTensors_50 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_1867776__arrayA__0;  // explode_generateTensors_arrayA_arrayA_1867776 > multiplyTensors_57_arrayA size:= 32768*int defined in Core0
extern long *const arrayC__arrayC_1867776__0;  // multiplyTensors_57_arrayC > implode_displayTensor_arrayC_arrayC_1867776 size:= 32768*long defined in Core0
extern char *const multiplyTensors_57__implode___0;  // multiplyTensors_57 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_1900544__arrayA__0;  // explode_generateTensors_arrayA_arrayA_1900544 > multiplyTensors_58_arrayA size:= 32768*int defined in Core0
extern long *const arrayC__arrayC_1900544__0;  // multiplyTensors_58_arrayC > implode_displayTensor_arrayC_arrayC_1900544 size:= 32768*long defined in Core0
extern char *const multiplyTensors_58__implode___0;  // multiplyTensors_58 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_2228224__arrayA__0;  // explode_generateTensors_arrayA_arrayA_2228224 > multiplyTensors_68_arrayA size:= 32768*int defined in Core0
extern int *const output_1048576__arrayB__10;  // broadcastTensorB_8_output_1048576 > multiplyTensors_68_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_2228224__0;  // multiplyTensors_68_arrayC > implode_displayTensor_arrayC_arrayC_2228224 size:= 32768*long defined in Core0
extern char *const multiplyTensors_68__implode___0;  // multiplyTensors_68 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_2260992__arrayA__0;  // explode_generateTensors_arrayA_arrayA_2260992 > multiplyTensors_69_arrayA size:= 32768*int defined in Core0
extern int *const output_1310720__arrayB__4;  // broadcastTensorB_8_output_1310720 > multiplyTensors_69_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_2260992__0;  // multiplyTensors_69_arrayC > implode_displayTensor_arrayC_arrayC_2260992 size:= 32768*long defined in Core0
extern char *const multiplyTensors_69__implode___0;  // multiplyTensors_69 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_229376__arrayA__0;  // explode_generateTensors_arrayA_arrayA_229376 > multiplyTensors_7_arrayA size:= 32768*int defined in Core0
extern int *const output_1835008__arrayB__0;  // broadcastTensorB_0_output_1835008 > multiplyTensors_7_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_229376__0;  // multiplyTensors_7_arrayC > implode_displayTensor_arrayC_arrayC_229376 size:= 32768*long defined in Core0
extern char *const multiplyTensors_7__implode_d__0;  // multiplyTensors_7 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_2785280__arrayA__0;  // explode_generateTensors_arrayA_arrayA_2785280 > multiplyTensors_85_arrayA size:= 32768*int defined in Core0
extern int *const output_1310720__arrayB__6;  // broadcastTensorB_10_output_1310720 > multiplyTensors_85_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_2785280__0;  // multiplyTensors_85_arrayC > implode_displayTensor_arrayC_arrayC_2785280 size:= 32768*long defined in Core0
extern char *const multiplyTensors_85__implode___0;  // multiplyTensors_85 > implode_displayTensor_arrayC size:= 131072*char defined in Core0
extern int *const arrayA_3145728__arrayA__0;  // explode_generateTensors_arrayA_arrayA_3145728 > multiplyTensors_96_arrayA size:= 32768*int defined in Core0
extern int *const output_0__arrayB__1;  // broadcastTensorB_12_output_0 > multiplyTensors_96_arrayB size:= 262144*int defined in Core0
extern long *const arrayC__arrayC_3145728__0;  // multiplyTensors_96_arrayC > implode_displayTensor_arrayC_arrayC_3145728 size:= 32768*long defined in Core0
extern char *const multiplyTensors_96__implode___0;  // multiplyTensors_96 > implode_displayTensor_arrayC size:= 131072*char defined in Core0

// Core Global Definitions

void core6(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__127 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__127 
		cache_inv(explode_generateTensors_arra__127, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__22 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__22 
		cache_inv(explode_generateTensors_arra__22, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__24 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__24 
		cache_inv(explode_generateTensors_arra__24, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__14 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__14 
		cache_inv(explode_generateTensors_arra__14, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__7 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__7 
		cache_inv(explode_generateTensors_arra__7, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__85 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__85 
		cache_inv(explode_generateTensors_arra__85, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__36 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__36 
		cache_inv(explode_generateTensors_arra__36, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__25 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__25 
		cache_inv(explode_generateTensors_arra__25, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__20 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__20 
		cache_inv(explode_generateTensors_arra__20, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__112 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__112 
		cache_inv(explode_generateTensors_arra__112, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__124 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__124 
		cache_inv(explode_generateTensors_arra__124, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__78 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__78 
		cache_inv(explode_generateTensors_arra__78, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__55 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__55 
		cache_inv(explode_generateTensors_arra__55, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__58 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__58 
		cache_inv(explode_generateTensors_arra__58, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__57 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__57 
		cache_inv(explode_generateTensors_arra__57, 131072*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateTensors_arra__116 
		receiveEnd(0); // Core0 > Core6: explode_generateTensors_arra__116 
		cache_inv(explode_generateTensors_arra__116, 131072*sizeof(char));
		receiveStart(); // Core7 > Core6: explode_generateTensors_arra__3 
		receiveEnd(7); // Core7 > Core6: explode_generateTensors_arra__3 
		cache_inv(explode_generateTensors_arra__3, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core6: explode_generateTensors_arra__34 
		receiveEnd(7); // Core7 > Core6: explode_generateTensors_arra__34 
		cache_inv(explode_generateTensors_arra__34, 1048576*sizeof(char));
		receiveStart(); // Core4 > Core6: broadcastTensorB_0__multiply__0 
		receiveEnd(4); // Core4 > Core6: broadcastTensorB_0__multiply__0 
		cache_inv(broadcastTensorB_0__multiply__0, 1048576*sizeof(char));
		receiveStart(); // Core4 > Core6: broadcastTensorB_0__multiply__5 
		receiveEnd(4); // Core4 > Core6: broadcastTensorB_0__multiply__5 
		cache_inv(broadcastTensorB_0__multiply__5, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core6: broadcastTensorB_10__multipl__5 
		receiveEnd(0); // Core0 > Core6: broadcastTensorB_10__multipl__5 
		cache_inv(broadcastTensorB_10__multipl__5, 1048576*sizeof(char));
		receiveStart(); // Core3 > Core6: broadcastTensorB_12__multipl__0 
		receiveEnd(3); // Core3 > Core6: broadcastTensorB_12__multipl__0 
		cache_inv(broadcastTensorB_12__multipl__0, 1048576*sizeof(char));
		receiveStart(); // Core7 > Core6: broadcastTensorB_13__multipl__3 
		receiveEnd(7); // Core7 > Core6: broadcastTensorB_13__multipl__3 
		cache_inv(broadcastTensorB_13__multipl__3, 1048576*sizeof(char));
		receiveStart(); // Core2 > Core6: broadcastTensorB_14__multipl__6 
		receiveEnd(2); // Core2 > Core6: broadcastTensorB_14__multipl__6 
		cache_inv(broadcastTensorB_14__multipl__6, 1048576*sizeof(char));
		receiveStart(); // Core2 > Core6: broadcastTensorB_2__multiply__6 
		receiveEnd(2); // Core2 > Core6: broadcastTensorB_2__multiply__6 
		cache_inv(broadcastTensorB_2__multiply__6, 1048576*sizeof(char));
		receiveStart(); // Core2 > Core6: broadcastTensorB_2__multiply__1 
		receiveEnd(2); // Core2 > Core6: broadcastTensorB_2__multiply__1 
		cache_inv(broadcastTensorB_2__multiply__1, 1048576*sizeof(char));
		// Broadcast broadcastTensorB_3
		{
			cache_wb(arrayB_786432__input__0, 262144*sizeof(int));
		}
		cache_wb(((char*)arrayB_786432__input__0) + 0, 1048576);
		cache_inv(arrayB_786432__input__0, 262144*sizeof(int));
		cache_wbInv(broadcastTensorB_3__multiply__7, 1048576*sizeof(char));
		sendStart(3); // Core6 > Core3: broadcastTensorB_3__multiply__7 
		sendEnd(); // Core6 > Core3: broadcastTensorB_3__multiply__7 
		cache_wbInv(broadcastTensorB_3__multiply__5, 1048576*sizeof(char));
		sendStart(7); // Core6 > Core7: broadcastTensorB_3__multiply__5 
		sendEnd(); // Core6 > Core7: broadcastTensorB_3__multiply__5 
		cache_wbInv(broadcastTensorB_3__multiply__2, 1048576*sizeof(char));
		sendStart(0); // Core6 > Core0: broadcastTensorB_3__multiply__2 
		sendEnd(); // Core6 > Core0: broadcastTensorB_3__multiply__2 
		cache_wbInv(broadcastTensorB_3__multiply__6, 1048576*sizeof(char));
		sendStart(2); // Core6 > Core2: broadcastTensorB_3__multiply__6 
		sendEnd(); // Core6 > Core2: broadcastTensorB_3__multiply__6 
		cache_wbInv(broadcastTensorB_3__multiply__4, 1048576*sizeof(char));
		sendStart(2); // Core6 > Core2: broadcastTensorB_3__multiply__4 
		sendEnd(); // Core6 > Core2: broadcastTensorB_3__multiply__4 
		cache_wbInv(broadcastTensorB_3__multiply__0, 1048576*sizeof(char));
		sendStart(4); // Core6 > Core4: broadcastTensorB_3__multiply__0 
		sendEnd(); // Core6 > Core4: broadcastTensorB_3__multiply__0 
		receiveStart(); // Core1 > Core6: broadcastTensorB_5__multiply__6 
		receiveEnd(1); // Core1 > Core6: broadcastTensorB_5__multiply__6 
		cache_inv(broadcastTensorB_5__multiply__6, 1048576*sizeof(char));
		receiveStart(); // Core0 > Core6: broadcastTensorB_6__multiply__7 
		receiveEnd(0); // Core0 > Core6: broadcastTensorB_6__multiply__7 
		cache_inv(broadcastTensorB_6__multiply__7, 1048576*sizeof(char));
		// Broadcast broadcastTensorB_7
		{
			cache_wb(arrayB_1835008__input__0, 262144*sizeof(int));
		}
		cache_wb(((char*)arrayB_1835008__input__0) + 0, 1048576);
		cache_inv(arrayB_1835008__input__0, 262144*sizeof(int));
		cache_wbInv(broadcastTensorB_7__multiply__2, 1048576*sizeof(char));
		sendStart(2); // Core6 > Core2: broadcastTensorB_7__multiply__2 
		sendEnd(); // Core6 > Core2: broadcastTensorB_7__multiply__2 
		cache_wbInv(broadcastTensorB_7__multiply__0, 1048576*sizeof(char));
		sendStart(0); // Core6 > Core0: broadcastTensorB_7__multiply__0 
		sendEnd(); // Core6 > Core0: broadcastTensorB_7__multiply__0 
		cache_wbInv(broadcastTensorB_7__multiply__6, 1048576*sizeof(char));
		sendStart(1); // Core6 > Core1: broadcastTensorB_7__multiply__6 
		sendEnd(); // Core6 > Core1: broadcastTensorB_7__multiply__6 
		cache_wbInv(broadcastTensorB_7__multiply__1, 1048576*sizeof(char));
		sendStart(4); // Core6 > Core4: broadcastTensorB_7__multiply__1 
		sendEnd(); // Core6 > Core4: broadcastTensorB_7__multiply__1 
		cache_wbInv(broadcastTensorB_7__multiply__7, 1048576*sizeof(char));
		sendStart(7); // Core6 > Core7: broadcastTensorB_7__multiply__7 
		sendEnd(); // Core6 > Core7: broadcastTensorB_7__multiply__7 
		cache_wbInv(broadcastTensorB_7__multiply__4, 1048576*sizeof(char));
		sendStart(0); // Core6 > Core0: broadcastTensorB_7__multiply__4 
		sendEnd(); // Core6 > Core0: broadcastTensorB_7__multiply__4 
		receiveStart(); // Core5 > Core6: broadcastTensorB_8__multiply__1 
		receiveEnd(5); // Core5 > Core6: broadcastTensorB_8__multiply__1 
		cache_inv(broadcastTensorB_8__multiply__1, 1048576*sizeof(char));
		receiveStart(); // Core5 > Core6: broadcastTensorB_8__multiply__2 
		receiveEnd(5); // Core5 > Core6: broadcastTensorB_8__multiply__2 
		cache_inv(broadcastTensorB_8__multiply__2, 1048576*sizeof(char));
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_3571712__arrayA__0,output_1310720__arrayB__3,arrayC__arrayC_3571712__0); // multiplyTensors_109
		cache_inv(arrayA_3571712__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1310720__arrayB__3, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_109__implode__0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_109__implode__0 
		sendEnd(); // Core6 > Core7: multiplyTensors_109__implode__0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_3833856__arrayA__0,output_1310720__arrayB__13,arrayC__arrayC_3833856__0); // multiplyTensors_117
		cache_inv(arrayA_3833856__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1310720__arrayB__13, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_117__implode__0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_117__implode__0 
		sendEnd(); // Core6 > Core7: multiplyTensors_117__implode__0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_65536__arrayA__0,output_524288__arrayB__10,arrayC__arrayC_65536__0); // multiplyTensors_2
		cache_inv(arrayA_65536__arrayA__0, 32768*sizeof(int));
		cache_inv(output_524288__arrayB__10, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_2__implode_d__0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_2__implode_d__0 
		sendEnd(); // Core6 > Core7: multiplyTensors_2__implode_d__0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_688128__arrayA__0,output_1310720__arrayB__1,arrayC__arrayC_688128__0); // multiplyTensors_21
		cache_inv(arrayA_688128__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1310720__arrayB__1, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_21__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_21__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_21__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_720896__arrayA__0,output_1572864__arrayB__12,arrayC__arrayC_720896__0); // multiplyTensors_22
		cache_inv(arrayA_720896__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1572864__arrayB__12, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_22__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_22__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_22__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_917504__arrayA__0,output_1048576__arrayB__11,arrayC__arrayC_917504__0); // multiplyTensors_28
		cache_inv(arrayA_917504__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1048576__arrayB__11, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_28__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_28__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_28__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_983040__arrayA__0,output_1572864__arrayB__7,arrayC__arrayC_983040__0); // multiplyTensors_30
		cache_inv(arrayA_983040__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1572864__arrayB__7, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_30__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_30__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_30__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_1441792__arrayA__0,output_1048576__arrayB__14,arrayC__arrayC_1441792__0); // multiplyTensors_44
		cache_inv(arrayA_1441792__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1048576__arrayB__14, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_44__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_44__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_44__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_1638400__arrayA__0,output_524288__arrayB__14,arrayC__arrayC_1638400__0); // multiplyTensors_50
		cache_inv(arrayA_1638400__arrayA__0, 32768*sizeof(int));
		cache_inv(output_524288__arrayB__14, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_50__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_50__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_50__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_1867776__arrayA__0,output_262144__arrayB__3,arrayC__arrayC_1867776__0); // multiplyTensors_57
		cache_inv(arrayA_1867776__arrayA__0, 32768*sizeof(int));
		cache_inv(output_262144__arrayB__3, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_57__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_57__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_57__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_1900544__arrayA__0,output_524288__arrayB__13,arrayC__arrayC_1900544__0); // multiplyTensors_58
		cache_inv(arrayA_1900544__arrayA__0, 32768*sizeof(int));
		cache_inv(output_524288__arrayB__13, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_58__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_58__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_58__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_2228224__arrayA__0,output_1048576__arrayB__10,arrayC__arrayC_2228224__0); // multiplyTensors_68
		cache_inv(arrayA_2228224__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1048576__arrayB__10, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_68__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_68__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_68__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_2260992__arrayA__0,output_1310720__arrayB__4,arrayC__arrayC_2260992__0); // multiplyTensors_69
		cache_inv(arrayA_2260992__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1310720__arrayB__4, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_69__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_69__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_69__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_229376__arrayA__0,output_1835008__arrayB__0,arrayC__arrayC_229376__0); // multiplyTensors_7
		cache_inv(arrayA_229376__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1835008__arrayB__0, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_7__implode_d__0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_7__implode_d__0 
		sendEnd(); // Core6 > Core7: multiplyTensors_7__implode_d__0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_2785280__arrayA__0,output_1310720__arrayB__6,arrayC__arrayC_2785280__0); // multiplyTensors_85
		cache_inv(arrayA_2785280__arrayA__0, 32768*sizeof(int));
		cache_inv(output_1310720__arrayB__6, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_85__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_85__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_85__implode___0 
		multiply(512/*rowsA*/,512/*columnsA*/,16/*depthA*/,512/*rowsB*/,512/*columnsB*/,16/*depthB*/,arrayA_3145728__arrayA__0,output_0__arrayB__1,arrayC__arrayC_3145728__0); // multiplyTensors_96
		cache_inv(arrayA_3145728__arrayA__0, 32768*sizeof(int));
		cache_inv(output_0__arrayB__1, 262144*sizeof(int));
		cache_wbInv(multiplyTensors_96__implode___0, 131072*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyTensors_96__implode___0 
		sendEnd(); // Core6 > Core7: multiplyTensors_96__implode___0 
	}
}
