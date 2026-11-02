// rea decompile_all
// name: FUN_00106c18
// address: 0x106c18
// body: available
// range: 0x106c18-0x106d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00106c18(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5998(uVar1);
  if ((iVar2 == 0) || ((char)param_1[0x3b] == '\0')) {
    iVar2 = FUN_001d06b8();
    param_1[0x43] = iVar2;
    if ((uint)(param_1[0x43] - param_1[0x44]) < 0x23) {
      uVar1 = FUN_0022ed3c(param_1 + 0x25);
      iVar2 = FUN_00006604(uVar1,0x1e);
    }
    else {
      iVar2 = 1;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    param_1[0x44] = param_1[0x43];
    if (param_2 == 0) {
      param_1[0x32] = param_1[0x32] - iVar2;
    }
    else {
      param_1[0x32] = param_1[0x32] + iVar2;
    }
    (**(code **)(*(int *)param_1[0x31] + 0x24))((int *)param_1[0x31],3,0,100,0);
    (**(code **)(*param_1 + 0x74))(param_1,1);
  }
  else {
    *(bool *)((int)param_1 + 0xed) = *(char *)((int)param_1 + 0xed) == '\0';
    uVar1 = FUN_0011eda0();
    FUN_001201c0(uVar1,*(undefined1 *)((int)param_1 + 0xed));
  }
  return 1;
}

