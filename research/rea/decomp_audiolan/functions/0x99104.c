// rea decompile_all
// name: FUN_00099104
// address: 0x99104
// body: available
// range: 0x99104-0x992f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00099104(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int local_68 [17];
  
  *(undefined1 *)(param_2 + 0x10) = 9;
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined4 *)(param_2 + 0x14) = 8;
  *(undefined4 *)(param_2 + 0x1c) = 4;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_1 + 0x102);
  if ((char)param_1[0x3e] == '\0') {
    thunk_FUN_000028a4(s_ERROR__readInputCfg__I2S_not_sup_000992f8);
  }
  uVar3 = FUN_00157330(param_1 + 0x43);
  uVar3 = uVar3 >> 3;
  uVar4 = FUN_00157330(param_1 + 0x43);
  puVar1 = DAT_00099330;
  if (uVar3 * 8 < uVar4) {
    uVar3 = uVar3 + 1;
  }
  iVar5 = 0;
  if (uVar3 != 0) {
    *DAT_00099330 = 0x96;
    iVar8 = DAT_00099334;
    iVar5 = 1;
    if (1 < uVar3) {
      iVar5 = 2;
      puVar1[1] = (uint)*(byte *)(DAT_00099334 + 1);
    }
    if (2 < uVar3) {
      puVar1[iVar5] = (uint)*(byte *)(iVar8 + iVar5);
      iVar5 = iVar5 + 1;
    }
    if (3 < uVar3) {
      uVar3 = 3;
    }
  }
  param_1[0x93] = uVar3 << 3;
  puVar1[iVar5] = 0xffffffff;
  puVar2 = DAT_00099338;
  iVar8 = param_1[0x93];
  iVar5 = 0;
  if (iVar8 != 0) {
    puVar9 = DAT_00099338 + 1;
    puVar10 = DAT_00099338 + 3;
    puVar11 = DAT_00099338;
    puVar12 = DAT_00099338 + 2;
    do {
      *puVar11 = (char)iVar5;
      *puVar9 = (char)iVar5;
      *puVar12 = 5;
      iVar8 = iVar8 + -1;
      iVar5 = iVar5 + 1;
      *puVar10 = 0;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 4;
      puVar11 = puVar11 + 4;
      puVar12 = puVar12 + 4;
    } while (iVar8 != 0);
    iVar5 = param_1[0x93];
  }
  puVar2[iVar5 * 4] = 0xff;
  piVar6 = (int *)param_1[0x48];
  uVar3 = 0;
  if ((int *)param_1[0x49] != piVar6) {
    do {
      if (*piVar6 != 0xff) {
        local_68[uVar3] = *piVar6;
        uVar3 = uVar3 + 1;
        if (0xf < uVar3) goto LAB_00099278;
      }
      piVar6 = piVar6 + 1;
    } while ((int *)param_1[0x49] != piVar6);
    if (0xf < uVar3) goto LAB_00099278;
  }
  local_68[uVar3] = 0xff;
LAB_00099278:
  iVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,*puVar1,DAT_00099330,DAT_0009933c,param_1 + 0x5a);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = FUN_0009962c(param_1,param_2,DAT_00099338);
  if (iVar5 != 0) {
    FUN_000ac974(param_1[0x2b],local_68);
    uVar7 = FUN_00045014(local_68);
    FUN_000e2080(param_1[1],uVar7);
    return 1;
  }
  return 0;
}

