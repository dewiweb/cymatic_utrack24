// rea decompile_all
// name: FUN_0009a568
// address: 0x9a568
// body: available
// range: 0x9a568-0x9a71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009a568(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 auStack_ac [84];
  undefined1 auStack_58 [64];
  
  uVar1 = FUN_000e3c90(auStack_58,0);
  uVar2 = FUN_00045014(DAT_0009a720);
  uVar3 = FUN_0004507c(DAT_0009a720);
  uVar2 = FUN_000e2090(auStack_ac,1,DAT_0009a724 + 0x4800,DAT_0009a724,0xd70,uVar3,uVar2,0);
  puVar4 = (undefined4 *)FUN_000507c8(param_1,s_DSPProcess_0009a728,param_1 + 0x184,uVar2,uVar1);
  thunk_FUN_000a3b94(auStack_ac);
  thunk_FUN_000a3b94(auStack_58);
  *puVar4 = DAT_0009a734;
  iVar5 = FUN_000858a0(puVar4 + 0x3d,param_2);
  iVar6 = FUN_000cb078(iVar5 + 0x50);
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  *(undefined4 *)(iVar6 + 0x34) = 0;
  *(undefined4 *)(iVar6 + 0x38) = 0;
  *(undefined1 *)(iVar6 + 0x3c) = 0;
  *(char *)(iVar6 + 0x3d) = (char)iVar6;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  *(undefined4 *)(iVar6 + 0x2c) = 0;
  *(undefined4 *)(iVar6 + 0x28) = 0;
  piVar7 = (int *)FUN_0010f82c(0xc,0);
  iVar5 = FUN_0010f82c(0x18,0);
  piVar7[2] = iVar5;
  *piVar7 = *(int *)(iVar6 + 0x24);
  piVar7[1] = 1;
  *(int *)(iVar6 + 0x24) = (int)piVar7;
  iVar5 = DAT_0009a738;
  puVar8 = (undefined1 *)piVar7[2];
  *(undefined1 **)(iVar6 + 0x2c) = puVar8;
  *(undefined1 **)(iVar6 + 0x30) = puVar8 + 0x18;
  *(undefined1 **)(iVar6 + 0x2c) = puVar8 + 0x18;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *puVar8 = 0;
  *(undefined1 **)(iVar6 + 0x34) = puVar8;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(int *)(*(int *)(iVar6 + 0x34) + 8) = *(int *)(iVar6 + 0x34);
  *(int *)(*(int *)(iVar6 + 0x34) + 0xc) = *(int *)(iVar6 + 0x34);
  iVar5 = FUN_000acb48(iVar6 + 0x40,0,iVar5 + 0x10,iVar5,1,1,1,1,1);
  iVar5 = FUN_000990a4(iVar5 + 0x28,1);
  iVar5 = FUN_00099060(iVar5 + 0x38);
  iVar5 = FUN_000a5b64(iVar5 + 0x18,1,2);
  iVar5 = FUN_000a5b18(iVar5 + 0x30);
  iVar5 = FUN_000d7df4(iVar5 + 0x18);
  *(int *)(iVar5 + -0xe0) = iVar5;
  return;
}

