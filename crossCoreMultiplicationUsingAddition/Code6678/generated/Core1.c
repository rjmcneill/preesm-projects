/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Wed Jan 21 04:32:02 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateMatricies_ar__3;  // explode_generateMatricies_arrayB > multiplyMatricies_2 size:= 8388608*char defined in Core0
extern char *const explode_transposeMatrix_outp__0;  // explode_transposeMatrix_output > multiplyMatricies_2 size:= 8388608*char defined in Core0
extern long *const output_4194304__arrayA__0;  // explode_transposeMatrix_output_output_4194304 > multiplyMatricies_2_arrayA size:= 2097152*long defined in Core0
extern long *const arrayB_4194304__arrayB__0;  // explode_generateMatricies_arrayB_arrayB_4194304 > multiplyMatricies_2_arrayB size:= 2097152*long defined in Core0
extern long *const output__input_33554432__0;  // multiplyMatricies_2_output > implode_sumResults_input_input_33554432 size:= 16777216*long defined in Core0
extern char *const multiplyMatricies_2__implode__0;  // multiplyMatricies_2 > implode_sumResults_input size:= 67108864*char defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core1: explode_generateMatricies_ar__3 
		receiveEnd(0); // Core0 > Core1: explode_generateMatricies_ar__3 
		cache_inv(explode_generateMatricies_ar__3, 8388608*sizeof(char));
		receiveStart(); // Core0 > Core1: explode_transposeMatrix_outp__0 
		receiveEnd(0); // Core0 > Core1: explode_transposeMatrix_outp__0 
		cache_inv(explode_transposeMatrix_outp__0, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,output_4194304__arrayA__0,arrayB_4194304__arrayB__0,output__input_33554432__0); // multiplyMatricies_2
		cache_inv(output_4194304__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayB_4194304__arrayB__0, 2097152*sizeof(long));
		cache_wbInv(multiplyMatricies_2__implode__0, 67108864*sizeof(char));
		sendStart(0); // Core1 > Core0: multiplyMatricies_2__implode__0 
		sendEnd(); // Core1 > Core0: multiplyMatricies_2__implode__0 
	}
}
