/** 
 * @file Core7.c
 * @generated by C6678CPrinter
 * @date Tue Jan 20 22:29:44 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__7;  // broadcastArrayB > multiplyMatricies_6 size:= 16777216*char defined in Core0
extern char *const explode_generateMatricies_ar__3;  // explode_generateMatricies_arrayA > multiplyMatricies_6 size:= 2097152*char defined in Core0
extern long *const arrayA_3145728__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_3145728 > multiplyMatricies_6_arrayA size:= 524288*long defined in Core0
extern long *const arrayBOut_25165824__arrayB__0;  // broadcastArrayB_arrayBOut_25165824 > multiplyMatricies_6_arrayB size:= 4194304*long defined in Core0
extern long *const output__arrayC_3145728__0;  // multiplyMatricies_6_output > implode_displayMatrix_arrayC_arrayC_3145728 size:= 524288*long defined in Core0
extern char *const multiplyMatricies_6__implode__0;  // multiplyMatricies_6 > implode_displayMatrix_arrayC size:= 2097152*char defined in Core0

// Core Global Definitions

void core7(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core7: broadcastArrayB__multiplyMat__7 
		receiveEnd(0); // Core0 > Core7: broadcastArrayB__multiplyMat__7 
		cache_inv(broadcastArrayB__multiplyMat__7, 16777216*sizeof(char));
		receiveStart(); // Core0 > Core7: explode_generateMatricies_ar__3 
		receiveEnd(0); // Core0 > Core7: explode_generateMatricies_ar__3 
		cache_inv(explode_generateMatricies_ar__3, 2097152*sizeof(char));
		multiply(2048/*rowsA*/,2048/*columnsA*/,2048/*rowsB*/,2048/*columnsB*/,arrayA_3145728__arrayA__0,arrayBOut_25165824__arrayB__0,output__arrayC_3145728__0); // multiplyMatricies_6
		cache_inv(arrayA_3145728__arrayA__0, 524288*sizeof(long));
		cache_inv(arrayBOut_25165824__arrayB__0, 4194304*sizeof(long));
		cache_wbInv(multiplyMatricies_6__implode__0, 2097152*sizeof(char));
		sendStart(0); // Core7 > Core0: multiplyMatricies_6__implode__0 
		sendEnd(); // Core7 > Core0: multiplyMatricies_6__implode__0 
	}
}
