/** 
 * @file Core0.c
 * @generated by C6678CPrinter
 * @date Sat Feb 28 20:12:57 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const FIFO_Head_broadcastOutput_en__2;  // FIFO_Head_broadcastOutput_end_output1_0 > accumulateMatrices_0_init_runningTotal size:= 8388608*char defined in Core7
extern char *const FIFO_Head_displayMatrices_en__0;  // FIFO_Head_displayMatrices_end_countOut > displayMatrices_init_countIn size:= 4*char defined in Core4

// Core Global Definitions
// Won't work if the shared memory is >= 512 MB 
#pragma DATA_SECTION(SharedMem, ".mySharedMem")
char SharedMem[218104068]; //  size:= 218104068*char
char *const accumulateMatrices_0__implod__0 = (char*) (SharedMem+67109120);  // accumulateMatrices_0 > implode_broadcastOutput_input size:= 8388608*char
char *const accumulateMatrices_3__implod__0 = (char*) (SharedMem+25165952);  // accumulateMatrices_3 > implode_broadcastOutput_input size:= 8388608*char
char *const explode_generateMatrices_sta__7 = (char*) (SharedMem+184549632);  // explode_generateMatrices_startArray > accumulateMatrices_4 size:= 8388608*char
char *const implode_broadcastOutput_inpu__0 = (char*) (SharedMem+67109120);  // implode_broadcastOutput_input > broadcastOutput size:= 67108864*char
char *const accumulateMatrices_4_init_ru__0 = (char*) (SharedMem+92274944);  // accumulateMatrices_4_init_runningTotal > accumulateMatrices_4 size:= 8388608*char
char *const generateMatrices__displayMat__0 = (char*) (SharedMem+67108992);  // generateMatrices > displayMatrices size:= 8*char
char *const broadcastOutput__broadcastOu__3 = (char*) (SharedMem+25165824);  // broadcastOutput > broadcastOutput_end_output1_14680064 size:= 8388608*char
char *const generateMatrices__generateMa__0 = (char*) (SharedMem+64);  // generateMatrices > generateMatrices_end_countOut size:= 4*char
char *const broadcastOutput__broadcastOu__6 = (char*) (SharedMem+50331648);  // broadcastOutput > broadcastOutput_end_output1_2097152 size:= 8388608*char
char *const generateMatrices__explode_ge__0 = (char*) (SharedMem+128);  // generateMatrices > explode_generateMatrices_startArray size:= 67108864*char
char *const broadcastOutput__broadcastOu__7 = (char*) (SharedMem+58720256);  // broadcastOutput > broadcastOutput_end_output1_4194304 size:= 8388608*char
char *const explode_generateMatrices_sta__3 = (char*) (SharedMem+41943168);  // explode_generateMatrices_startArray > accumulateMatrices_5 size:= 8388608*char
char *const accumulateMatrices_1_init_ru__0 = (char*) (SharedMem+150995200);  // accumulateMatrices_1_init_runningTotal > accumulateMatrices_1 size:= 8388608*char
char *const explode_generateMatrices_sta__6 = (char*) (SharedMem+176161024);  // explode_generateMatrices_startArray > accumulateMatrices_3 size:= 8388608*char
char *const accumulateMatrices_5__implod__0 = (char*) (SharedMem+109052160);  // accumulateMatrices_5 > implode_broadcastOutput_input size:= 8388608*char
char *const explode_generateMatrices_sta__0 = (char*) (SharedMem+128);  // explode_generateMatrices_startArray > accumulateMatrices_0 size:= 8388608*char
char *const accumulateMatrices_0_init_ru__0 = (char*) (SharedMem+134217984);  // accumulateMatrices_0_init_runningTotal > accumulateMatrices_0 size:= 8388608*char
char *const explode_generateMatrices_sta__1 = (char*) (SharedMem+192938240);  // explode_generateMatrices_startArray > accumulateMatrices_6 size:= 8388608*char
char *const accumulateMatrices_5_init_ru__0 = (char*) (SharedMem+142606592);  // accumulateMatrices_5_init_runningTotal > accumulateMatrices_5 size:= 8388608*char
char *const explode_generateMatrices_sta__4 = (char*) (SharedMem+167772416);  // explode_generateMatrices_startArray > accumulateMatrices_1 size:= 8388608*char
char *const accumulateMatrices_2_init_ru__0 = (char*) (SharedMem+159383808);  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 8388608*char
char *const explode_generateMatrices_sta__5 = (char*) (SharedMem+58720384);  // explode_generateMatrices_startArray > accumulateMatrices_7 size:= 8388608*char
char *const broadcastOutput__displayMatr__0 = (char*) (SharedMem+67109120);  // broadcastOutput > displayMatrices size:= 67108864*char
char *const accumulateMatrices_2__implod__0 = (char*) (SharedMem+83886336);  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 8388608*char
char *const accumulateMatrices_3_init_ru__0 = (char*) (SharedMem+75497728);  // accumulateMatrices_3_init_runningTotal > accumulateMatrices_3 size:= 8388608*char
char *const broadcastOutput__broadcastOu__2 = (char*) (SharedMem+33554432);  // broadcastOutput > broadcastOutput_end_output1_0 size:= 8388608*char
char *const broadcastOutput__broadcastOu__1 = (char*) (SharedMem+41943040);  // broadcastOutput > broadcastOutput_end_output1_10485760 size:= 8388608*char
char *const generateMatrices_init_countI__0 = (char*) (SharedMem+0);  // generateMatrices_init_countIn > generateMatrices size:= 4*char
char *const accumulateMatrices_6__implod__0 = (char*) (SharedMem+50331776);  // accumulateMatrices_6 > implode_broadcastOutput_input size:= 8388608*char
char *const accumulateMatrices_7__implod__0 = (char*) (SharedMem+125829376);  // accumulateMatrices_7 > implode_broadcastOutput_input size:= 8388608*char
char *const explode_generateMatrices_sta__2 = (char*) (SharedMem+16777344);  // explode_generateMatrices_startArray > accumulateMatrices_2 size:= 8388608*char
char *const displayMatrices__displayMatr__0 = (char*) (SharedMem+67108864);  // displayMatrices > displayMatrices_end_countOut size:= 4*char
char *const broadcastOutput__broadcastOu__0 = (char*) (SharedMem+8388608);  // broadcastOutput > broadcastOutput_end_output1_8388608 size:= 8388608*char
char *const accumulateMatrices_4__implod__0 = (char*) (SharedMem+33554560);  // accumulateMatrices_4 > implode_broadcastOutput_input size:= 8388608*char
char *const accumulateMatrices_7_init_ru__0 = (char*) (SharedMem+117440768);  // accumulateMatrices_7_init_runningTotal > accumulateMatrices_7 size:= 8388608*char
char *const accumulateMatrices_1__implod__0 = (char*) (SharedMem+8388736);  // accumulateMatrices_1 > implode_broadcastOutput_input size:= 8388608*char
char *const broadcastOutput__broadcastOu__5 = (char*) (SharedMem+16777216);  // broadcastOutput > broadcastOutput_end_output1_12582912 size:= 8388608*char
char *const broadcastOutput__broadcastOu__4 = (char*) (SharedMem+0);  // broadcastOutput > broadcastOutput_end_output1_6291456 size:= 8388608*char
char *const accumulateMatrices_6_init_ru__0 = (char*) (SharedMem+100663552);  // accumulateMatrices_6_init_runningTotal > accumulateMatrices_6 size:= 8388608*char
char *const displayMatrices_init_countIn__0 = (char*) (SharedMem+67109056);  // displayMatrices_init_countIn > displayMatrices size:= 4*char
long *const output__input_8388608__0 = (long*) (SharedMem+33554560);  // accumulateMatrices_4_output > implode_broadcastOutput_input_input_8388608 size:= 2097152*long
long *const startArray_12582912__inputAr__0 = (long*) (SharedMem+192938240);  // explode_generateMatrices_startArray_startArray_12582912 > accumulateMatrices_6_inputArray size:= 2097152*long
long *const startArray_8388608__inputArr__0 = (long*) (SharedMem+184549632);  // explode_generateMatrices_startArray_startArray_8388608 > accumulateMatrices_4_inputArray size:= 2097152*long
long *const output__input_0__0 = (long*) (SharedMem+67109120);  // accumulateMatrices_0_output > implode_broadcastOutput_input_input_0 size:= 2097152*long
long *const init_out__runningTotal__6 = (long*) (SharedMem+75497728);  // accumulateMatrices_3_init_runningTotal_init_out > accumulateMatrices_3_runningTotal size:= 2097152*long
long *const output1_4194304__end_in__0 = (long*) (SharedMem+58720256);  // broadcastOutput_output1_4194304 > broadcastOutput_end_output1_4194304_end_in size:= 2097152*long
long *const output1_12582912__end_in__0 = (long*) (SharedMem+16777216);  // broadcastOutput_output1_12582912 > broadcastOutput_end_output1_12582912_end_in size:= 2097152*long
long *const startArray_2097152__inputArr__0 = (long*) (SharedMem+167772416);  // explode_generateMatrices_startArray_startArray_2097152 > accumulateMatrices_1_inputArray size:= 2097152*long
long *const output__input_10485760__0 = (long*) (SharedMem+109052160);  // accumulateMatrices_5_output > implode_broadcastOutput_input_input_10485760 size:= 2097152*long
long *const output1_6291456__end_in__0 = (long*) (SharedMem+0);  // broadcastOutput_output1_6291456 > broadcastOutput_end_output1_6291456_end_in size:= 2097152*long
long *const output__input_2097152__0 = (long*) (SharedMem+8388736);  // accumulateMatrices_1_output > implode_broadcastOutput_input_input_2097152 size:= 2097152*long
long *const init_out__runningTotal__4 = (long*) (SharedMem+100663552);  // accumulateMatrices_6_init_runningTotal_init_out > accumulateMatrices_6_runningTotal size:= 2097152*long
long *const init_out__countIn__1 = (long*) (SharedMem+0);  // generateMatrices_init_countIn_init_out > generateMatrices_countIn size:= 1*long
long *const output__input_12582912__0 = (long*) (SharedMem+50331776);  // accumulateMatrices_6_output > implode_broadcastOutput_input_input_12582912 size:= 2097152*long
long *const startArray_10485760__inputAr__0 = (long*) (SharedMem+41943168);  // explode_generateMatrices_startArray_startArray_10485760 > accumulateMatrices_5_inputArray size:= 2097152*long
double *const startTime__startTime__0 = (double*) (SharedMem+67108992);  // generateMatrices_startTime > displayMatrices_startTime size:= 1*double
long *const startArray_4194304__inputArr__0 = (long*) (SharedMem+16777344);  // explode_generateMatrices_startArray_startArray_4194304 > accumulateMatrices_2_inputArray size:= 2097152*long
long *const startArray__inputArray__0 = (long*) (SharedMem+128);  // generateMatrices_startArray > explode_generateMatrices_startArray_inputArray size:= 16777216*long
long *const output1_14680064__end_in__0 = (long*) (SharedMem+25165824);  // broadcastOutput_output1_14680064 > broadcastOutput_end_output1_14680064_end_in size:= 2097152*long
long *const output1_2097152__end_in__0 = (long*) (SharedMem+50331648);  // broadcastOutput_output1_2097152 > broadcastOutput_end_output1_2097152_end_in size:= 2097152*long
long *const output1_10485760__end_in__0 = (long*) (SharedMem+41943040);  // broadcastOutput_output1_10485760 > broadcastOutput_end_output1_10485760_end_in size:= 2097152*long
long *const output__input_14680064__0 = (long*) (SharedMem+125829376);  // accumulateMatrices_7_output > implode_broadcastOutput_input_input_14680064 size:= 2097152*long
long *const output1_8388608__end_in__0 = (long*) (SharedMem+8388608);  // broadcastOutput_output1_8388608 > broadcastOutput_end_output1_8388608_end_in size:= 2097152*long
long *const countOut__end_in__0 = (long*) (SharedMem+67108864);  // displayMatrices_countOut > displayMatrices_end_countOut_end_in size:= 1*long
long *const startArray_14680064__inputAr__0 = (long*) (SharedMem+58720384);  // explode_generateMatrices_startArray_startArray_14680064 > accumulateMatrices_7_inputArray size:= 2097152*long
long *const output__input__0 = (long*) (SharedMem+67109120);  // implode_broadcastOutput_input_output > broadcastOutput_input size:= 16777216*long
long *const output__input_4194304__0 = (long*) (SharedMem+83886336);  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_4194304 size:= 2097152*long
long *const countOut__end_in__1 = (long*) (SharedMem+64);  // generateMatrices_countOut > generateMatrices_end_countOut_end_in size:= 1*long
long *const init_out__runningTotal__1 = (long*) (SharedMem+159383808);  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 2097152*long
long *const init_out__runningTotal__0 = (long*) (SharedMem+142606592);  // accumulateMatrices_5_init_runningTotal_init_out > accumulateMatrices_5_runningTotal size:= 2097152*long
long *const output2__outputArray__0 = (long*) (SharedMem+67109120);  // broadcastOutput_output2 > displayMatrices_outputArray size:= 16777216*long
long *const init_out__runningTotal__2 = (long*) (SharedMem+92274944);  // accumulateMatrices_4_init_runningTotal_init_out > accumulateMatrices_4_runningTotal size:= 2097152*long
long *const init_out__countIn__0 = (long*) (SharedMem+67109056);  // displayMatrices_init_countIn_init_out > displayMatrices_countIn size:= 1*long
long *const init_out__runningTotal__7 = (long*) (SharedMem+150995200);  // accumulateMatrices_1_init_runningTotal_init_out > accumulateMatrices_1_runningTotal size:= 2097152*long
long *const init_out__runningTotal__5 = (long*) (SharedMem+134217984);  // accumulateMatrices_0_init_runningTotal_init_out > accumulateMatrices_0_runningTotal size:= 2097152*long
long *const output1_0__end_in__0 = (long*) (SharedMem+33554432);  // broadcastOutput_output1_0 > broadcastOutput_end_output1_0_end_in size:= 2097152*long
long *const startArray_6291456__inputArr__0 = (long*) (SharedMem+176161024);  // explode_generateMatrices_startArray_startArray_6291456 > accumulateMatrices_3_inputArray size:= 2097152*long
long *const init_out__runningTotal__3 = (long*) (SharedMem+117440768);  // accumulateMatrices_7_init_runningTotal_init_out > accumulateMatrices_7_runningTotal size:= 2097152*long
long *const startArray_0__inputArray__0 = (long*) (SharedMem+128);  // explode_generateMatrices_startArray_startArray_0 > accumulateMatrices_0_inputArray size:= 2097152*long
long *const output__input_6291456__0 = (long*) (SharedMem+25165952);  // accumulateMatrices_3_output > implode_broadcastOutput_input_input_6291456 size:= 2097152*long

void core0(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core4 > Core0: accumulateMatrices_1_init_ru__0 
		receiveEnd(4); // Core4 > Core0: accumulateMatrices_1_init_ru__0 
		cache_inv(accumulateMatrices_1_init_ru__0, 8388608*sizeof(char));
		receiveStart(); // Core4 > Core0: displayMatrices_init_countIn__0 
		receiveEnd(4); // Core4 > Core0: displayMatrices_init_countIn__0 
		cache_inv(displayMatrices_init_countIn__0, 4*sizeof(char));
		receiveStart(); // Core7 > Core0: generateMatrices_init_countI__0 
		receiveEnd(7); // Core7 > Core0: generateMatrices_init_countI__0 
		cache_inv(generateMatrices_init_countI__0, 4*sizeof(char));
		generate(4096/*rows*/,4096/*columns*/,startArray__inputArray__0,startTime__startTime__0,init_out__countIn__1,countOut__end_in__1); // generateMatrices
		cache_inv(init_out__countIn__1, 1*sizeof(long));
		cache_wbInv(generateMatrices__generateMa__0, 4*sizeof(char));
		sendStart(7); // Core0 > Core7: generateMatrices__generateMa__0 
		sendEnd(); // Core0 > Core7: generateMatrices__generateMa__0 
		// Fork explode_generateMatrices_startArray
		{
			cache_wb(startArray__inputArray__0, 16777216*sizeof(long));
			memcpy((void*)(startArray_2097152__inputArr__0+0),(void*)( startArray__inputArray__0+2097152), 2097152*sizeof(long));
			memcpy((void*)(startArray_6291456__inputArr__0+0),(void*)( startArray__inputArray__0+6291456), 2097152*sizeof(long));
			memcpy((void*)(startArray_8388608__inputArr__0+0),(void*)( startArray__inputArray__0+8388608), 2097152*sizeof(long));
			memcpy((void*)(startArray_12582912__inputAr__0+0),(void*)( startArray__inputArray__0+12582912), 2097152*sizeof(long));
		}
		cache_wb(((char*)startArray__inputArray__0) + 0, 8388608);
		cache_wb(((char*)startArray__inputArray__0) + 16777216, 8388608);
		cache_wb(((char*)startArray__inputArray__0) + 41943040, 8388608);
		cache_wb(((char*)startArray__inputArray__0) + 58720256, 8388608);
		cache_inv(startArray__inputArray__0, 16777216*sizeof(long));
		cache_wbInv(explode_generateMatrices_sta__5, 8388608*sizeof(char));
		sendStart(5); // Core0 > Core5: explode_generateMatrices_sta__5 
		sendEnd(); // Core0 > Core5: explode_generateMatrices_sta__5 
		cache_wbInv(explode_generateMatrices_sta__1, 8388608*sizeof(char));
		sendStart(3); // Core0 > Core3: explode_generateMatrices_sta__1 
		sendEnd(); // Core0 > Core3: explode_generateMatrices_sta__1 
		cache_wbInv(explode_generateMatrices_sta__3, 8388608*sizeof(char));
		sendStart(1); // Core0 > Core1: explode_generateMatrices_sta__3 
		sendEnd(); // Core0 > Core1: explode_generateMatrices_sta__3 
		cache_wbInv(explode_generateMatrices_sta__7, 8388608*sizeof(char));
		sendStart(2); // Core0 > Core2: explode_generateMatrices_sta__7 
		sendEnd(); // Core0 > Core2: explode_generateMatrices_sta__7 
		cache_wbInv(explode_generateMatrices_sta__6, 8388608*sizeof(char));
		sendStart(6); // Core0 > Core6: explode_generateMatrices_sta__6 
		sendEnd(); // Core0 > Core6: explode_generateMatrices_sta__6 
		cache_wbInv(explode_generateMatrices_sta__2, 8388608*sizeof(char));
		sendStart(4); // Core0 > Core4: explode_generateMatrices_sta__2 
		sendEnd(); // Core0 > Core4: explode_generateMatrices_sta__2 
		cache_wbInv(explode_generateMatrices_sta__0, 8388608*sizeof(char));
		sendStart(7); // Core0 > Core7: explode_generateMatrices_sta__0 
		sendEnd(); // Core0 > Core7: explode_generateMatrices_sta__0 
		add(4096/*rows*/,4096/*columns*/,init_out__runningTotal__7,startArray_2097152__inputArr__0,output__input_2097152__0); // accumulateMatrices_1
		cache_inv(init_out__runningTotal__7, 2097152*sizeof(long));
		cache_inv(startArray_2097152__inputArr__0, 2097152*sizeof(long));
		cache_wbInv(accumulateMatrices_1__implod__0, 8388608*sizeof(char));
		sendStart(7); // Core0 > Core7: accumulateMatrices_1__implod__0 
		sendEnd(); // Core0 > Core7: accumulateMatrices_1__implod__0 
		receiveStart(); // Core7 > Core0: broadcastOutput__broadcastOu__2 
		receiveEnd(7); // Core7 > Core0: broadcastOutput__broadcastOu__2 
		cache_inv(broadcastOutput__broadcastOu__2, 8388608*sizeof(char));
		receiveStart(); // Core7 > Core0: broadcastOutput__displayMatr__0 
		receiveEnd(7); // Core7 > Core0: broadcastOutput__displayMatr__0 
		cache_inv(broadcastOutput__displayMatr__0, 67108864*sizeof(char));
		fifoPush(output1_0__end_in__0, FIFO_Head_broadcastOutput_en__2, 8388608*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__2, 8388608*sizeof(char));
		cache_inv(output1_0__end_in__0, 2097152*sizeof(long));
		display(4096/*rows*/,4096/*columns*/,output2__outputArray__0,startTime__startTime__0,init_out__countIn__0,countOut__end_in__0); // displayMatrices
		cache_inv(output2__outputArray__0, 16777216*sizeof(long));
		cache_inv(startTime__startTime__0, 1*sizeof(double));
		cache_inv(init_out__countIn__0, 1*sizeof(long));
		fifoPush(countOut__end_in__0, FIFO_Head_displayMatrices_en__0, 4*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_displayMatrices_en__0, 4*sizeof(char));
		cache_inv(countOut__end_in__0, 1*sizeof(long));
	}
}
