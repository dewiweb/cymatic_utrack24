// rea decompile_all
// name: FUN_00108b2c
// address: 0x108b2c
// body: available
// range: 0x108b2c-0x108c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00108b2c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [16];
  
  if ((param_3 != 0) && (iVar1 = FUN_0015e1e0(param_1[2]), iVar1 == 0)) {
    FUN_000ea2e0(&local_80);
    iVar1 = FUN_0015e1fc(param_1[2],1,&local_80);
    if (iVar1 != 0) {
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,param_2,&local_80);
    }
    FUN_000ea314(&local_80);
    return;
  }
  local_7c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  local_6e = 0;
  local_6c = 0;
  local_66 = 0;
  iVar1 = FUN_0010f718(auStack_64);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_000ee880(iVar1 + -0x1c);
  FUN_0015e3c0(param_1,&local_80,param_4);
  if (param_3 == 0) {
    piVar2 = (int *)*param_1;
    FUN_0010f5fc(auStack_28,param_2 + 0x1c);
    (**(code **)(*piVar2 + 8))(piVar2,&local_80,auStack_28);
  }
  else {
    (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,&local_80);
  }
  FUN_000ee880(&local_80);
  FUN_000e9f98(&local_6c);
  FUN_000e9f98(&local_74);
  return;
}

