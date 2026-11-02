// rea decompile_all
// name: FUN_00169fb4
// address: 0x169fb4
// body: available
// range: 0x169fb4-0x16a0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00169fb4(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined2 auStack_90 [26];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  
  bVar6 = *(int *)(param_1 + 0x58) != param_2;
  if (bVar6) {
    FUN_0012c800(param_1 + 100);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (param_3 == 0x80) {
    return;
  }
  if (param_3 != 0x81) {
    return;
  }
  FUN_0010f0bc(auStack_90);
  auStack_90[0] = 0;
  uStack_5c = *(undefined4 *)(param_1 + 0x88);
  uStack_58 = 1;
  iVar1 = (**(code **)(*param_4 + 0x80))(param_4,auStack_90);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      (**(code **)(*param_4 + 0x44))(auStack_28,param_4);
      (**(code **)(**(int **)(param_1 + 0x50) + 0xd4))(auStack_34);
      iVar1 = FUN_0015ea44(auStack_34,auStack_28);
      if (iVar1 == 0) goto LAB_0016a0ac;
    }
    uVar7 = FUN_001356a4(param_1 + 0x14,param_4);
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    piVar2 = (int *)uVar7;
    if (piVar2 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(param_1 + 0xb4);
    }
    if (piVar2 != (int *)0x0 && uVar4 != 0) {
      (**(code **)(*piVar2 + 0x6c))();
    }
  }
LAB_0016a0ac:
  pcVar5 = *(code **)(**(int **)(param_1 + -0x30) + 0x124);
  if (!bVar6) {
    uVar3 = (*pcVar5)();
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    return;
  }
  uVar3 = (*pcVar5)(*(int **)(param_1 + -0x30),param_5,param_1,0);
  FUN_0012c5f0(param_1 + 100,uVar3);
  return;
}

