/** 
 * @file Core0.c
 * @generated by C6678CPrinter
 * @date Thu Feb 26 21:20:58 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const FIFO_Head_generateMatrices_e__0;  // FIFO_Head_generateMatrices_end_countOut > generateMatrices_init_countIn size:= 4*char defined in Core7
extern char *const FIFO_Head_broadcastOutput_en__1;  // FIFO_Head_broadcastOutput_end_output1_512 > accumulateMatrices_1_init_runningTotal size:= 2048*char defined in Core1
extern char *const FIFO_Head_displayMatrices_en__0;  // FIFO_Head_displayMatrices_end_countOut > displayMatrices_init_countIn size:= 4*char defined in Core7

// Core Global Definitions
// Won't work if the shared memory is >= 512 MB 
#pragma DATA_SECTION(SharedMem, ".mySharedMem")
char SharedMem[131520]; //  size:= 131520*char
char *const FIFO_Head_broadcastOutput_en__7 = (char*) (SharedMem+82112);  // FIFO_Head_broadcastOutput_end_output1_1536 > accumulateMatrices_3_init_runningTotal size:= 2048*char
char *const explode_generateMatrices_sta__7 = (char*) (SharedMem+55296);  // explode_generateMatrices_startArray > accumulateMatrices_4 size:= 2048*char
char *const accumulateMatrices_3_init_ru__0 = (char*) (SharedMem+12288);  // accumulateMatrices_3_init_runningTotal > accumulateMatrices_3 size:= 2048*char
char *const accumulateMatrices_2__implod__0 = (char*) (SharedMem+32768);  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 2048*char
char *const accumulateMatrices_6__implod__0 = (char*) (SharedMem+71808);  // accumulateMatrices_6 > implode_broadcastOutput_input size:= 2048*char
char *const accumulateMatrices_5__implod__0 = (char*) (SharedMem+73920);  // accumulateMatrices_5 > implode_broadcastOutput_input size:= 2048*char
char *const broadcastOutput__broadcastOu__1 = (char*) (SharedMem+30720);  // broadcastOutput > broadcastOutput_end_output1_0 size:= 2048*char
char *const generateMatrices__generateMa__0 = (char*) (SharedMem+69696);  // generateMatrices > generateMatrices_end_countOut size:= 4*char
char *const explode_generateMatrices_sta__3 = (char*) (SharedMem+10240);  // explode_generateMatrices_startArray > accumulateMatrices_0 size:= 2048*char
char *const explode_generateMatrices_sta__6 = (char*) (SharedMem+4096);  // explode_generateMatrices_startArray > accumulateMatrices_7 size:= 2048*char
char *const accumulateMatrices_4_init_ru__0 = (char*) (SharedMem+8192);  // accumulateMatrices_4_init_runningTotal > accumulateMatrices_4 size:= 2048*char
char *const generateMatrices__explode_ge__0 = (char*) (SharedMem+36864);  // generateMatrices > explode_generateMatrices_startArray size:= 16384*char
char *const accumulateMatrices_4__implod__0 = (char*) (SharedMem+75968);  // accumulateMatrices_4 > implode_broadcastOutput_input size:= 2048*char
char *const explode_generateMatrices_sta__5 = (char*) (SharedMem+6144);  // explode_generateMatrices_startArray > accumulateMatrices_6 size:= 2048*char
char *const accumulateMatrices_1__implod__0 = (char*) (SharedMem+59392);  // accumulateMatrices_1 > implode_broadcastOutput_input size:= 2048*char
char *const generateMatrices__displayMat__0 = (char*) (SharedMem+63488);  // generateMatrices > displayMatrices size:= 8*char
char *const accumulateMatrices_2_init_ru__0 = (char*) (SharedMem+65600);  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 2048*char
char *const broadcastOutput__broadcastOu__5 = (char*) (SharedMem+80064);  // broadcastOutput > broadcastOutput_end_output1_3072 size:= 2048*char
char *const broadcastOutput__broadcastOu__2 = (char*) (SharedMem+90304);  // broadcastOutput > broadcastOutput_end_output1_1536 size:= 2048*char
char *const accumulateMatrices_7_init_ru__0 = (char*) (SharedMem+104704);  // accumulateMatrices_7_init_runningTotal > accumulateMatrices_7 size:= 2048*char
char *const explode_generateMatrices_sta__0 = (char*) (SharedMem+92352);  // explode_generateMatrices_startArray > accumulateMatrices_1 size:= 2048*char
char *const implode_broadcastOutput_inpu__0 = (char*) (SharedMem+14336);  // implode_broadcastOutput_input > broadcastOutput size:= 16384*char
char *const broadcastOutput__broadcastOu__3 = (char*) (SharedMem+123264);  // broadcastOutput > broadcastOutput_end_output1_1024 size:= 2048*char
char *const accumulateMatrices_6_init_ru__0 = (char*) (SharedMem+84160);  // accumulateMatrices_6_init_runningTotal > accumulateMatrices_6 size:= 2048*char
char *const broadcastOutput__broadcastOu__4 = (char*) (SharedMem+63552);  // broadcastOutput > broadcastOutput_end_output1_512 size:= 2048*char
char *const displayMatrices__displayMatr__0 = (char*) (SharedMem+123200);  // displayMatrices > displayMatrices_end_countOut size:= 4*char
char *const generateMatrices_init_countI__0 = (char*) (SharedMem+125312);  // generateMatrices_init_countIn > generateMatrices size:= 4*char
char *const broadcastOutput__broadcastOu__7 = (char*) (SharedMem+96512);  // broadcastOutput > broadcastOutput_end_output1_2048 size:= 2048*char
char *const broadcastOutput__broadcastOu__0 = (char*) (SharedMem+100608);  // broadcastOutput > broadcastOutput_end_output1_2560 size:= 2048*char
char *const accumulateMatrices_0_init_ru__0 = (char*) (SharedMem+94400);  // accumulateMatrices_0_init_runningTotal > accumulateMatrices_0 size:= 2048*char
char *const explode_generateMatrices_sta__4 = (char*) (SharedMem+61440);  // explode_generateMatrices_startArray > accumulateMatrices_5 size:= 2048*char
char *const explode_generateMatrices_sta__1 = (char*) (SharedMem+125376);  // explode_generateMatrices_startArray > accumulateMatrices_2 size:= 2048*char
char *const broadcastOutput__displayMatr__0 = (char*) (SharedMem+106752);  // broadcastOutput > displayMatrices size:= 16384*char
char *const accumulateMatrices_0__implod__0 = (char*) (SharedMem+57344);  // accumulateMatrices_0 > implode_broadcastOutput_input size:= 2048*char
char *const accumulateMatrices_1_init_ru__0 = (char*) (SharedMem+2048);  // accumulateMatrices_1_init_runningTotal > accumulateMatrices_1 size:= 2048*char
char *const accumulateMatrices_3__implod__0 = (char*) (SharedMem+53248);  // accumulateMatrices_3 > implode_broadcastOutput_input size:= 2048*char
char *const accumulateMatrices_7__implod__0 = (char*) (SharedMem+69760);  // accumulateMatrices_7 > implode_broadcastOutput_input size:= 2048*char
char *const displayMatrices_init_countIn__0 = (char*) (SharedMem+123136);  // displayMatrices_init_countIn > displayMatrices size:= 4*char
char *const broadcastOutput__broadcastOu__6 = (char*) (SharedMem+88256);  // broadcastOutput > broadcastOutput_end_output1_3584 size:= 2048*char
char *const explode_generateMatrices_sta__2 = (char*) (SharedMem+34816);  // explode_generateMatrices_startArray > accumulateMatrices_3 size:= 2048*char
char *const accumulateMatrices_5_init_ru__0 = (char*) (SharedMem+129472);  // accumulateMatrices_5_init_runningTotal > accumulateMatrices_5 size:= 2048*char
long *const output1_1536__end_in__0 = (long*) (SharedMem+90304);  // broadcastOutput_output1_1536 > broadcastOutput_end_output1_1536_end_in size:= 512*long
long *const init_out__runningTotal__7 = (long*) (SharedMem+8192);  // accumulateMatrices_4_init_runningTotal_init_out > accumulateMatrices_4_runningTotal size:= 512*long
long *const output1_3072__end_in__0 = (long*) (SharedMem+80064);  // broadcastOutput_output1_3072 > broadcastOutput_end_output1_3072_end_in size:= 512*long
long *const startArray__inputArray__0 = (long*) (SharedMem+36864);  // generateMatrices_startArray > explode_generateMatrices_startArray_inputArray size:= 4096*long
long *const output__input_3072__0 = (long*) (SharedMem+71808);  // accumulateMatrices_6_output > implode_broadcastOutput_input_input_3072 size:= 512*long
long *const output1_512__end_in__0 = (long*) (SharedMem+63552);  // broadcastOutput_output1_512 > broadcastOutput_end_output1_512_end_in size:= 512*long
long *const startArray_2048__inputArray__0 = (long*) (SharedMem+55296);  // explode_generateMatrices_startArray_startArray_2048 > accumulateMatrices_4_inputArray size:= 512*long
long *const startArray_1024__inputArray__0 = (long*) (SharedMem+125376);  // explode_generateMatrices_startArray_startArray_1024 > accumulateMatrices_2_inputArray size:= 512*long
long *const output2__outputArray__0 = (long*) (SharedMem+106752);  // broadcastOutput_output2 > displayMatrices_outputArray size:= 4096*long
long *const output__input_1536__0 = (long*) (SharedMem+53248);  // accumulateMatrices_3_output > implode_broadcastOutput_input_input_1536 size:= 512*long
long *const init_out__runningTotal__0 = (long*) (SharedMem+65600);  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 512*long
long *const output__input_2560__0 = (long*) (SharedMem+73920);  // accumulateMatrices_5_output > implode_broadcastOutput_input_input_2560 size:= 512*long
long *const startArray_0__inputArray__0 = (long*) (SharedMem+10240);  // explode_generateMatrices_startArray_startArray_0 > accumulateMatrices_0_inputArray size:= 512*long
long *const startArray_512__inputArray__0 = (long*) (SharedMem+92352);  // explode_generateMatrices_startArray_startArray_512 > accumulateMatrices_1_inputArray size:= 512*long
long *const output1_1024__end_in__0 = (long*) (SharedMem+123264);  // broadcastOutput_output1_1024 > broadcastOutput_end_output1_1024_end_in size:= 512*long
long *const output1_2560__end_in__0 = (long*) (SharedMem+100608);  // broadcastOutput_output1_2560 > broadcastOutput_end_output1_2560_end_in size:= 512*long
long *const startArray_1536__inputArray__0 = (long*) (SharedMem+34816);  // explode_generateMatrices_startArray_startArray_1536 > accumulateMatrices_3_inputArray size:= 512*long
long *const init_out__runningTotal__6 = (long*) (SharedMem+12288);  // accumulateMatrices_3_init_runningTotal_init_out > accumulateMatrices_3_runningTotal size:= 512*long
long *const init_out__runningTotal__3 = (long*) (SharedMem+2048);  // accumulateMatrices_1_init_runningTotal_init_out > accumulateMatrices_1_runningTotal size:= 512*long
long *const output__input__0 = (long*) (SharedMem+14336);  // implode_broadcastOutput_input_output > broadcastOutput_input size:= 4096*long
long *const output__input_512__0 = (long*) (SharedMem+59392);  // accumulateMatrices_1_output > implode_broadcastOutput_input_input_512 size:= 512*long
long *const init_out__countIn__1 = (long*) (SharedMem+123136);  // displayMatrices_init_countIn_init_out > displayMatrices_countIn size:= 1*long
long *const init_out__runningTotal__5 = (long*) (SharedMem+129472);  // accumulateMatrices_5_init_runningTotal_init_out > accumulateMatrices_5_runningTotal size:= 512*long
double *const startTime__startTime__0 = (double*) (SharedMem+63488);  // generateMatrices_startTime > displayMatrices_startTime size:= 1*double
long *const init_out__runningTotal__1 = (long*) (SharedMem+84160);  // accumulateMatrices_6_init_runningTotal_init_out > accumulateMatrices_6_runningTotal size:= 512*long
long *const countOut__end_in__0 = (long*) (SharedMem+69696);  // generateMatrices_countOut > generateMatrices_end_countOut_end_in size:= 1*long
long *const startArray_2560__inputArray__0 = (long*) (SharedMem+61440);  // explode_generateMatrices_startArray_startArray_2560 > accumulateMatrices_5_inputArray size:= 512*long
long *const output__input_1024__0 = (long*) (SharedMem+32768);  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_1024 size:= 512*long
long *const init_out__countIn__0 = (long*) (SharedMem+125312);  // generateMatrices_init_countIn_init_out > generateMatrices_countIn size:= 1*long
long *const startArray_3072__inputArray__0 = (long*) (SharedMem+6144);  // explode_generateMatrices_startArray_startArray_3072 > accumulateMatrices_6_inputArray size:= 512*long
long *const output__input_2048__0 = (long*) (SharedMem+75968);  // accumulateMatrices_4_output > implode_broadcastOutput_input_input_2048 size:= 512*long
long *const output1_2048__end_in__0 = (long*) (SharedMem+96512);  // broadcastOutput_output1_2048 > broadcastOutput_end_output1_2048_end_in size:= 512*long
long *const init_out__runningTotal__4 = (long*) (SharedMem+94400);  // accumulateMatrices_0_init_runningTotal_init_out > accumulateMatrices_0_runningTotal size:= 512*long
long *const startArray_3584__inputArray__0 = (long*) (SharedMem+4096);  // explode_generateMatrices_startArray_startArray_3584 > accumulateMatrices_7_inputArray size:= 512*long
long *const countOut__end_in__1 = (long*) (SharedMem+123200);  // displayMatrices_countOut > displayMatrices_end_countOut_end_in size:= 1*long
long *const output1_3584__end_in__0 = (long*) (SharedMem+88256);  // broadcastOutput_output1_3584 > broadcastOutput_end_output1_3584_end_in size:= 512*long
long *const output__input_3584__0 = (long*) (SharedMem+69760);  // accumulateMatrices_7_output > implode_broadcastOutput_input_input_3584 size:= 512*long
long *const output__input_0__0 = (long*) (SharedMem+57344);  // accumulateMatrices_0_output > implode_broadcastOutput_input_input_0 size:= 512*long
long *const output1_0__end_in__0 = (long*) (SharedMem+30720);  // broadcastOutput_output1_0 > broadcastOutput_end_output1_0_end_in size:= 512*long
long *const init_out__runningTotal__2 = (long*) (SharedMem+104704);  // accumulateMatrices_7_init_runningTotal_init_out > accumulateMatrices_7_runningTotal size:= 512*long

void core0(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char));
		fifoPop(init_out__runningTotal__6, FIFO_Head_broadcastOutput_en__7, 2048*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_3_init_ru__0, 2048*sizeof(char));
		sendStart(3); // Core0 > Core3: accumulateMatrices_3_init_ru__0 
		sendEnd(); // Core0 > Core3: accumulateMatrices_3_init_ru__0 
		receiveStart(); // Core5 > Core0: accumulateMatrices_4_init_ru__0 
		receiveEnd(5); // Core5 > Core0: accumulateMatrices_4_init_ru__0 
		cache_inv(accumulateMatrices_4_init_ru__0, 2048*sizeof(char));
		receiveStart(); // Core7 > Core0: displayMatrices_init_countIn__0 
		receiveEnd(7); // Core7 > Core0: displayMatrices_init_countIn__0 
		cache_inv(displayMatrices_init_countIn__0, 4*sizeof(char));
		receiveStart(); // Core7 > Core0: generateMatrices_init_countI__0 
		receiveEnd(7); // Core7 > Core0: generateMatrices_init_countI__0 
		cache_inv(generateMatrices_init_countI__0, 4*sizeof(char));
		generate(64/*rows*/,64/*columns*/,startArray__inputArray__0,startTime__startTime__0,init_out__countIn__0,countOut__end_in__0); // generateMatrices
		cache_inv(init_out__countIn__0, 1*sizeof(long));
		cache_wbInv(generateMatrices__explode_ge__0, 16384*sizeof(char));
		sendStart(7); // Core0 > Core7: generateMatrices__explode_ge__0 
		sendEnd(); // Core0 > Core7: generateMatrices__explode_ge__0 
		receiveStart(); // Core7 > Core0: explode_generateMatrices_sta__7 
		receiveEnd(7); // Core7 > Core0: explode_generateMatrices_sta__7 
		cache_inv(explode_generateMatrices_sta__7, 2048*sizeof(char));
		fifoPush(countOut__end_in__0, FIFO_Head_generateMatrices_e__0, 4*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_generateMatrices_e__0, 4*sizeof(char));
		cache_inv(countOut__end_in__0, 1*sizeof(long));
		add(64/*rows*/,64/*columns*/,init_out__runningTotal__7,startArray_2048__inputArray__0,output__input_2048__0); // accumulateMatrices_4
		cache_inv(init_out__runningTotal__7, 512*sizeof(long));
		cache_inv(startArray_2048__inputArray__0, 512*sizeof(long));
		cache_wbInv(accumulateMatrices_4__implod__0, 2048*sizeof(char));
		sendStart(7); // Core0 > Core7: accumulateMatrices_4__implod__0 
		sendEnd(); // Core0 > Core7: accumulateMatrices_4__implod__0 
		receiveStart(); // Core7 > Core0: broadcastOutput__broadcastOu__4 
		receiveEnd(7); // Core7 > Core0: broadcastOutput__broadcastOu__4 
		cache_inv(broadcastOutput__broadcastOu__4, 2048*sizeof(char));
		receiveStart(); // Core7 > Core0: broadcastOutput__displayMatr__0 
		receiveEnd(7); // Core7 > Core0: broadcastOutput__displayMatr__0 
		cache_inv(broadcastOutput__displayMatr__0, 16384*sizeof(char));
		fifoPush(output1_512__end_in__0, FIFO_Head_broadcastOutput_en__1, 2048*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__1, 2048*sizeof(char));
		cache_inv(output1_512__end_in__0, 512*sizeof(long));
		display(64/*rows*/,64/*columns*/,output2__outputArray__0,startTime__startTime__0,init_out__countIn__1,countOut__end_in__1); // displayMatrices
		cache_inv(output2__outputArray__0, 4096*sizeof(long));
		cache_inv(startTime__startTime__0, 1*sizeof(double));
		cache_inv(init_out__countIn__1, 1*sizeof(long));
		fifoPush(countOut__end_in__1, FIFO_Head_displayMatrices_en__0, 4*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_displayMatrices_en__0, 4*sizeof(char));
		cache_inv(countOut__end_in__1, 1*sizeof(long));
	}
}
