// rea decompile_all
// name: FUN_000c9730
// address: 0xc9730
// body: available
// range: 0xc9730-0xc97fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c9730(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_000466b0(param_3,&local_34);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_000c97fc,param_3);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0004febc(local_34,s___MaxDelay_000c97fe + 2,&local_38);
    if (iVar1 == 0) {
      FUN_00002898(DAT_000c980c);
    }
    iVar3 = (**(code **)(*param_1 + 0x124))(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x18);
    FUN_00046b8c(local_34);
    if (iVar1 != 0) {
      uVar2 = FUN_00146fc4(auStack_30,uVar2,local_38);
      FUN_00147040(param_2,uVar2);
      FUN_0014703c(auStack_30);
      uVar2 = FUN_001bac90(param_2);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

