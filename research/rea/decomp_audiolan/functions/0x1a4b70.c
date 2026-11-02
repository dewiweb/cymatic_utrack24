// rea decompile_all
// name: FUN_001a4b70
// address: 0x1a4b70
// body: available
// range: 0x1a4b70-0x1a4bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a4b70(int *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int *piVar2;
  int unaff_r5;
  int *unaff_r6;
  undefined4 local_28 [2];
  int *piStack_20;
  undefined4 local_1c;
  code *pcStack_18;
  
  piStack_20 = param_1;
  local_1c = param_2;
  pcStack_18 = param_3;
  if (0 < *param_1) {
    piVar2 = (int *)param_1[1];
    iVar1 = piVar2[1];
    unaff_r5 = 0;
    goto LAB_001a4bb4;
  }
  do {
    param_1 = unaff_r6;
    piVar2 = (int *)0x0;
    iVar1 = 0;
LAB_001a4bb4:
    while( true ) {
      if ((piVar2 == (int *)0x0) || (*param_1 <= unaff_r5)) {
        return 0;
      }
      iVar1 = (*param_3)(iVar1,local_28);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_001a4a80(local_1c,local_28[0],0xffffffff);
      piVar2 = (int *)*piVar2;
      unaff_r5 = unaff_r5 + 1;
      unaff_r6 = param_1;
      if ((piVar2 == (int *)0x0) || (*param_1 <= unaff_r5)) break;
      iVar1 = piVar2[1];
    }
  } while( true );
}

