// rea decompile_all
// name: FUN_0004e928
// address: 0x4e928
// body: available
// range: 0x4e928-0x4eacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004e928(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_18;
  
  local_18 = param_4;
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2);
  if (iVar1 == 0xf) {
    piVar2 = (int *)FUN_0008b5d4();
    iVar1 = (**(code **)(*piVar2 + 0x30))(piVar2,*(undefined4 *)(param_1[1] + 0x3c));
    if (iVar1 == 0) {
      return 0;
    }
    local_18 = *(int *)(iVar1 + 4);
  }
  else {
    FUN_0015bf38(param_2,&local_18);
  }
  iVar1 = param_1[0x2b];
  if ((*(int *)(iVar1 + 0xc) - (int)*(undefined4 **)(iVar1 + 8) >> 2 == 0) ||
     (*(int *)(iVar1 + 0x18) == *(int *)(iVar1 + 0x14))) {
    return 0;
  }
  FUN_000e2088(param_1[1],**(undefined4 **)(iVar1 + 8));
  iVar1 = *(int *)(param_1[0x2b] + 8);
  FUN_000e2080(param_1[1],
               *(undefined4 *)(iVar1 + ((*(int *)(param_1[0x2b] + 0xc) - iVar1 >> 2) + -1) * 4));
  iVar1 = FUN_000a5bac(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    *(char *)((int)param_1 + 0xe3) = (char)param_3;
  }
  param_1[0x39] = local_18;
  iVar1 = (**(code **)(*param_1 + 0xdc))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x104))(param_1);
  param_1[0x3b] = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xec))(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xe4))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(undefined1 *)(param_1 + 0x2e) = 0;
      return 1;
    }
    return 0;
  }
  return 0;
}

