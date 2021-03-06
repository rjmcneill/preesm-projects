/** 
 * @file Core4.c
 * @generated by C6678CPrinter
 * @date Wed Jan 21 15:07:01 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__0;  // broadcastArrayB > multiplyMatricies_2 size:= 67108864*char defined in Core0
extern char *const explode_generateMatricies_ar__2;  // explode_generateMatricies_arrayA > multiplyMatricies_2 size:= 8388608*char defined in Core0
extern long *const arrayA_4194304__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_4194304 > multiplyMatricies_2_arrayA size:= 2097152*long defined in Core0
extern long *const arrayBOut_33554432__arrayB__0;  // broadcastArrayB_arrayBOut_33554432 > multiplyMatricies_2_arrayB size:= 16777216*long defined in Core0
extern long *const output__arrayC_4194304__0;  // multiplyMatricies_2_output > implode_displayMatrix_arrayC_arrayC_4194304 size:= 2097152*long defined in Core0
extern char *const multiplyMatricies_2__implode__0;  // multiplyMatricies_2 > implode_displayMatrix_arrayC size:= 8388608*char defined in Core0

// Core Global Definitions

void core4(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core4: broadcastArrayB__multiplyMat__0 
		receiveEnd(0); // Core0 > Core4: broadcastArrayB__multiplyMat__0 
		cache_inv(broadcastArrayB__multiplyMat__0, 67108864*sizeof(char));
		receiveStart(); // Core7 > Core4: explode_generateMatricies_ar__2 
		receiveEnd(7); // Core7 > Core4: explode_generateMatricies_ar__2 
		cache_inv(explode_generateMatricies_ar__2, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,arrayA_4194304__arrayA__0,arrayBOut_33554432__arrayB__0,output__arrayC_4194304__0); // multiplyMatricies_2
		cache_inv(arrayA_4194304__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayBOut_33554432__arrayB__0, 16777216*sizeof(long));
		cache_wbInv(multiplyMatricies_2__implode__0, 8388608*sizeof(char));
		sendStart(7); // Core4 > Core7: multiplyMatricies_2__implode__0 
		sendEnd(); // Core4 > Core7: multiplyMatricies_2__implode__0 
	}
}
