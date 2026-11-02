// rea decompile_all
// name: FUN_001884ac
// address: 0x1884ac
// body: available
// range: 0x1884ac-0x188677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001884ac(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [8];
  
  if (param_3 == 1) {
    param_4 = 1;
LAB_001884ec:
    FUN_00171e90(auStack_20);
    iVar3 = FUN_00189558(param_1,param_4,auStack_20);
    if (iVar3 == 0) {
      uVar4 = FUN_001be9f0(auStack_20);
      FUN_00196de8(param_2,param_4,uVar4);
      FUN_00171ea4(auStack_20);
      return 1;
    }
    FUN_00171ea4();
  }
  else if (param_4 < 0xff) {
    if (param_3 == 2) {
      if (param_4 != 6) {
        if (param_4 == 0x87) {
          param_4 = 0;
          goto LAB_001884ec;
        }
        param_4 = param_4 + 1 & 0xfffeffff;
        goto LAB_001884e4;
      }
      param_4 = 0x80;
    }
    else {
LAB_001884e4:
      if (param_4 < 0x80) goto LAB_001884ec;
      if (0xfe < param_4) goto LAB_0018857c;
    }
    iVar3 = FUN_00189724(param_1,param_4,auStack_20);
    if (iVar3 == 0) {
      FUN_00196e1c(param_2,param_4,auStack_20);
      return 1;
    }
  }
LAB_0018857c:
  if (param_3 == 1) {
    iVar3 = *(int *)(param_1 + 0x158);
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 5) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x158);
      while( true ) {
        if (iVar3 == 0) {
          return 0;
        }
        if (*(ushort *)(iVar3 + 4) == param_4) break;
        iVar3 = *(int *)(iVar3 + 8);
      }
      goto LAB_001885e8;
    }
    iVar3 = *(int *)(param_1 + 0x158);
    if (param_4 != 0) {
      do {
        if (iVar3 == 0) {
          return 0;
        }
        puVar1 = (ushort *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 8);
      } while (*puVar1 != param_4);
    }
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_001885e8:
  cVar2 = *(char *)(iVar3 + 6);
  if (cVar2 == '\0') {
    FUN_00196e1c(param_2,*(undefined2 *)(iVar3 + 4),iVar3 + 0x10);
  }
  else if (cVar2 == '\x01') {
    uVar4 = FUN_001beccc(iVar3 + 0xc);
    FUN_00196de8(param_2,*(undefined2 *)(iVar3 + 4),uVar4);
  }
  else {
    if (cVar2 != '\x02') {
      return 0;
    }
    FUN_00196d70(param_2,*(undefined2 *)(iVar3 + 4),iVar3 + 0xc,param_5);
  }
  return 1;
}

