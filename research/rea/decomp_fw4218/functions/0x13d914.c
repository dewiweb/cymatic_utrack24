// rea decompile_all
// name: FUN_0013d914
// address: 0x13d914
// body: available
// range: 0x13d914-0x13dc57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013d914(undefined4 *param_1,int param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  
  *param_1 = _DAT_0013dc58;
  param_1[3] = 0;
  *(char *)((int)param_1 + 0x21) = (char)param_2;
  *(undefined2 *)((int)param_1 + 0x22) = param_3;
  *(undefined2 *)(param_1 + 9) = param_4;
  *(undefined2 *)((int)param_1 + 0x26) = param_5;
  param_1[10] = param_6;
  *(undefined1 *)(param_1 + 0xb) = param_7;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  iVar1 = FUN_001ad814(param_1 + 0x13);
  FUN_001ad784(iVar1,1,6,8,s___SOFOutput_0013dc5a + 2);
  *(undefined4 *)(iVar1 + 0x54) = 0xb0000000;
  puVar8 = *(undefined1 **)(iVar1 + -0x24);
  uVar5 = 6;
  pcVar7 = (code *)(puVar8 + -(int)DAT_0013dc68);
  if (puVar8 == DAT_0013dc68) {
    *(undefined1 *)(iVar1 + -0x48) = 0x10;
    *(undefined1 *)(iVar1 + -0x1d) = 0xc;
    *(undefined1 *)(iVar1 + -0x1c) = 0x2c;
    *(undefined1 *)(iVar1 + -0x1b) = 0x21;
    *(undefined1 *)(iVar1 + -0x18) = 0x20;
    *(undefined4 *)(iVar1 + -0x44) = 3;
    goto LAB_0013da54;
  }
  if ((int)puVar8 < (int)DAT_0013dc68) {
    if (puVar8 == (undefined1 *)0x7d00) {
      *(undefined1 *)(iVar1 + -0x48) = 8;
      *(undefined1 *)(iVar1 + -0x1d) = 6;
      *(undefined1 *)(iVar1 + -0x1c) = 0x16;
      *(undefined1 *)(iVar1 + -0x1b) = 0xc;
      *(undefined1 *)(iVar1 + -0x18) = 0x10;
      *(undefined4 *)(iVar1 + -0x44) = 0;
      goto LAB_0013da54;
    }
    if (puVar8 == (undefined1 *)0xac44) {
      *(undefined1 *)(iVar1 + -0x48) = 8;
      *(undefined1 *)(iVar1 + -0x1d) = 6;
      *(undefined1 *)(iVar1 + -0x1c) = 0x16;
      *(undefined1 *)(iVar1 + -0x1b) = 0xf;
      *(undefined1 *)(iVar1 + -0x18) = 0x10;
      *(undefined4 *)(iVar1 + -0x44) = 1;
      goto LAB_0013da54;
    }
    if (puVar8 == &LAB_0000bb80) {
      *(undefined1 *)(iVar1 + -0x48) = 8;
      *(undefined1 *)(iVar1 + -0x1d) = 6;
      *(undefined1 *)(iVar1 + -0x1c) = 0x16;
      *(undefined1 *)(iVar1 + -0x1b) = 0xc;
      *(undefined1 *)(iVar1 + -0x18) = 0x10;
      *(undefined4 *)(iVar1 + -0x44) = 2;
      goto LAB_0013da54;
    }
    if (puVar8 != (undefined1 *)0xfa00) goto LAB_0013da40;
    *(undefined1 *)(iVar1 + -0x48) = 0x10;
    *(undefined1 *)(iVar1 + -0x1d) = 0xc;
    *(undefined1 *)(iVar1 + -0x1c) = 0x2c;
    *(undefined1 *)(iVar1 + -0x1b) = 0x21;
    uVar5 = DAT_0013dcac;
    *(undefined1 *)(iVar1 + -0x18) = 0x20;
  }
  else {
    if (pcVar7 == (code *)0x1e78) {
      *(undefined1 *)(iVar1 + -0x48) = 0x10;
      *(undefined1 *)(iVar1 + -0x1d) = 0xc;
      *(undefined1 *)(iVar1 + -0x1c) = 0x2c;
      *(undefined1 *)(iVar1 + -0x1b) = 0x18;
      *(undefined1 *)(iVar1 + -0x18) = 0x20;
      *(undefined4 *)(iVar1 + -0x44) = 4;
      goto LAB_0013da54;
    }
    if (pcVar7 == (code *)&LAB_00015888) {
      *(undefined1 *)(iVar1 + -0x48) = 0x20;
      *(undefined1 *)(iVar1 + -0x1d) = 0x18;
      *(undefined1 *)(iVar1 + -0x1c) = 0x58;
      *(undefined1 *)(iVar1 + -0x1b) = 0x45;
      *(undefined1 *)(iVar1 + -0x18) = 0x40;
      *(undefined4 *)(iVar1 + -0x44) = 5;
      goto LAB_0013da54;
    }
    if (pcVar7 != FUN_00019578) {
LAB_0013da40:
      *(undefined1 *)(iVar1 + -0x48) = 0;
      *(undefined4 *)(iVar1 + -0x44) = 0xff;
      FUN_00002898(s_ERROR__USBIsoOutputBlockProcesso_0013dc6c,param_6);
      goto LAB_0013da54;
    }
    *(undefined1 *)(iVar1 + -0x48) = 0x20;
    *(undefined1 *)(iVar1 + -0x1d) = 0x18;
    *(undefined1 *)(iVar1 + -0x1c) = 0x58;
    *(undefined1 *)(iVar1 + -0x1b) = 0x30;
    *(undefined1 *)(iVar1 + -0x18) = 0x40;
  }
  *(undefined4 *)(iVar1 + -0x44) = uVar5;
