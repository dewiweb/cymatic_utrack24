// rea decompile_all
// name: FUN_000ca3c0
// address: 0xca3c0
// body: available
// range: 0xca3c0-0xca3f9 inclusive
// range: 0xca404-0xca4c9 inclusive
// range: 0xca4ce-0xca4df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000ca3c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_3c;
  int local_38 [3];
  uint local_2c [2];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  local_38[0] = FUN_001c0d4a(param_6);
  if (local_38[0] == 0) {
    return 0;
  }
  uVar1 = FUN_001b87f4(param_1);
  if (uVar1 < param_5) {
switchD_000ca3f8_caseD_0:
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    local_2c[0] = 0;
    switch(param_2) {
    default:
      goto switchD_000ca3f8_caseD_0;
    case 1:
      piVar3 = *(int **)(param_1 + 0x14);
      uVar2 = FUN_001b87f4(param_1);
      uVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,uVar2,local_2c,local_38);
      break;
    case 2:
      piVar3 = *(int **)(param_1 + 0x14);
      uVar2 = FUN_001b87f4(param_1);
      uVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,local_1c,uVar2,local_2c,local_38);
      break;
    case 3:
      piVar3 = *(int **)(param_1 + 0x14);
      uVar2 = FUN_001b87f4(param_1);
      local_3c = local_38;
      uVar1 = (**(code **)(*piVar3 + 0x28))(piVar3,local_1c,local_18,uVar2,local_2c);
      break;
    case 6:
      piVar3 = *(int **)(param_1 + 0x14);
      uVar2 = FUN_001b87f4(param_1);
      uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,uVar2,local_2c,local_38);
      break;
    case 7:
      piVar3 = *(int **)(param_1 + 0x14);
      uVar2 = FUN_001b87f4(param_1);
      uVar1 = (**(code **)(*piVar3 + 0x30))(piVar3,local_1c,uVar2,local_2c,local_38);
      break;
    case 9:
      local_3c = (int *)FUN_001b87f4(param_1);
      local_2c[0] = FUN_000c76e4(param_1 + 0x18,&local_3c,local_38);
      uVar1 = local_2c[0];
    }
    if (uVar1 != 0) {
      if (param_5 < local_2c[0]) {
        FUN_001ae420(param_6,param_5);
      }
      else {
        FUN_001ae420(param_6);
      }
      return 1;
    }
  }
  return 0;
}

