// rea decompile_all
// name: FUN_000ff938
// address: 0xff938
// body: available
// range: 0xff938-0xffa6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ff938(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  
  uVar1 = _DAT_000ffa6c;
  FUN_001f00bc();
  iVar2 = FUN_0022d530(param_1 + 0x1bc,param_2);
  if (iVar2 == 0) {
LAB_000ffa14:
    FUN_001f06d4(uVar1);
    return 1;
  }
  iVar2 = FUN_0004eb44(*(undefined4 *)(param_1 + 0x114),s_c__OutputGroups_000ffa6d + 3,&local_20);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000ffa94);
  }
  else {
    iVar2 = FUN_00048c6c(local_20,s_User_SIPIdentity_000ffa80,*param_2);
    if (iVar2 != 0) {
      FUN_00046b8c(local_20);
      FUN_00232a4c(param_1 + 0x1bc,param_2);
      *(undefined1 *)(param_1 + 0x254) = 1;
      local_1c = *(int *)(*(int *)(param_1 + 0x274) + 8);
      if (local_1c != *(int *)(param_1 + 0x274)) {
        do {
          (**(code **)(**(int **)(local_1c + 0x10) + 0x54))();
          FUN_00209818(&local_1c);
        } while (local_1c != *(int *)(param_1 + 0x274));
      }
      goto LAB_000ffa14;
    }
    FUN_00002898(DAT_000ffa98,s_User_SIPIdentity_000ffa80);
    FUN_00046b8c(local_20);
  }
  FUN_001f06d4(uVar1);
  return 0;
}

