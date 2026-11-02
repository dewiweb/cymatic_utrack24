// rea decompile_all
// name: FUN_001c7218
// address: 0x1c7218
// body: available
// range: 0x1c7218-0x1c72af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c7218(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c [3];
  int local_30;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  int local_1c [2];
  
  local_1c[0] = *(int *)(*param_1 + -8) + (int)param_1;
  iVar2 = *(int *)(*param_1 + -4);
  iVar3 = local_1c[0];
  local_20 = param_1;
  if (param_3 != 0) {
    local_40 = 0;
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_28 = 0;
    local_24 = 0;
    local_48 = DAT_001c72b0;
    local_44 = DAT_001c72b4;
    local_3c[2] = param_3;
    local_30 = param_2;
    local_2c = param_1;
    FUN_0004e9f4(local_1c[0],iVar2,&local_48,0);
    iVar3 = local_24;
  }
  iVar4 = iVar3;
  if (iVar3 == 0) {
    local_40 = 1;
    if (iVar2 != param_2) {
      local_40 = 0;
      local_48 = &local_40;
      FUN_0004efe8(local_1c[0],local_20,iVar2,param_2);
      if (local_40 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_001c103c(iVar2,param_3);
    iVar4 = local_1c[0];
    if (iVar1 == 0) {
      local_3c[0] = 0;
      local_48 = (int *)0x0;
      local_44 = 0;
      iVar2 = FUN_001c71a0(local_1c,local_3c,iVar2,param_3);
      iVar4 = iVar3;
      if (iVar2 != 0) {
        iVar4 = local_3c[0];
      }
    }
  }
  return iVar4;
}

