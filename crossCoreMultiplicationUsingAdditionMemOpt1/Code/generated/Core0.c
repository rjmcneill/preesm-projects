/** 
 * @file Core0.c
 * @generated by InstrumentedCPrinter
 * @date Sat Dec 13 22:49:58 GMT 2014
 */

#include "../include/x86.h"

// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;

// Core Global Definitions
char SharedMem[3328]; //  size:= 3328*char
char *const multiplyMatricies_1__implode__0 = (char*) (SharedMem+1568);  // multiplyMatricies_1 > implode_displayMatrix_arrayC size:= 32*char
char *const explode_generateMatricies_ar__2 = (char*) (SharedMem+800);  // explode_generateMatricies_arrayA > multiplyMatricies_6 size:= 32*char
char *const explode_generateMatricies_ar__0 = (char*) (SharedMem+1120);  // explode_generateMatricies_arrayA > multiplyMatricies_1 size:= 32*char
char *const broadcastArrayB__multiplyMat__6 = (char*) (SharedMem+544);  // broadcastArrayB > multiplyMatricies_0 size:= 256*char
char *const explode_generateMatricies_ar__6 = (char*) (SharedMem+0);  // explode_generateMatricies_arrayA > multiplyMatricies_0 size:= 32*char
char *const explode_generateMatricies_ar__3 = (char*) (SharedMem+1600);  // explode_generateMatricies_arrayA > multiplyMatricies_2 size:= 32*char
char *const broadcastArrayB__multiplyMat__2 = (char*) (SharedMem+32);  // broadcastArrayB > multiplyMatricies_6 size:= 256*char
char *const multiplyMatricies_4__implode__0 = (char*) (SharedMem+1152);  // multiplyMatricies_4 > implode_displayMatrix_arrayC size:= 32*char
char *const multiplyMatricies_2__implode__0 = (char*) (SharedMem+1216);  // multiplyMatricies_2 > implode_displayMatrix_arrayC size:= 32*char
char *const explode_generateMatricies_ar__1 = (char*) (SharedMem+832);  // explode_generateMatricies_arrayA > multiplyMatricies_5 size:= 32*char
char *const explode_generateMatricies_ar__4 = (char*) (SharedMem+1984);  // explode_generateMatricies_arrayA > multiplyMatricies_3 size:= 32*char
char *const explode_generateMatricies_ar__7 = (char*) (SharedMem+1888);  // explode_generateMatricies_arrayA > multiplyMatricies_4 size:= 32*char
char *const broadcastArrayB__multiplyMat__5 = (char*) (SharedMem+1280);  // broadcastArrayB > multiplyMatricies_7 size:= 256*char
char *const broadcastArrayB__multiplyMat__4 = (char*) (SharedMem+2304);  // broadcastArrayB > multiplyMatricies_2 size:= 256*char
char *const multiplyMatricies_7__implode__0 = (char*) (SharedMem+1952);  // multiplyMatricies_7 > implode_displayMatrix_arrayC size:= 32*char
char *const multiplyMatricies_0__implode__0 = (char*) (SharedMem+1536);  // multiplyMatricies_0 > implode_displayMatrix_arrayC size:= 32*char
char *const implode_displayMatrix_arrayC__0 = (char*) (SharedMem+1632);  // implode_displayMatrix_arrayC > displayMatrix size:= 256*char
char *const broadcastArrayB__multiplyMat__7 = (char*) (SharedMem+288);  // broadcastArrayB > multiplyMatricies_5 size:= 256*char
char *const generateMatricies__explode_g__0 = (char*) (SharedMem+864);  // generateMatricies > explode_generateMatricies_arrayA size:= 256*char
char *const broadcastArrayB__multiplyMat__1 = (char*) (SharedMem+3072);  // broadcastArrayB > multiplyMatricies_1 size:= 256*char
char *const multiplyMatricies_3__implode__0 = (char*) (SharedMem+1248);  // multiplyMatricies_3 > implode_displayMatrix_arrayC size:= 32*char
char *const multiplyMatricies_5__implode__0 = (char*) (SharedMem+1184);  // multiplyMatricies_5 > implode_displayMatrix_arrayC size:= 32*char
char *const broadcastArrayB__multiplyMat__3 = (char*) (SharedMem+2016);  // broadcastArrayB > multiplyMatricies_3 size:= 256*char
char *const multiplyMatricies_6__implode__0 = (char*) (SharedMem+1920);  // multiplyMatricies_6 > implode_displayMatrix_arrayC size:= 32*char
char *const generateMatricies__broadcast__0 = (char*) (SharedMem+2560);  // generateMatricies > broadcastArrayB size:= 256*char
char *const broadcastArrayB__multiplyMat__0 = (char*) (SharedMem+2816);  // broadcastArrayB > multiplyMatricies_4 size:= 256*char
char *const explode_generateMatricies_ar__5 = (char*) (SharedMem+2272);  // explode_generateMatricies_arrayA > multiplyMatricies_7 size:= 32*char
long *const arrayA_0__arrayA__0 = (long*) (SharedMem+0);  // explode_generateMatricies_arrayA_arrayA_0 > multiplyMatricies_0_arrayA size:= 8*long
long *const arrayBOut_0__arrayB__0 = (long*) (SharedMem+544);  // broadcastArrayB_arrayBOut_0 > multiplyMatricies_0_arrayB size:= 64*long
long *const arrayA_32__arrayA__0 = (long*) (SharedMem+1888);  // explode_generateMatricies_arrayA_arrayA_32 > multiplyMatricies_4_arrayA size:= 8*long
long *const output__arrayC_24__0 = (long*) (SharedMem+1248);  // multiplyMatricies_3_output > implode_displayMatrix_arrayC_arrayC_24 size:= 8*long
long *const output__arrayC_32__0 = (long*) (SharedMem+1152);  // multiplyMatricies_4_output > implode_displayMatrix_arrayC_arrayC_32 size:= 8*long
long *const output__arrayC_8__0 = (long*) (SharedMem+1568);  // multiplyMatricies_1_output > implode_displayMatrix_arrayC_arrayC_8 size:= 8*long
long *const arrayBOut_384__arrayB__0 = (long*) (SharedMem+32);  // broadcastArrayB_arrayBOut_384 > multiplyMatricies_6_arrayB size:= 64*long
long *const arrayA_56__arrayA__0 = (long*) (SharedMem+2272);  // explode_generateMatricies_arrayA_arrayA_56 > multiplyMatricies_7_arrayA size:= 8*long
long *const output__arrayC_48__0 = (long*) (SharedMem+1920);  // multiplyMatricies_6_output > implode_displayMatrix_arrayC_arrayC_48 size:= 8*long
long *const arrayA_24__arrayA__0 = (long*) (SharedMem+1984);  // explode_generateMatricies_arrayA_arrayA_24 > multiplyMatricies_3_arrayA size:= 8*long
long *const arrayBOut_64__arrayB__0 = (long*) (SharedMem+3072);  // broadcastArrayB_arrayBOut_64 > multiplyMatricies_1_arrayB size:= 64*long
long *const arrayA__arrayA__0 = (long*) (SharedMem+864);  // generateMatricies_arrayA > explode_generateMatricies_arrayA_arrayA size:= 64*long
long *const output__arrayC_40__0 = (long*) (SharedMem+1184);  // multiplyMatricies_5_output > implode_displayMatrix_arrayC_arrayC_40 size:= 8*long
long *const arrayA_48__arrayA__0 = (long*) (SharedMem+800);  // explode_generateMatricies_arrayA_arrayA_48 > multiplyMatricies_6_arrayA size:= 8*long
long *const arrayB__arrayBIn__0 = (long*) (SharedMem+2560);  // generateMatricies_arrayB > broadcastArrayB_arrayBIn size:= 64*long
long *const arrayBOut_320__arrayB__0 = (long*) (SharedMem+288);  // broadcastArrayB_arrayBOut_320 > multiplyMatricies_5_arrayB size:= 64*long
long *const output__arrayC__0 = (long*) (SharedMem+1632);  // implode_displayMatrix_arrayC_output > displayMatrix_arrayC size:= 64*long
long *const output__arrayC_0__0 = (long*) (SharedMem+1536);  // multiplyMatricies_0_output > implode_displayMatrix_arrayC_arrayC_0 size:= 8*long
long *const arrayBOut_256__arrayB__0 = (long*) (SharedMem+2816);  // broadcastArrayB_arrayBOut_256 > multiplyMatricies_4_arrayB size:= 64*long
long *const arrayA_40__arrayA__0 = (long*) (SharedMem+832);  // explode_generateMatricies_arrayA_arrayA_40 > multiplyMatricies_5_arrayA size:= 8*long
long *const output__arrayC_56__0 = (long*) (SharedMem+1952);  // multiplyMatricies_7_output > implode_displayMatrix_arrayC_arrayC_56 size:= 8*long
long *const output__arrayC_16__0 = (long*) (SharedMem+1216);  // multiplyMatricies_2_output > implode_displayMatrix_arrayC_arrayC_16 size:= 8*long
long *const arrayA_8__arrayA__0 = (long*) (SharedMem+1120);  // explode_generateMatricies_arrayA_arrayA_8 > multiplyMatricies_1_arrayA size:= 8*long
long *const arrayBOut_128__arrayB__0 = (long*) (SharedMem+2304);  // broadcastArrayB_arrayBOut_128 > multiplyMatricies_2_arrayB size:= 64*long
long *const arrayA_16__arrayA__0 = (long*) (SharedMem+1600);  // explode_generateMatricies_arrayA_arrayA_16 > multiplyMatricies_2_arrayA size:= 8*long
long *const arrayBOut_192__arrayB__0 = (long*) (SharedMem+2016);  // broadcastArrayB_arrayBOut_192 > multiplyMatricies_3_arrayB size:= 64*long
long *const arrayBOut_448__arrayB__0 = (long*) (SharedMem+1280);  // broadcastArrayB_arrayBOut_448 > multiplyMatricies_7_arrayB size:= 64*long
long dumpedTimes[14]; //  size:= 14*long
int nbExec[14]; //  size:= 14*int
int idx;

