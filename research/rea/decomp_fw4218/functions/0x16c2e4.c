// rea decompile_all
// name: FUN_0016c2e4
// address: 0x16c2e4
// body: available
// range: 0x16c2e4-0x16c42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016c2e4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [68];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [68];
  undefined1 auStack_28 [16];
  
  FUN_001512cc(auStack_d8);
  uVar1 = FUN_001be1a4(param_1 + 0xfa);
  thunk_FUN_0014cd1c(auStack_28,param_1 + 0xfa);
  FUN_0014fb08(auStack_d8,auStack_28,uVar1,param_2,param_3);
  FUN_0014cd8c(auStack_28);
  (**(code **)(*param_1 + 0x20))(param_1,auStack_d8);
  if (param_3 != 0) {
    FUN_001512cc(&local_80);
    FUN_0014f6cc(&local_80);
    (**(code **)(*param_1 + 0x28))(param_1,&local_80);
    FUN_0015111c(&local_80);
    FUN_0014ca10(auStack_6c);
    FUN_0014ca10(auStack_74);
    local_7c = 0;
    local_80 = 0;
    local_78 = 0;
  }
  if (*(char *)((int)param_1 + 0x71b) == '\0') {
    *(char *)(param_1 + 0x1c7) = (char)param_2;
    *(undefined1 *)((int)param_1 + 0x71b) = 1;
    *(char *)((int)param_1 + 0x71d) = (char)param_3;
  }
  else {
    *(bool *)(param_1 + 0x1c7) = (char)param_1[0x1c7] != '\0' || param_2 != 0;
    *(bool *)((int)param_1 + 0x71d) = *(char *)((int)param_1 + 0x71d) != '\0' || param_3 != 0;
  }
  iVar2 = FUN_001d06b8();
  iVar3 = FUN_0015ce1c(0x32);
  param_1[0x1c2] = iVar3 + iVar2 + 0x5dc;
  FUN_0015111c(auStack_d8);
  FUN_0014ca10(auStack_c4);
  FUN_0014ca10(auStack_cc);
  return;
}

