// rea decompile_all
// name: FUN_0002b6a8
// address: 0x2b6a8
// body: available
// range: 0x2b6a8-0x2b891 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002b6a8(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint in_stack_0000000c;
  int iVar11;
  
  iVar2 = FUN_001d06b8();
  iVar11 = DAT_0002b894;
  if (param_1 == (undefined4 *)0x0) {
    FUN_0002f9d4(s_PTP__resetting_servo_loops_0002b89c);
    FUN_0002b2f8();
    *(int *)(iVar11 + 0x30) = iVar2;
    *(undefined1 *)(iVar11 + 9) = 1;
    FUN_0002bbf4(0);
    return 1;
  }
  if (*(char *)(DAT_0002b894 + 9) != '\0') {
    if ((uint)(iVar2 - *(int *)(DAT_0002b894 + 0x30)) < 0x3e9) {
      return 1;
    }
    *(undefined1 *)(DAT_0002b894 + 9) = 0;
  }
  iVar11 = DAT_0002b8c0;
  puVar1 = DAT_0002b8b8;
  if ((*param_2 != 0 || param_2[1] != 0) || (uVar8 = param_2[2], DAT_0002b898 < uVar8))
  goto LAB_0002b84c;
  if ((char)param_2[3] == '\0') {
    uVar8 = -uVar8;
  }
  if (in_stack_0000000c < 0x19) goto LAB_0002b7d4;
  iVar5 = uVar8 - *(int *)(DAT_0002b8bc + 0x24);
  uVar3 = DAT_0002b8b8[1];
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  uVar6 = *DAT_0002b8b8;
  if ((int)DAT_0002b8b8[4] >> (uVar3 & 0xff) < iVar5) {
    if (uVar6 == 0) {
      if (uVar3 == 0) goto LAB_0002b788;
      DAT_0002b8b8[1] = uVar3 - 1;
      *puVar1 = puVar1[2];
    }
    else {
      *DAT_0002b8b8 = uVar6 - 1;
    }
    if (puVar1[1] != 0) {
      if (*(char *)(iVar11 + 0x1c) != '\0') {
        if ((char)param_2[3] == '\0') {
          uVar7 = 0x2d;
        }
        else {
          uVar7 = 0x20;
        }
        FUN_00002898(DAT_0002b8c4,in_stack_0000000c,uVar7,param_2[2],
                     *(undefined4 *)(DAT_0002b8bc + 8),puVar1[1]);
      }
LAB_0002b7d4:
      *(int *)(DAT_0002b8bc + 0x1c) = *(int *)(DAT_0002b8bc + 0x1c) + 1;
      return 0;
    }
  }
  else if (uVar6 < DAT_0002b8b8[2]) {
    *DAT_0002b8b8 = uVar6 + 1;
  }
  else if (uVar3 < DAT_0002b8b8[3]) {
    DAT_0002b8b8[1] = uVar3 + 1;
    *puVar1 = 0;
  }
LAB_0002b788:
  iVar5 = DAT_0002b8bc;
  iVar10 = ((int)uVar8 >> 1) + (*(int *)(DAT_0002b8bc + 0x24) >> 1);
  *(int *)(DAT_0002b8bc + 0x24) = iVar10;
  iVar4 = FUN_00003e14(iVar10,*(undefined4 *)(iVar5 + 0x28));
  iVar5 = DAT_0002b8bc;
  iVar9 = *(int *)(DAT_0002b8bc + 0x20) + iVar4 * (*(int *)(DAT_0002b8bc + 0x1c) + 1);
  *(int *)(DAT_0002b8bc + 0x20) = iVar9;
  iVar4 = FUN_00003e14(iVar10,*(undefined4 *)(iVar5 + 0x2c));
  iVar4 = iVar4 + iVar9;
  *(undefined4 *)(DAT_0002b8bc + 0x1c) = 0;
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = -iVar4;
  }
  if (iVar5 < DAT_0002b8c8) {
    iVar2 = iVar4;
    if (-1 >= iVar4) {
      iVar2 = -iVar4;
    }
    FUN_0002bbf4(iVar2,-1 < iVar4);
    if (-1 < iVar10) {
      *param_1 = 0;
      param_1[2] = iVar10;
      param_1[1] = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = -iVar10;
    }
    *(bool *)(param_1 + 3) = -1 < iVar10;
    if (*(char *)(iVar11 + 0x1c) == '\0') {
      return 1;
    }
    if ((char)param_2[3] == '\0') {
      uVar7 = 0x2d;
    }
    else {
      uVar7 = 0x20;
    }
    FUN_00002898(DAT_0002b8cc,in_stack_0000000c,uVar7,param_2[2],iVar10,iVar4,
                 *(undefined4 *)(DAT_0002b8bc + 0x20),*(undefined4 *)(DAT_0002b8bc + 8),
                 *(undefined4 *)(DAT_0002b8bc + 0xc));
    return 1;
  }
LAB_0002b84c:
  if ((char)param_2[3] == '\0') {
    uVar7 = 0x2d;
  }
  else {
    uVar7 = 0x20;
  }
  FUN_0002f9d4(DAT_0002b8d0,uVar7,*param_2,param_2[1],param_2[2]);
  FUN_0002b2f8();
  *(int *)(DAT_0002b8bc + 0x78) = *(int *)(DAT_0002b8bc + 0x78) + 1;
  iVar11 = DAT_0002b894;
  *(int *)(DAT_0002b894 + 0x30) = iVar2;
  *(undefined1 *)(iVar11 + 9) = 1;
  FUN_0002bbf4(0);
  FUN_0003c3c2(param_1,param_2);
  return 1;
}

