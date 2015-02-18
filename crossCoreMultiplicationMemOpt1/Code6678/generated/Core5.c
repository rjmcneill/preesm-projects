/** 
 * @file Core5.c
 * @generated by C6678CPrinter
 * @date Wed Jan 21 15:07:01 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__5;  // broadcastArrayB > multiplyMatricies_4 size:= 67108864*char defined in Core0
extern char *const explode_generateMatricies_ar__1;  // explode_generateMatricies_arrayA > multiplyMatricies_4 size:= 8388608*char defined in Core0
extern long *const arrayA_8388608__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_8388608 > multiplyMatricies_4_arrayA size:= 2097152*long defined in Core0
extern long *const arrayBOut_67108864__arrayB__0;  // broadcastArrayB_arrayBOut_67108864 > multiplyMatricies_4_arrayB size:= 16777216*long defined in Core0
extern long *const output__arrayC_8388608__0;  // multiplyMatricies_4_output > implode_displayMatrix_arrayC_arrayC_8388608 size:= 2097152*long defined in Core0
extern char *const multiplyMatricies_4__implode__0;  // multiplyMatricies_4 > implode_displayMatrix_arrayC size:= 8388608*char defined in Core0

// Core Global Definitions

void core5(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core5: broadcastArrayB__multiplyMat__5 
		receiveEnd(0); // Core0 > Core5: broadcastArrayB__multiplyMat__5 
		cache_inv(broadcastArrayB__multiplyMat__5, 67108864*sizeof(char));
		receiveStart(); // Core7 > Core5: explode_generateMatricies_ar__1 
		receiveEnd(7); // Core7 > Core5: explode_generateMatricies_ar__1 
		cache_inv(explode_generateMatricies_ar__1, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,arrayA_8388608__arrayA__0,arrayBOut_67108864__arrayB__0,output__arrayC_8388608__0); // multiplyMatricies_4
		cache_inv(arrayA_8388608__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayBOut_67108864__arrayB__0, 16777216*sizeof(long));
		cache_wbInv(multiplyMatricies_4__implode__0, 8388608*sizeof(char));
		sendStart(7); // Core5 > Core7: multiplyMatricies_4__implode__0 
		sendEnd(); // Core5 > Core7: multiplyMatricies_4__implode__0 
	}
}
