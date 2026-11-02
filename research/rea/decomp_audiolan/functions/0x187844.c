// rea decompile_all
// name: FUN_00187844
// address: 0x187844
// body: available
// range: 0x187844-0x1878d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00187844(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                undefined4 *param_7)

{
  int iVar1;
  int *local_2c [2];
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  local_2c[0] = (int *)0x0;
  *param_7 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = -2;
  }
  else {
    local_24 = param_1;
    iStack_20 = param_2;
    iStack_1c = param_3;
    uStack_18 = param_4;
    iVar1 = FUN_0017778c(param_1,local_2c,param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(local_24 + 0x88);
      if (iVar1 == 0) {
        *(int **)(local_24 + 0x88) = local_2c[0];
        local_2c[0][0x15] = 0;
        local_2c[0][0x16] = 0;
      }
      else {
        local_2c[0][0x16] = 0;
        local_2c[0][0x15] = iVar1;
        *(int **)(iVar1 + 0x58) = local_2c[0];
        *(int **)(local_24 + 0x88) = local_2c[0];
      }
      local_2c[0][1] = param_5;
      if (param_5 < 1) {
        local_2c[0][1] = 0;
      }
      else {
        if (param_5 < 0x1f) {
          param_5 = 0x1e;
        }
        local_2c[0][1] = param_5;
      }
      local_2c[0][2] = local_2c[0][1];
      if (param_6 != 0) {
        FUN_001a702a(local_2c[0] + 10,param_6,0x10);
      }
      iVar1 = FUN_00177990(local_24,local_2c[0],param_7);
      if (iVar1 != 0) {
        *param_7 = 0;
        return iVar1;
      }
      return *local_2c[0];
    }
  }
  return iVar1;
}

