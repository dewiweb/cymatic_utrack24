// rea decompile_all
// name: FUN_001caf14
// address: 0x1caf14
// body: available
// range: 0x1caf14-0x1cb363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001caf14(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int iStack_28;
  
  iStack_28 = param_4;
  iVar1 = FUN_001c9ccc(param_2,param_5);
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  if ((*(int *)(param_2 + 0x10) != param_4) && (param_3 == 0)) {
    uVar2 = FUN_001c0edc(param_4);
    uVar3 = FUN_001d7b04(&iStack_28,param_5);
    iVar4 = FUN_001d91f4(param_2 + 0x19,uVar3,uVar2);
    if (iVar4 == 0) {
      piVar5 = (int *)FUN_001c0f04(param_4);
      *piVar5 = iVar1;
      piVar5 = (int *)FUN_001d7b4c(param_2);
      if (*piVar5 == param_4) {
        piVar5 = (int *)FUN_001d7b4c(param_2);
        *piVar5 = iVar1;
      }
      goto LAB_001cb010;
    }
  }
  piVar5 = (int *)FUN_001c0ef4(param_4);
  *piVar5 = iVar1;
  if (*(int *)(param_2 + 0x10) == param_4) {
    piVar5 = (int *)FUN_001d7b60(param_2);
    *piVar5 = iVar1;
    piVar5 = (int *)FUN_001d7b4c(param_2);
    *piVar5 = iVar1;
  }
  else {
    piVar5 = (int *)FUN_001d7b38(param_2);
    if (*piVar5 == param_4) {
      piVar5 = (int *)FUN_001d7b38(param_2);
      *piVar5 = iVar1;
    }
  }
LAB_001cb010:
  piVar5 = (int *)FUN_001c0f1c(iVar1);
  *piVar5 = param_4;
  iVar4 = iVar1;
  while (piVar5 = (int *)FUN_001d7b60(param_2), *piVar5 != iVar4) {
    puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
    pcVar7 = (char *)FUN_001c0f00(*puVar6);
    if (*pcVar7 != '\0') break;
    piVar5 = (int *)FUN_001c0f1c(iVar4);
    iVar9 = *piVar5;
    puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
    puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
    piVar5 = (int *)FUN_001c0ef4(*puVar6);
    if (iVar9 == *piVar5) {
      puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
      puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
      piVar5 = (int *)FUN_001c0f04(*puVar6);
      iVar9 = *piVar5;
      if ((iVar9 == 0) || (pcVar7 = (char *)FUN_001c0f00(iVar9), *pcVar7 != '\0')) {
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        piVar5 = (int *)FUN_001c0f04(*puVar6);
        if (*piVar5 == iVar4) {
          piVar5 = (int *)FUN_001c0f1c(iVar4);
          iVar4 = *piVar5;
          FUN_001c9e6c(param_2,iVar4);
        }
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 1;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 0;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        FUN_001c9f74(param_2,*puVar6);
      }
      else {
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 1;
        puVar8 = (undefined1 *)FUN_001c0f00(iVar9);
        *puVar8 = 1;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 0;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        piVar5 = (int *)FUN_001c0f1c(*puVar6);
        iVar4 = *piVar5;
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
      puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
      piVar5 = (int *)FUN_001c0ef4(*puVar6);
      iVar9 = *piVar5;
      if ((iVar9 == 0) || (pcVar7 = (char *)FUN_001c0f00(iVar9), *pcVar7 != '\0')) {
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        piVar5 = (int *)FUN_001c0ef4(*puVar6);
        if (*piVar5 == iVar4) {
          piVar5 = (int *)FUN_001c0f1c(iVar4);
          iVar4 = *piVar5;
          FUN_001c9f74(param_2,iVar4);
        }
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 1;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 0;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        FUN_001c9e6c(param_2,*puVar6);
      }
      else {
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 1;
        puVar8 = (undefined1 *)FUN_001c0f00(iVar9);
        *puVar8 = 1;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        puVar6 = (undefined4 *)FUN_001c0f1c(*puVar6);
        puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
        *puVar8 = 0;
        puVar6 = (undefined4 *)FUN_001c0f1c(iVar4);
        piVar5 = (int *)FUN_001c0f1c(*puVar6);
        iVar4 = *piVar5;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_001d7b60(param_2);
  puVar8 = (undefined1 *)FUN_001c0f00(*puVar6);
  *puVar8 = 1;
  FUN_001c9d7c(param_1,param_2,iVar1);
  return;
}

