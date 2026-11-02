// rea decompile_all
// name: FUN_0017daa0
// address: 0x17daa0
// body: available
// range: 0x17daa0-0x17db07 inclusive
// range: 0x17db38-0x17db3f inclusive
// range: 0x17db58-0x17dc2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0017daa0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = (int *)FUN_0004900c(param_2,1);
  if (piVar2 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar2 + 0x38))();
  }
  switch(param_5) {
  case 0:
  case 2:
  case 3:
  case 5:
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = FUN_001a0808(0x44,1);
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x38) = iVar3;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    if (param_1 == (char *)0x0) {
      param_1 = s_StreamPool_0017dc2c;
    }
    iVar5 = FUN_00061260(iVar3,param_1,param_4,
                         (iVar5 + ((int)(param_3 + 3 + ((uint)(param_3 + 3 >> 0x1f) >> 0x1e)) >> 2))
                         * 4 + 0xc);
    if ((iVar5 != 0) && (piVar2 = (int *)FUN_001a0808(0xc,1), piVar2 != (int *)0x0)) {
      *(char *)(piVar2 + 2) = (char)param_5;
      *(undefined1 *)((int)piVar2 + 9) = param_6;
      piVar4 = (int *)FUN_0004900c(param_2,1);
      uVar1 = 0;
      if (piVar4 != (int *)0x0) {
        uVar1 = (**(code **)(*piVar4 + 0x38))(piVar4);
      }
      *(undefined2 *)((int)piVar2 + 10) = uVar1;
      *piVar2 = iVar3;
      piVar2[1] = iVar3;
      return piVar2;
    }
    FUN_00061624(iVar3);
    FUN_0019f30c(iVar3);
    return (int *)0x0;
  }
  return (int *)0x0;
}

