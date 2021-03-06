/** 
 * @file Core3.c
 * @generated by C6678CPrinter
 * @date Wed Mar 11 20:42:25 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__4;  // broadcastArrayB > multiplyMatricies_0 size:= 16777216*char defined in Core0
extern char *const explode_generateMatricies_ar__2;  // explode_generateMatricies_arrayA > multiplyMatricies_0 size:= 2097152*char defined in Core0
extern long *const arrayA_0__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_0 > multiplyMatricies_0_arrayA size:= 524288*long defined in Core0
extern long *const arrayBOut_0__arrayB__0;  // broadcastArrayB_arrayBOut_0 > multiplyMatricies_0_arrayB size:= 4194304*long defined in Core0
extern long *const output__arrayC_0__0;  // multiplyMatricies_0_output > implode_displayMatrix_arrayC_arrayC_0 size:= 524288*long defined in Core0
extern char *const multiplyMatricies_0__implode__0;  // multiplyMatricies_0 > implode_displayMatrix_arrayC size:= 2097152*char defined in Core0

// Core Global Definitions

void core3(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core3: broadcastArrayB__multiplyMat__4 
		receiveEnd(0); // Core0 > Core3: broadcastArrayB__multiplyMat__4 
		cache_inv(broadcastArrayB__multiplyMat__4, 16777216*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_generateMatricies_ar__2 
		receiveEnd(0); // Core0 > Core3: explode_generateMatricies_ar__2 
		cache_inv(explode_generateMatricies_ar__2, 2097152*sizeof(char));
		multiply(2048/*rowsA*/,2048/*columnsA*/,2048/*rowsB*/,2048/*columnsB*/,arrayA_0__arrayA__0,arrayBOut_0__arrayB__0,output__arrayC_0__0); // multiplyMatricies_0
		cache_inv(arrayA_0__arrayA__0, 524288*sizeof(long));
		cache_inv(arrayBOut_0__arrayB__0, 4194304*sizeof(long));
		cache_wbInv(multiplyMatricies_0__implode__0, 2097152*sizeof(char));
		sendStart(0); // Core3 > Core0: multiplyMatricies_0__implode__0 
		sendEnd(); // Core3 > Core0: multiplyMatricies_0__implode__0 
	}
}
