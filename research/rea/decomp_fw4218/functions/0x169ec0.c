// rea decompile_all
// name: FUN_00169ec0
// address: 0x169ec0
// body: available
// range: 0x169ec0-0x16a01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00169ec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_1 == 0) || (iVar1 = param_1[1], param_1[1] == 0)) {
    return 0;
  }
  do {
    iVar2 = iVar1;
    if ((*(byte *)(iVar2 + 100) & 0x80) != 0) break;
    iVar1 = *(int *)(iVar2 + 0x60);
  } while (*(int *)(iVar2 + 0x60) != 0);
  do {
    while( true ) {
      iVar1 = iVar2;
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = FUN_00169870(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,param_11,param_12,param_13,param_14,param_15,param_16);
      if (iVar2 != 0) {
        return 0;
      }
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x5c);
      if (iVar2 == 0) {
        iVar5 = param_1[1];
        iVar4 = 0;
        if (iVar5 == iVar1) {
          return 0;
        }
        do {
          iVar3 = FUN_00172670(iVar1,iVar5);
          iVar2 = iVar5;
          if (0 >= iVar3) {
            iVar2 = iVar4;
          }
          iVar5 = *(int *)(iVar5 + (uint)(0 < iVar3) * 4 + 0x5c);
          iVar4 = iVar2;
        } while (iVar5 != iVar1);
      }
      else {
        while ((*(byte *)(iVar2 + 100) & 0x80) == 0) {
          iVar2 = *(int *)(iVar2 + 0x60);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
    }
    iVar1 = param_1[1];
    if (param_1[1] == 0) {
      return 0;
    }
    do {
      iVar2 = iVar1;
      if ((*(byte *)(iVar2 + 100) & 0x80) != 0) break;
      iVar1 = *(int *)(iVar2 + 0x60);
    } while (*(int *)(iVar2 + 0x60) != 0);
  } while( true );
}

