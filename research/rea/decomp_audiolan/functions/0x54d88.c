// rea decompile_all
// name: FUN_00054d88
// address: 0x54d88
// body: available
// range: 0x54d88-0x54f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00054d88(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  uVar1 = DAT_00054f14;
  puVar3 = (undefined4 *)
           FUN_0006e06c(param_1 + 4,s_RtspServerThread_00054f18,0,DAT_00054f14,DAT_00054f14,0x2000,
                        DAT_00054f14,DAT_00054f14);
  puVar3[-1] = DAT_00054f2c;
  uVar2 = DAT_00054f34;
  *puVar3 = DAT_00054f30;
  puVar3[0x30] = uVar2;
  puVar3[0x31] = _DAT_00054f38;
  puVar3[0x32] = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x33) = 0;
  iVar4 = FUN_00111154(puVar3 + 0x34,s___RtspServerTimer_00054f3a + 2,uVar1,uVar1,uVar1,uVar1,uVar1)
  ;
  piVar7 = (int *)(iVar4 + 0x100);
  *piVar7 = 0;
  *(undefined4 *)(iVar4 + 0x104) = 0;
  *(undefined4 *)(iVar4 + 0x108) = 0;
  *(undefined4 *)(iVar4 + 0x10c) = 0;
  *(undefined4 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar6 = FUN_0010f82c(0x10,0);
  piVar5[2] = iVar6;
  iVar6 = *piVar7;
  piVar5[1] = 1;
  *piVar5 = iVar6;
  *piVar7 = (int)piVar5;
  iVar6 = piVar5[2];
  *(int *)(iVar4 + 0x108) = iVar6;
  *(int *)(iVar4 + 0x10c) = iVar6 + 0x10;
  iVar6 = *(int *)(iVar4 + 0x108);
  *(int *)(iVar4 + 0x108) = iVar6 + 0x10;
  *(int *)(iVar4 + 0x110) = iVar6;
  *(int *)iVar6 = iVar6;
  piVar7 = (int *)(iVar4 + 0x118);
  *(int *)(*(int *)(iVar4 + 0x110) + 4) = *(int *)(iVar4 + 0x110);
  *piVar7 = 0;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  *(undefined4 *)(iVar4 + 0x120) = 0;
  *(undefined4 *)(iVar4 + 0x124) = 0;
  *(undefined4 *)(iVar4 + 0x128) = 0;
  *(undefined4 *)(iVar4 + 300) = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar6 = FUN_0010f82c(0x10,0);
  piVar5[2] = iVar6;
  iVar6 = *piVar7;
  piVar5[1] = 1;
  *piVar5 = iVar6;
  *piVar7 = (int)piVar5;
  iVar6 = piVar5[2];
  *(int *)(iVar4 + 0x120) = iVar6;
  *(int *)(iVar4 + 0x124) = iVar6 + 0x10;
  iVar6 = *(int *)(iVar4 + 0x120);
  *(int *)(iVar4 + 0x120) = iVar6 + 0x10;
  *(int *)(iVar4 + 0x128) = iVar6;
  *(int *)iVar6 = iVar6;
  piVar7 = (int *)(iVar4 + 0x130);
  *(int *)(*(int *)(iVar4 + 0x128) + 4) = *(int *)(iVar4 + 0x128);
  *piVar7 = 0;
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined4 *)(iVar4 + 0x138) = 0;
  *(undefined4 *)(iVar4 + 0x13c) = 0;
  *(undefined4 *)(iVar4 + 0x140) = 0;
  *(undefined4 *)(iVar4 + 0x144) = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar6 = FUN_0010f82c(0x10,0);
  piVar5[2] = iVar6;
  iVar6 = *piVar7;
  piVar5[1] = 1;
  *piVar5 = iVar6;
  *piVar7 = (int)piVar5;
  iVar6 = piVar5[2];
  *(int *)(iVar4 + 0x138) = iVar6;
  *(int *)(iVar4 + 0x13c) = iVar6 + 0x10;
  iVar6 = *(int *)(iVar4 + 0x138);
  *(int *)(iVar4 + 0x138) = iVar6 + 0x10;
  *(int *)(iVar4 + 0x140) = iVar6;
  *(int *)iVar6 = iVar6;
  *(int *)(*(int *)(iVar4 + 0x140) + 4) = *(int *)(iVar4 + 0x140);
  piVar7 = (int *)(iVar4 + 0x148);
  *piVar7 = 0;
  *(undefined4 *)(iVar4 + 0x14c) = 0;
  *(undefined4 *)(iVar4 + 0x150) = 0;
  *(undefined4 *)(iVar4 + 0x154) = 0;
  *(undefined4 *)(iVar4 + 0x158) = 0;
  *(undefined4 *)(iVar4 + 0x15c) = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar6 = FUN_0010f82c(0xc,0);
  piVar5[2] = iVar6;
  iVar6 = *piVar7;
  piVar5[1] = 1;
  *piVar5 = iVar6;
  *piVar7 = (int)piVar5;
  iVar6 = piVar5[2];
  *(int *)(iVar4 + 0x150) = iVar6;
  *(int *)(iVar4 + 0x154) = iVar6 + 0xc;
  iVar6 = *(int *)(iVar4 + 0x150);
  *(int *)(iVar4 + 0x150) = iVar6 + 0xc;
  *(int *)(iVar4 + 0x158) = iVar6;
  *(int *)iVar6 = iVar6;
  *(int *)(*(int *)(iVar4 + 0x158) + 4) = *(int *)(iVar4 + 0x158);
  *(undefined4 *)(iVar4 + 0x160) = 0;
  *(undefined1 *)(iVar4 + 0x164) = 1;
  *(undefined1 *)(iVar4 + 0x165) = 0;
  *(undefined1 *)(iVar4 + 0x166) = 0;
  FUN_0006e024(iVar4 + -0xd0);
  return iVar4 + -0xd4;
}

