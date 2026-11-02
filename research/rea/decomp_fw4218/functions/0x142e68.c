// rea decompile_all
// name: FUN_00142e68
// address: 0x142e68
// body: available
// range: 0x142e68-0x143057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00142e68(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  local_28 = param_2;
  uStack_24 = param_3;
  local_20 = param_4;
  FUN_001282fc(&local_28,0,0);
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2c))(param_1,1,&local_20);
    FUN_00069ed4(param_1[0x21],(char)param_1[0x22],&local_28);
    uVar1 = FUN_00050994((int)(short)local_20);
    uVar2 = FUN_00050994(param_3);
    local_28 = FUN_00249b8c(uVar2,uVar1);
    FUN_00069f60(param_1[0x21],(char)param_1[0x22],&local_28,1);
    (**(code **)(*param_1 + 0x2c))(param_1,2,&local_20);
    FUN_00069ed4(param_1[0x21],*(undefined1 *)((int)param_1 + 0x89),&local_28);
    uVar1 = FUN_00050994((int)(short)local_20);
    uVar2 = FUN_00050994(param_3);
    local_28 = FUN_00249b8c(uVar2,uVar1);
    FUN_00069f60(param_1[0x21],*(undefined1 *)((int)param_1 + 0x89),&local_28,1);
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x2c))(param_1,0,&local_20);
    FUN_00069ed4(param_1[0x21],(char)param_1[0x22],&local_28);
    uVar1 = FUN_00050994((int)(short)local_20);
    uVar2 = FUN_00050994(param_3);
    local_28 = FUN_00249b8c(uVar2,uVar1);
    FUN_00069f60(param_1[0x21],(char)param_1[0x22],&local_28,1);
  }
  else {
    if (param_2 != 2) {
      uVar1 = 0;
      goto LAB_00143048;
    }
    (**(code **)(*param_1 + 0x2c))(param_1,0,&local_20);
    FUN_00069ed4(param_1[0x21],*(undefined1 *)((int)param_1 + 0x89),&local_28);
    uVar1 = FUN_00050994((int)(short)local_20);
    uVar2 = FUN_00050994(param_3);
    local_28 = FUN_00249b8c(uVar2,uVar1);
    FUN_00069f60(param_1[0x21],*(undefined1 *)((int)param_1 + 0x89),&local_28,1);
  }
  uVar1 = 1;
LAB_00143048:
  return CONCAT44(local_28,uVar1);
}

