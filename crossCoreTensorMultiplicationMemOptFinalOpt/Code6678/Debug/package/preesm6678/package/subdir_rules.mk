################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
configPkg/compiler.opt: ../package/preesm6678/package/build.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_23_04_60/xs" --xdcpath="C:/ti/dsplib_c66x_3_1_0_0/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/imglib_c66x_3_1_1_0/packages;C:/ti/ipc_1_24_03_32/packages;C:/ti/mathlib_c66x_3_0_1_1/packages;C:/ti/mcsdk_2_01_02_05/demos;C:/ti/pdk_C6657_1_1_2_5/packages;C:/ti/pdk_C6670_1_1_2_5/packages;C:/ti/pdk_C6678_1_1_2_5/packages;C:/ti/ndk_2_21_01_38/packages;C:/ti/openem_1_0_0_2/packages;C:/ti/omp_1_01_03_02/packages;C:/ti/bios_6_33_06_50/packages;C:/ti/uia_1_01_00_04/packages;C:/ti/xdais_7_21_01_07/packages;C:/ti/xdais_7_21_01_07/examples;C:/Users/Robert/Development/Ubuntu Dev/workspace/crossCoreTensorMultiplicationMemOptFinalOpt/Code6678/package;C:/ti/ccsv5/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.elf.C66 -p preesm6678 -r release -c "C:/ti/ccsv5/tools/compiler/c6000_7.3.4" "$<"
	@echo 'Finished building: $<'
	@echo ' '

package/preesm6678/package/configPkg/: configPkg/compiler.opt

package/preesm6678/package/package_preesm6678.obj: ../package/preesm6678/package/package_preesm6678.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.3.4/bin/cl6x" -mv6600 -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.3.4/include" --display_error_number --diag_warning=225 --abi=eabi --preproc_with_compile --preproc_dependency="package/preesm6678/package/package_preesm6678.pp" --obj_directory="package/preesm6678/package" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

