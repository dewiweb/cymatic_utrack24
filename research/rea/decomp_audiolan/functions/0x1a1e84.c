// rea decompile_all
// name: FUN_001a1e84
// address: 0x1a1e84
// body: available
// range: 0x1a1e84-0x1a1f93 inclusive
// range: 0x1a1f96-0x1a1fbb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a1e84(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *local_18;
  
  *param_2 = 0;
  if (param_1 == (int *)0x0) {
    return -2;
  }
  local_18 = param_4;
  iVar1 = FUN_001a20d8(&local_18);
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      iVar1 = FUN_001a6f50();
      *local_18 = iVar1;
      if (iVar1 == 0) goto LAB_001a1faa;
    }
    if (param_1[1] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[1] = iVar1;
      if (iVar1 == 0) goto LAB_001a1faa;
    }
    if (param_1[2] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[2] = iVar1;
      if (param_1[2] == 0) goto LAB_001a1fb4;
    }
    if (param_1[3] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[3] = iVar1;
      if (param_1[3] == 0) goto LAB_001a1fb4;
    }
    if (param_1[4] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[4] = iVar1;
      if (iVar1 == 0) goto LAB_001a1faa;
    }
    if (param_1[5] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[5] = iVar1;
      if (param_1[5] == 0) goto LAB_001a1fb4;
    }
    if (param_1[6] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[6] = iVar1;
      if (iVar1 == 0) goto LAB_001a1faa;
    }
    if (param_1[7] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[7] = iVar1;
      if (param_1[7] == 0) goto LAB_001a1fb4;
    }
    if (param_1[8] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[8] = iVar1;
      if (iVar1 == 0) {
LAB_001a1faa:
        FUN_001a1fbc(local_18);
        return -4;
      }
    }
    if (param_1[9] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[9] = iVar1;
      if (param_1[9] == 0) goto LAB_001a1fb4;
    }
    if (param_1[10] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[10] = iVar1;
      if (param_1[10] == 0) goto LAB_001a1fb4;
    }
    if (param_1[0xb] != 0) {
      iVar1 = FUN_001a6f50();
      local_18[0xb] = iVar1;
      if (param_1[0xb] == 0) {
LAB_001a1fb4:
        FUN_001a1fbc();
        return -4;
      }
    }
    *param_2 = local_18;
    iVar1 = 0;
  }
  return iVar1;
}

