// rea decompile_all
// name: FUN_001b17cc
// address: 0x1b17cc
// body: available
// range: 0x1b17cc-0x1b18f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b17cc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 local_12c;
  undefined1 auStack_128 [255];
  undefined1 local_29;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  cVar1 = *DAT_001b18f8;
  if ((cVar1 == '\0') && ((int)puVar3[2] < param_2)) {
    local_12c = 0;
  }
  else {
    local_12c = 1;
  }
  if (local_12c == 0 && *(int *)(DAT_001b18f8 + 4) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar8 = _DAT_001b1918;
    if (cVar1 != '\0') {
      uVar8 = DAT_001b1914;
    }
    iVar4 = FUN_000028f8(auStack_128,0xff,uVar8,*puVar3,param_3,param_4,
                         s___FATAL_TRACE_ERROR__001b18fe + 2);
    goto LAB_001b185a;
  }
  if (param_2 == 1) {
    uVar8 = *puVar3;
joined_r0x001b184a:
    uVar7 = _DAT_001b1918;
    if (cVar1 != '\0') {
      uVar7 = DAT_001b1914;
    }
  }
  else {
    if (param_2 == 2) {
      uVar8 = *puVar3;
      goto joined_r0x001b184a;
    }
    uVar8 = *puVar3;
    uVar7 = DAT_001b193c;
    if (cVar1 != '\0') {
      uVar7 = _DAT_001b18fc;
    }
  }
  iVar4 = FUN_000028f8(auStack_128,0xff,uVar7,uVar8,param_3,param_4);
LAB_001b185a:
  puVar9 = auStack_128 + iVar4;
  iVar5 = FUN_00002858(puVar9,0xff - iVar4,param_5,&stack0x00000004);
  iVar10 = iVar4 + iVar5;
  if (*DAT_001b18f8 != '\0') {
    if (puVar9[iVar5 + -1] == '\n') {
      iVar5 = iVar5 + -1;
    }
    iVar4 = FUN_000028f8(puVar9 + iVar5,(0xff - iVar4) - iVar5,DAT_001b1940);
    iVar10 = iVar10 + iVar4;
  }
  pcVar2 = DAT_001b18f8;
  local_29 = 0;
  piVar6 = *(int **)(DAT_001b18f8 + 4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6,param_2,param_3,auStack_128,iVar10);
  }
  if (local_12c != 0) {
    if ((*pcVar2 == '\0') && (param_2 < 3)) {
      FUN_000028b4(DAT_001b1948,&DAT_001b1944,auStack_128);
    }
    else {
      FUN_00002898(&DAT_001b1944,auStack_128);
    }
  }
  return;
}