LAB_0013da54:
  if (param_2 == 1) {
    param_6 = 0x40000000;
  }
  uVar6 = (uint)*(byte *)(iVar1 + -0x1d) * (uint)*(ushort *)(iVar1 + -0x26);
  if (param_2 != 1) {
    param_6 = 0;
  }
  puVar2 = (undefined4 *)FUN_001f01c4(uVar6 * 4,*(undefined1 *)(iVar1 + -0x20));
  *(undefined4 **)(iVar1 + -0x14) = puVar2;
  if (uVar6 != 0) {
    uVar3 = uVar6 & 1;
    uVar4 = (uint)(uVar3 == 1);
    if (uVar3 == 1) {
      *puVar2 = param_6;
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 2) {
      *(undefined4 *)(*(int *)(iVar1 + -0x14) + uVar4 * 4) = param_6;
      *(undefined4 *)(*(int *)(iVar1 + -0x14) + (uVar4 + 1) * 4) = param_6;
      uVar4 = uVar4 + 2;
    }
  }
  *(undefined4 *)(iVar1 + -0x38) = 0;
  *(undefined1 *)(iVar1 + -0x38) = 0;
  *(undefined4 *)(iVar1 + -0x34) = DAT_0013dca8;
  *(char *)(iVar1 + -0x32) = (char)*(undefined4 *)(iVar1 + -0x44);
  *(uint *)(iVar1 + -0x38) = *(uint *)(iVar1 + -0x38) & 0xffff00ff;
  *(char *)(iVar1 + -0x36) = (char)*(undefined2 *)(iVar1 + -0x26);
  *(uint *)(iVar1 + -0x3c) = ((int)*(short *)(iVar1 + -0x2a) & 0x3fU) << 8 | 0x40a0;
  *(undefined2 *)(iVar1 + -0x3a) = 0;
  *(uint *)(iVar1 + -0x34) = *(uint *)(iVar1 + -0x34) & 0xffffff | 0x90000000;
  *(uint *)(iVar1 + -0x38) = *(uint *)(iVar1 + -0x38) & 0xffffff;
  FUN_001c6db8(iVar1 + -0x30,0xff);
  *(undefined4 *)(iVar1 + -0x10) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return iVar1 + -0x4c;
}

