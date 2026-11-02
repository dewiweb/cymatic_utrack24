// rea decompile_all
// name: FUN_00107764
// address: 0x107764
// body: available
// range: 0x107764-0x107897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00107764(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  piVar1 = (int *)FUN_0010fce8(param_1,param_2,param_3,param_4,param_5,param_6);
  iVar3 = DAT_00107898;
  *piVar1 = DAT_00107898;
  piVar1[6] = iVar3 + 0x98;
  uVar2 = FUN_00230cf8(auStack_28);
  iVar3 = FUN_00244410(piVar1 + 0x35,uVar2);
  uVar2 = FUN_00230cf8(auStack_2c);
  iVar3 = FUN_00244410(iVar3 + 0xc,uVar2);
  *(undefined1 *)(iVar3 + 0xc) = 0;
  uVar2 = FUN_0022f460(auStack_30);
  iVar3 = FUN_0023af48(iVar3 + 0x10,uVar2);
  uVar2 = FUN_00230e4c(auStack_34);
  iVar3 = FUN_00231ef4(iVar3 + 0x10,&DAT_0010789c,uVar2);
  uVar2 = FUN_00230e4c(auStack_38);
  iVar3 = FUN_00231ef4(iVar3 + 4,&LAB_001078a0,uVar2);
  uVar2 = FUN_0023299c(auStack_3c,auStack_40);
  FUN_0024331c(iVar3 + -0x70,6,uVar2);
  FUN_002329f0(auStack_3c);
  FUN_002393a0(iVar3 + -0x4c,6,0);
  return iVar3 + -0x104;
}

