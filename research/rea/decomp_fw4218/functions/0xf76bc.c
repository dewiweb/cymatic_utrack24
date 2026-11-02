// rea decompile_all
// name: FUN_000f76bc
// address: 0xf76bc
// body: available
// range: 0xf76bc-0xf7827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f76bc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_2 = '\0';
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,1);
  if (iVar1 == 0) {
    FUN_00002898(DAT_000f7828);
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_000f8d5c(param_1,0);
    if (iVar3 == 0) {
      FUN_00002898(DAT_000f782c);
      uVar2 = 0;
    }
    else {
      iVar3 = FUN_001baaf4(param_1 + 0x109);
      if (iVar3 == 0) {
        iVar1 = FUN_000f8c1c(param_1,iVar1,param_2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else if ((iVar3 == 1) || (iVar3 == 2)) {
        iVar1 = FUN_000f7fb4(param_1,iVar1,param_2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        if (iVar3 != 3) {
          uVar2 = FUN_001baaf4(param_1 + 0x109);
          FUN_00002898(DAT_000f7830,uVar2);
          return 0;
        }
        iVar1 = FUN_000f7e38(param_1,iVar1,param_2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (*param_2 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,1);
      }
    }
  }
  return uVar2;
}

