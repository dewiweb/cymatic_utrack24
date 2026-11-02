// rea decompile_all
// name: FUN_0016a7dc
// address: 0x16a7dc
// body: available
// range: 0x16a7dc-0x16a93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016a7dc(undefined4 *param_1,int param_2,int param_3,int param_4)

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
  
  FUN_0014cd1c(auStack_34,param_4 + 0x28);
  thunk_FUN_0014cd1c(auStack_40,param_1[2]);
  iVar1 = FUN_0014cc60(auStack_40,auStack_34);
  FUN_0014cd8c(auStack_40);
  FUN_0014cd8c(auStack_34);
  if (iVar1 != 0) {
    piVar2 = (int *)*param_1;
    FUN_0014cd1c(&local_98,param_4 + 0x28);
    (**(code **)(*piVar2 + 0x10))(piVar2,param_2,&local_98);
    FUN_0014cd8c(&local_98);
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
  iVar1 = FUN_001727f0(auStack_7c);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  FUN_001be4e8(param_1,&local_98,param_4);
  if (param_3 == 0) {
    piVar2 = (int *)*param_1;
    FUN_001726d4(auStack_28,param_2 + 0x1c);
    (**(code **)(*piVar2 + 8))(piVar2,&local_98,auStack_28);
  }
  else {
    (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,&local_98);
  }
  FUN_0015111c(&local_98);
  FUN_0014ca10(&local_84);
  FUN_0014ca10(&local_8c);
  return;
}

