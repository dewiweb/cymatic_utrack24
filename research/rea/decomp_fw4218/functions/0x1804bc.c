// rea decompile_all
// name: FUN_001804bc
// address: 0x1804bc
// body: available
// range: 0x1804bc-0x1805bb inclusive
// range: 0x1a0184-0x1a01b3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001804bc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_lr;
  bool bVar10;
  
  uVar7 = *(uint *)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  uVar1 = FUN_001d06b8();
  bVar10 = *(char *)(param_2 + 0x2d) == '\0';
  uVar2 = uVar1;
  if (bVar10) {
    uVar2 = (uint)*(byte *)(param_1 + 2);
  }
  if (!bVar10 || uVar2 != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  uVar9 = param_1[0xc];
  uVar5 = uVar7 + uVar1 * -1000;
  iVar4 = param_1[0xd];
  iVar6 = iVar8 - (uint)(uVar7 < uVar1 * 1000);
  uVar2 = uVar5 - uVar9;
  iVar3 = iVar6 - (iVar4 + (uint)(uVar5 < uVar9));
  if (iVar3 < 0) {
    bVar10 = uVar2 != 0;
    uVar2 = -uVar2;
    iVar3 = -(iVar3 + (uint)bVar10);
  }
  if (uVar9 == 0 && iVar4 == 0) {
    param_1[0xc] = uVar5;
    param_1[0xd] = iVar6;
  }
  else if ((int)-(iVar3 + (uint)(500 < uVar2)) < 0 ==
           (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(500 < uVar2)))) {
    uVar2 = (uint)((ulonglong)uVar9 * 3);
    iVar3 = iVar4 * 3 + (int)((ulonglong)uVar9 * 3 >> 0x20) + iVar6 + (uint)CARRY4(uVar2,uVar5);
    param_1[0xd] = iVar3 >> 2;
    param_1[0xc] = uVar2 + uVar5 >> 2 | iVar3 * 0x40000000;
  }
  else {
    iVar3 = iVar4 + iVar6 + (uint)CARRY4(uVar9,uVar5);
    param_1[0xc] = (uint)((byte)iVar3 & 1) << 0x1f | uVar9 + uVar5 >> 1;
    param_1[0xd] = iVar3 >> 1;
  }
  param_1[6] = uVar1 * 1000;
  param_1[7] = 0;
  param_1[8] = uVar7;
  param_1[9] = iVar8;
  param_1[1] = *(int *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x2c);
  if (*(char *)(param_2 + 0x2d) != '\0') {
    param_1 = (int *)*param_1;
    FUN_0019457c(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1,0x13,DAT_001a01b4,
                 unaff_lr);
    return;
  }
  return;
}

