// rea decompile_all
// name: FUN_0018a984
// address: 0x18a984
// body: available
// range: 0x189c34-0x189e37 inclusive
// range: 0x18a984-0x18a9fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018a984(int *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [8];
  undefined1 auStack_a4 [68];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [24];
  
  FUN_001987a4(param_1 + 0x2a,2);
  FUN_001949a0(param_1 + 0x28,2);
  if (param_2 != 0) {
    FUN_00188330(param_1,0);
  }
  if (*(char *)((int)param_1 + 0x4d) != '\x02') {
    *(undefined1 *)((int)param_1 + 0x4d) = 2;
    FUN_00188330(param_1,2);
    FUN_001a00b4(*(undefined4 *)param_1[0x1f],0);
  }
  iVar1 = FUN_001a1558(*(int *)param_1[0x1f] + 0x4a0);
  if (iVar1 == 0) {
    return;
  }
  FUN_001a00b4(*(undefined4 *)param_1[0x1f],0);
  FUN_001512cc(auStack_b8);
  (**(code **)(*param_1 + 0xd4))(auStack_60,param_1);
  iVar1 = FUN_001bed34(auStack_60);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x100))(auStack_50,param_1,1);
    (**(code **)(*param_1 + 0xe8))(auStack_30,param_1);
    iVar1 = DAT_00189e38;
    if (param_1[0x43] != 0) {
      iVar1 = param_1[0x43] + 0x40;
    }
    FUN_001726d4(auStack_3c,iVar1);
    (**(code **)(*param_1 + 0xd4))(auStack_48,param_1);
    FUN_0014fc7c(auStack_b8,auStack_48,auStack_3c,auStack_30);
    FUN_00171ea4(auStack_50);
  }
  else {
    (**(code **)(*param_1 + 0x100))();
    iVar1 = param_1[0x1e];
    (**(code **)(*param_1 + 0xe8))(auStack_3c,param_1);
    (**(code **)(*param_1 + 0xd4))(auStack_48,param_1);
    FUN_0014f2c4(auStack_b8,auStack_48,auStack_3c,iVar1);
    FUN_00171ea4(auStack_50);
  }
  FUN_001a2410(*(int *)param_1[0x1f] + 0x4a0,auStack_b8,0);
  FUN_0015111c(auStack_b8);
  FUN_0014ca10(auStack_a4);
  FUN_0014ca10(auStack_ac);
  return;
}

