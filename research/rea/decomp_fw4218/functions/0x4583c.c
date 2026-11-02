// rea decompile_all
// name: FUN_0004583c
// address: 0x4583c
// body: available
// range: 0x4583c-0x45855 inclusive
// range: 0x45860-0x45941 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004583c(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_3 + param_2;
  if (param_1 == 9) {
switchD_00045854_caseD_2:
    pbVar1 = (byte *)(param_3 + 4);
    while( true ) {
      if ((byte *)(iVar2 + 4) <= pbVar1) {
        return 0;
      }
      uVar3 = (uint)*pbVar1;
      if (0x3f < uVar3) {
        return 0;
      }
      if (uVar3 == 0) break;
      pbVar1 = pbVar1 + uVar3 + 1;
    }
    uVar3 = (uint)(pbVar1 + (1 - (param_3 + 4))) & 0xffff;
    if (uVar3 < 0x101) {
joined_r0x00045934:
      if (param_2 != uVar3) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (param_1 < 10) {
      switch(param_1) {
      default:
        return 1;
      case 1:
        if (param_2 == 4) {
          return 1;
        }
        return 0;
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
        goto switchD_00045854_caseD_2;
      }
    }
    if (param_1 == 0xf) {
      pbVar1 = (byte *)(param_3 + 6);
      while( true ) {
        if ((byte *)(iVar2 + 4) <= pbVar1) {
          return 0;
        }
        uVar3 = (uint)*pbVar1;
        if (0x3f < uVar3) {
          return 0;
        }
        if (uVar3 == 0) break;
        pbVar1 = pbVar1 + uVar3 + 1;
      }
      if (0x100 < ((uint)(pbVar1 + (1 - (param_3 + 6))) & 0xffff)) {
        return 0;
      }
      uVar3 = ((uint)(pbVar1 + (1 - (param_3 + 6))) & 0xffff) + 2;
      goto joined_r0x00045934;
    }
    if (param_1 < 0x10) {
      if (param_1 == 0xc) goto switchD_00045854_caseD_2;
      if ((param_1 != 0xd) && (param_1 != 0xe)) {
        return 1;
      }
    }
    else if (param_1 != 0x10) {
      if (param_1 == 0x1c) {
        if (param_2 != 0x10) {
          return 0;
        }
        return 1;
      }
      if (param_1 != 0x21) {
        return 1;
      }
      pbVar1 = (byte *)(param_3 + 10);
      while( true ) {
        if ((byte *)(iVar2 + 4) <= pbVar1) {
          return 0;
        }
        uVar3 = (uint)*pbVar1;
        if (0x3f < uVar3) {
          return 0;
        }
        if (uVar3 == 0) break;
        pbVar1 = pbVar1 + uVar3 + 1;
      }
      if (0x100 < ((uint)(pbVar1 + (1 - (param_3 + 10))) & 0xffff)) {
        return 0;
      }
      uVar3 = ((uint)(pbVar1 + (1 - (param_3 + 10))) & 0xffff) + 6;
      goto joined_r0x00045934;
    }
    if (param_2 != 0) {
      for (pbVar1 = (byte *)(param_3 + 4); pbVar1 < (byte *)(iVar2 + 4);
          pbVar1 = pbVar1 + *pbVar1 + 1) {
      }
      if (pbVar1 == (byte *)(iVar2 + 4)) {
        return 1;
      }
    }
  }
  return 0;
}

