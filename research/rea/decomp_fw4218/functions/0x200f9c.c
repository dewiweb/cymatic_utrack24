// rea decompile_all
// name: FUN_00200f9c
// address: 0x200f9c
// body: available
// range: 0x200f9c-0x2010d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00200f9c(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [72];
  
  FUN_000eb4a8(auStack_64,*param_1);
  uVar1 = FUN_001462e0();
  FUN_00063bc0(auStack_6c);
  uVar2 = FUN_00003738(uVar1);
  iVar3 = FUN_00003928(uVar1,param_2,uVar2);
  if (iVar3 != 0) {
    if (*param_2 == '/') {
      param_2 = param_2 + 1;
    }
    uVar2 = FUN_0008057c(auStack_7c,param_2);
    uVar1 = FUN_0008057c(auStack_74,uVar1);
    FUN_00063aa8(auStack_6c,uVar1,uVar2);
    param_2 = (char *)FUN_001b2280(auStack_6c);
  }
  iVar3 = FUN_000f1058(auStack_64,param_2);
  if (iVar3 == 0) {
    FUN_00002898(s_setCnESystemDataValue____could_n_002010d4,param_2);
    FUN_00063c0c(auStack_6c);
    FUN_000eb5f8(auStack_64);
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_001b91d8(auStack_64);
    if (iVar3 == 0) {
      FUN_00002898(DAT_00201114,param_2);
      FUN_00063c0c(auStack_6c);
      FUN_000eb5f8(auStack_64);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_000eb2d8(auStack_64,*param_1);
      FUN_00063c0c(auStack_6c);
      FUN_000eb5f8(auStack_64);
    }
  }
  return uVar1;
}

