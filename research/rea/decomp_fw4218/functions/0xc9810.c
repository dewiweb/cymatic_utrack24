// rea decompile_all
// name: FUN_000c9810
// address: 0xc9810
// body: available
// range: 0xc9810-0xc9977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000c9810(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [60];
  undefined1 auStack_70 [84];
  
  uVar1 = FUN_001446f8(auStack_ac,0);
  uVar2 = FUN_0004b608(DAT_000c9978);
  uVar3 = FUN_0004b670(DAT_000c9978);
  uVar2 = FUN_0013a378(auStack_70,1,DAT_000c997c + 0x4800,DAT_000c997c,0xd70,uVar3,uVar2,0);
  puVar4 = (undefined4 *)FUN_000576bc(param_1,s_DSPProcess_000c9980,param_1 + 0x18c,uVar2,uVar1);
  thunk_FUN_000cefdc(auStack_70);
  thunk_FUN_000cefdc(auStack_ac);
  *puVar4 = DAT_000c998c;
  iVar5 = FUN_00122510(puVar4 + 0x3d);
  iVar5 = FUN_001227f8(iVar5 + 0x58);
  *(undefined4 *)(iVar5 + 0x20) = 0;
  uVar1 = FUN_00230c20(auStack_b4);
  iVar5 = FUN_00233c94(iVar5 + 0x24,auStack_b0,uVar1);
  iVar5 = FUN_000eac54(iVar5 + 0x1c,0,DAT_000c9978,DAT_000c9990,1,1,1,1,1);
  iVar5 = FUN_000c7f00(iVar5 + 0x28,1);
  iVar5 = FUN_000c7e98(iVar5 + 0x38);
  iVar5 = FUN_000d6450(iVar5 + 0x1c,1,2);
  iVar5 = FUN_000d63e0(iVar5 + 0x30);
  iVar5 = FUN_0012c488(iVar5 + 0x18);
  *(int *)(iVar5 + -0xe4) = iVar5;
  return iVar5 + -0x250;
}

