// rea decompile_all
// name: FUN_0014b650
// address: 0x14b650
// body: available
// range: 0x14b650-0x14b903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0014b650(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  iVar6 = param_1 + 0x128;
  iVar2 = FUN_0016053c(param_2);
  if (iVar6 != iVar2) {
    local_1c = *(int *)(param_1 + 0x138);
    local_20 = *(char **)(local_1c + 8);
    FUN_001c1044(auStack_18,iVar6,&local_20,&local_1c);
    iVar6 = FUN_001c1774(iVar6,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),
                         *(undefined4 *)(param_1 + 0x138));
    *(int *)(*(int *)(param_1 + 0x138) + 4) = iVar6;
    iVar5 = *(int *)(param_1 + 0x138);
    if (iVar6 == 0) {
      *(int *)(iVar5 + 8) = iVar5;
      *(int *)(*(int *)(param_1 + 0x138) + 0xc) = *(int *)(param_1 + 0x138);
    }
    else {
      do {
        iVar3 = iVar6;
        iVar6 = *(int *)(iVar3 + 8);
      } while (iVar6 != 0);
      *(int *)(iVar5 + 8) = iVar3;
      iVar6 = *(int *)(*(int *)(param_1 + 0x138) + 4);
      do {
        iVar5 = iVar6;
        iVar6 = *(int *)(iVar5 + 0xc);
      } while (iVar6 != 0);
      *(int *)(*(int *)(param_1 + 0x138) + 0xc) = iVar5;
    }
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar2 + 0x14);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x138) + 8);
  while (iVar2 != *(int *)(param_1 + 0x138)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      for (iVar6 = *(int *)(iVar2 + 4); iVar2 == *(int *)(iVar6 + 0xc); iVar6 = *(int *)(iVar6 + 4))
      {
        iVar2 = iVar6;
      }
      if (*(int *)(iVar2 + 0xc) != iVar6) {
        iVar2 = iVar6;
      }
    }
    else {
      iVar6 = *(int *)(iVar2 + 0xc);
      do {
        piVar1 = (int *)(iVar6 + 8);
        iVar2 = iVar6;
        iVar6 = *piVar1;
      } while (*piVar1 != 0);
    }
  }
  uVar4 = FUN_00160438(param_2);
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar6 = FUN_001605c8(param_2,s_g_WarpSystemGlobals_0014b904);
  iVar2 = DAT_0014b918;
  *(int *)(param_1 + 0x148) = *(int *)(iVar6 + 4) + *(int *)(param_1 + 4);
  **(undefined4 **)(iVar2 + 0xc) = 0;
  **(undefined4 **)(iVar2 + 0x10) = 0x7fffffff;
  **(undefined4 **)(iVar2 + 8) = 0x40000;
  **(uint **)(iVar2 + 4) = **(uint **)(iVar2 + 4) | 0x10000;
  iVar2 = FUN_00160384(param_2);
  iVar2 = FUN_00080aa8(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(iVar2 + 0x18));
  if (iVar2 == 0) {
    return 0xffffff8e;
  }
  iVar2 = FUN_001605c8(param_2,s__gp_disp_0014b91c);
  if (iVar2 == 0) {
    return 0xffffff8e;
  }
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(iVar2 + 4);
  if (*(char *)(param_1 + 0x168) == '\0') {
    local_20 = s_stack_0014b928;
    iVar2 = FUN_0005a9c8(*(undefined4 *)(param_1 + 0x20),0x1000,0xffffffff,2);
    if (iVar2 == 0) {
      return 0xffffff8e;
    }
    iVar2 = (iVar2 - *(int *)(param_1 + 4)) + 0x1000;
  }
  else {
    if (*(char *)(param_1 + 0x168) != '\x01') {
      return 0xffffff8e;
    }
    local_20 = s_stack_0014b928;
    iVar2 = FUN_0005a9c8(*(undefined4 *)(param_1 + 0x20),0x100,0xffffffff,2);
    if (iVar2 == 0) {
      return 0xffffff8e;
    }
    FUN_00003850(iVar2,0x100,DAT_0014b930);
    iVar2 = (iVar2 - *(int *)(param_1 + 4)) + 0x100;
  }
  *(int *)(param_1 + 0x170) = iVar2;
  iVar2 = FUN_00080808(*(undefined4 *)(param_1 + 0x120),0x1c,*(undefined4 *)(param_1 + 0x16c));
  if (((iVar2 != 0) &&
      (iVar2 = FUN_00080808(*(undefined4 *)(param_1 + 0x120),0x1d,*(undefined4 *)(param_1 + 0x170)),
      iVar2 != 0)) && (iVar2 = FUN_00080808(*(undefined4 *)(param_1 + 0x120),0x19,0), iVar2 != 0)) {
    return 0;
  }
  return 0xffffff8e;
}

