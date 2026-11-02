// rea decompile_all
// name: FUN_001775f0
// address: 0x1775f0
// body: available
// range: 0x1775f0-0x177677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_001775f0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30 [3];
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  local_38 = param_3;
  local_34 = param_4;
  iStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  while ((param_2 != 0 && (*(int *)(param_1 + 0xa8) == 0))) {
    local_30[0] = 0;
    local_3c = 0;
    local_30[1] = 0;
    (**(code **)(param_1 + 0x44))(param_1,&local_3c,local_30 + 1,local_30);
    if ((local_1c == -1) || (local_18 == -1)) {
      iVar1 = FUN_001913d8(local_30[0] + 1,&local_3c,0,0,0);
    }
    else {
      iVar1 = FUN_001913d8(local_30[0] + 1,&local_3c,0,0,&local_38);
    }
    if (iVar1 != -1) {
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xa8) == 0)) {
        (**(code **)(param_1 + 0x48))(param_1,&local_3c,local_30 + 1);
      }
      param_2 = param_2 + -1;
    }
  }
  return 0;
}

