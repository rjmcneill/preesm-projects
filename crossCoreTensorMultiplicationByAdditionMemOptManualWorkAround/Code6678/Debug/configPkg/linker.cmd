/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.targets.elf package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"C:\Users\Robert\Development\Ubuntu Dev\workspace\crossCoreTensorMultiplicationByAdditionMemOptManualWorkAround\Code6678\Debug\configPkg\package\cfg\build_pe66.oe66"
-l"C:\ti\xdctools_3_23_04_60\packages\ti\targets\rts6000\lib\ti.targets.rts6000.ae66"
-l"C:\ti\xdctools_3_23_04_60\packages\ti\targets\rts6000\lib\boot.ae66"

--retain="*(xdc.meta)"


--args 0x200
-heap  0x1000
-stack 0x1000

MEMORY
{
    MSMCSRAM (RWX) : org = 0xc000000, len = 0x200000
    L2SRAM (RWX) : org = 0x800000, len = 0x80000
    DDR3 (RWX) : org = 0x80000000, len = 0x80000000
}

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from ti.targets.rts6000 (null): */

/* Content from ti.catalog.c6000 (null): */

/* Content from ti.catalog (null): */

/* Content from ti.catalog.peripherals.hdvicp2 (null): */

/* Content from xdc.platform (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.platforms.generic (null): */

/* Content from preesm6678 (null): */

/* Content from configPkg (null): */


/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__RESETFXN__C = 0;
xdc_runtime_Startup_reset__I = 0;
xdc_runtime_Startup__EXECFXN__C = 0;
xdc_runtime_Startup_exec__E = 0;

SECTIONS
{
    .text: load >> L2SRAM
    .ti.decompress: load > L2SRAM
    .stack: load > L2SRAM
    GROUP: load > L2SRAM
    {
        .bss:
        .neardata:
        .rodata:
    }
    .cinit: load > L2SRAM
    .pinit: load >> L2SRAM
    .init_array: load > L2SRAM
    .const: load >> L2SRAM
    .data: load >> L2SRAM
    .fardata: load >> L2SRAM
    .switch: load >> L2SRAM
    .sysmem: load > L2SRAM
    .far: load >> L2SRAM
    .args: load > L2SRAM align = 0x4, fill = 0 {_argsize = 0x200; }
    .cio: load >> L2SRAM
    .ti.handler_table: load > L2SRAM
    xdc.meta: load >> L2SRAM, type = COPY

}