void *computationThread_Core0(void *arg){
	// Initialisation(s)
	initNbExec(nbExec,14/*nbDump*/); // 

	// Begin the execution loop 
	while(1){
		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		dumpTime(0/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+1); idx++){
			generate(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA__arrayA__0,arrayB__arrayBIn__0); // generateMatricies
		}
		dumpTime(1/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+2); idx++){
			// Broadcast broadcastArrayB
			{
				memcpy(arrayBOut_0__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_64__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_128__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_192__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_256__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_320__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_384__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
				memcpy(arrayBOut_448__arrayB__0+0, arrayB__arrayBIn__0+0, 64*sizeof(long));
			}
		}
		dumpTime(2/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+3); idx++){
			// Fork explode_generateMatricies_arrayA
			{
				memcpy(arrayA_0__arrayA__0+0, arrayA__arrayA__0+0, 8*sizeof(long));
				memcpy(arrayA_8__arrayA__0+0, arrayA__arrayA__0+8, 8*sizeof(long));
				memcpy(arrayA_16__arrayA__0+0, arrayA__arrayA__0+16, 8*sizeof(long));
				memcpy(arrayA_24__arrayA__0+0, arrayA__arrayA__0+24, 8*sizeof(long));
				memcpy(arrayA_32__arrayA__0+0, arrayA__arrayA__0+32, 8*sizeof(long));
				memcpy(arrayA_40__arrayA__0+0, arrayA__arrayA__0+40, 8*sizeof(long));
				memcpy(arrayA_48__arrayA__0+0, arrayA__arrayA__0+48, 8*sizeof(long));
				memcpy(arrayA_56__arrayA__0+0, arrayA__arrayA__0+56, 8*sizeof(long));
			}
		}
		dumpTime(3/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+4); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_0__arrayA__0,arrayBOut_0__arrayB__0,output__arrayC_0__0); // multiplyMatricies_0
		}
		dumpTime(4/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+5); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_8__arrayA__0,arrayBOut_64__arrayB__0,output__arrayC_8__0); // multiplyMatricies_1
		}
		dumpTime(5/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+6); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_16__arrayA__0,arrayBOut_128__arrayB__0,output__arrayC_16__0); // multiplyMatricies_2
		}
		dumpTime(6/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+7); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_24__arrayA__0,arrayBOut_192__arrayB__0,output__arrayC_24__0); // multiplyMatricies_3
		}
		dumpTime(7/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+8); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_32__arrayA__0,arrayBOut_256__arrayB__0,output__arrayC_32__0); // multiplyMatricies_4
		}
		dumpTime(8/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+9); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_40__arrayA__0,arrayBOut_320__arrayB__0,output__arrayC_40__0); // multiplyMatricies_5
		}
		dumpTime(9/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+10); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_48__arrayA__0,arrayBOut_384__arrayB__0,output__arrayC_48__0); // multiplyMatricies_6
		}
		dumpTime(10/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+11); idx++){
			multiply(8/*rowsA*/,8/*columnsA*/,8/*rowsB*/,8/*columnsB*/,arrayA_56__arrayA__0,arrayBOut_448__arrayB__0,output__arrayC_56__0); // multiplyMatricies_7
		}
		dumpTime(11/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+12); idx++){
			// Join implode_displayMatrix_arrayC
			{
				memcpy(output__arrayC__0+0, output__arrayC_0__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+8, output__arrayC_8__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+16, output__arrayC_16__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+24, output__arrayC_24__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+32, output__arrayC_32__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+40, output__arrayC_40__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+48, output__arrayC_48__0+0, 8*sizeof(long));
				memcpy(output__arrayC__0+56, output__arrayC_56__0+0, 8*sizeof(long));
			}
		}
		dumpTime(12/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+13); idx++){
			display(8/*rowsA*/,8/*columnsB*/,output__arrayC__0); // displayMatrix
		}
		dumpTime(13/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
		writeTime(dumpedTimes,14/*nbDump*/, nbExec);
	}
}
