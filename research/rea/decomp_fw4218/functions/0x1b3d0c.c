// rea decompile_all
// name: FUN_001b3d0c
// address: 0x1b3d0c
// body: available
// range: 0x1b3d0c-0x1b3db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b3d0c(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_30;
  int *local_2c;
  undefined1 auStack_28 [20];
  
  piVar1 = *(int **)(param_2 + 0x10);
  if ((uint)(*(int *)(param_2 + 0x14) - (int)piVar1 >> 2) <= param_3) {
    local_30 = (int *)0x0;
    local_2c = (int *)0x0;
    FUN_001aaefc(auStack_28,&local_30);
    piVar1 = (int *)0x0;
    FUN_001f00bc(DAT_001b3db8);
    if (local_2c != (int *)0x0) {
      *local_2c = *local_2c + -1;
      if (*local_2c == 0) {
        FUN_001eecc8(local_2c);
        piVar1 = local_30;
      }
      local_30 = (int *)0x0;
      local_2c = (int *)0x0;
    }
    FUN_001f06d4(DAT_001b3db8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    FUN_001aaf30(param_1,auStack_28);
    FUN_001aafac(auStack_28);
    return;
  }
  if (param_3 == 0) {
    iVar4 = *(int *)(param_2 + 0x20);
    iVar3 = *piVar1 + -1;
  }
  else {
    iVar4 = piVar1[param_3 - 1] + 1;
    iVar3 = piVar1[param_3] + -1;
  }
  while (iVar2 = FUN_001c084e(param_2,iVar3), iVar2 == 0x2f) {
    iVar3 = iVar3 + -1;
  }
  FUN_001c0c78(param_1,param_2,iVar4,iVar3);
  return;
}

