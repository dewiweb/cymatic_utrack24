// rea decompile_all
// name: FUN_001089cc
// address: 0x1089cc
// body: available
// range: 0x1089cc-0x108b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001089cc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 auStack_7c [60];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  
  FUN_000ea2a4(auStack_34,param_4 + 0x28);
  thunk_FUN_000ea2a4(auStack_40,param_1[2]);
  iVar1 = FUN_000ea1e8(auStack_40,auStack_34);
  FUN_000ea314(auStack_40);
  FUN_000ea314(auStack_34);
  if (iVar1 != 0) {
    piVar2 = (int *)*param_1;
    FUN_000ea2a4(&local_98,param_4 + 0x28);
    (**(code **)(*piVar2 + 0x10))(piVar2,param_2,&local_98);
    FUN_000ea314(&local_98);
    return;
  }
  local_94 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_8c = 0;
  local_86 = 0;
  local_84 = 0;
  local_7e = 0;
  iVar1 = FUN_0010f718(auStack_7c);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_000ee880(iVar1 + -0x1c);
  FUN_0015e3c0(param_1,&local_98,param_4);
  if (param_3 == 0) {
    piVar2 = (int *)*param_1;
    FUN_0010f5fc(auStack_28,param_2 + 0x1c);
    (**(code **)(*piVar2 + 8))(piVar2,&local_98,auStack_28);
  }
  else {
    (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,&local_98);
  }
  FUN_000ee880(&local_98);
  FUN_000e9f98(&local_84);
  FUN_000e9f98(&local_8c);
  return;
}

