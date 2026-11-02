// rea decompile_all
// name: FUN_00108a00
// address: 0x108a00
// body: available
// range: 0x108a00-0x108b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00108a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  iVar1 = FUN_001a4974(param_1,param_2,param_3,param_4);
  iVar1 = FUN_000c149c(iVar1 + 0x10);
  piVar2 = (int *)FUN_0012d308(iVar1 + 0x7c);
  iVar1 = DAT_00108b48;
  piVar2[-0x23] = DAT_00108b48;
  piVar2[-0x1f] = iVar1 + 0x6c;
  *piVar2 = iVar1 + 0x7c;
  piVar2[1] = param_5;
  piVar2[4] = 0;
  piVar2[6] = 0;
  *(undefined1 *)(piVar2 + 7) = 0;
  *(undefined1 *)((int)piVar2 + 0x1d) = 0;
  *(undefined1 *)((int)piVar2 + 0x1e) = 0;
  *(undefined1 *)((int)piVar2 + 0x1f) = 0;
  *(undefined1 *)(piVar2 + 8) = 0;
  iVar1 = FUN_001282fc(piVar2 + 9,0,0);
  iVar1 = FUN_001282fc(iVar1 + 8,0,0);
  uVar3 = FUN_0022f69c(auStack_2c);
  uVar4 = FUN_001282fc(auStack_28,DAT_00108b4c,0);
  iVar1 = FUN_0023d5b0(iVar1 + 0x14,0x1a,uVar4,uVar3);
  uVar3 = FUN_00230cf8(auStack_34);
  local_30 = 0;
  iVar1 = FUN_00244444(iVar1 + 0xc,0x1a,&local_30,uVar3);
  FUN_000f8ee0();
  uVar3 = FUN_000f6910();
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  FUN_000699c8(*(undefined4 *)(iVar1 + -0x18),iVar1 + -0x4c);
  return iVar1 + -0xd8;
}

