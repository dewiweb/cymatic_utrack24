// rea decompile_all
// name: FUN_0016e2d4
// address: 0x16e2d4
// body: available
// range: 0x16e2d4-0x16e3a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016e2d4(int param_1,byte *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x70);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = param_1 + 0x30;
  if (*param_2 - 10 < 6) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar2 = FUN_00003960(*puVar1,s_INVITE_0016e3a4);
      iVar3 = param_1 + 0x28;
      if (iVar2 == 0) goto LAB_0016e36c;
      iVar2 = FUN_00003960(**(undefined4 **)(*(int *)(param_2 + 8) + 0x70),&DAT_0016e3ac);
joined_r0x0016e348:
      iVar3 = param_1 + 0x28;
      if (iVar2 != 0) {
        iVar3 = param_1 + 0x38;
      }
      goto LAB_0016e36c;
    }
    iVar2 = FUN_00003960(*puVar1,s_INVITE_0016e3a4);
joined_r0x0016e368:
    if (iVar2 != 0) goto LAB_0016e36c;
  }
  else {
    if (5 < *param_2 - 0x10) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      iVar2 = FUN_00003960(*puVar1,s_INVITE_0016e3a4);
      goto joined_r0x0016e348;
    }
    iVar2 = FUN_00003960(*puVar1,s_INVITE_0016e3a4);
    if (iVar2 != 0) {
      iVar2 = FUN_00003960(**(undefined4 **)(*(int *)(param_2 + 8) + 0x70),&DAT_0016e3ac);
      goto joined_r0x0016e368;
    }
  }
  iVar3 = param_1 + 0x20;
LAB_0016e36c:
  if (iVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_001a72d0(iVar3,param_2);
  if ((param_3 == 1) && (iVar2 != 0)) {
    FUN_001a7216(iVar2,param_2);
    return iVar2;
  }
  return iVar2;
}

