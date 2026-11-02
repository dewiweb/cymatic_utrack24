// rea decompile_all
// name: FUN_00121430
// address: 0x121430
// body: available
// range: 0x121430-0x1215fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00121430(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  
  bVar6 = *(int *)(param_2 + 4) != *(int *)(param_3 + 4);
  piVar2 = (int *)FUN_001d7998(param_1 + 1,param_2);
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0x38))(piVar2);
  if ((bVar6) && (iVar5 = *(int *)(param_3 + 4), piVar2[0x11] != iVar5)) {
    param_1[0xc] = 0;
    (**(code **)(*piVar2 + 0xd4))(auStack_3c,piVar2);
    FUN_001be268(param_1 + 1,auStack_3c);
    FUN_001272b0(piVar2,iVar5);
    FUN_001be020(param_1 + 1,piVar2);
  }
  FUN_00129808(piVar2,bVar6);
  (**(code **)(*piVar2 + 0xd4))(auStack_48,piVar2);
  iVar5 = FUN_0015e8f8(auStack_48);
  if (iVar5 != 0 && (bVar6 || param_4 != 0)) {
    FUN_001292fc(piVar2);
    for (iVar5 = piVar2[0x44]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x114)) {
      if (*(char *)(iVar5 + 0x4d) == '\0') {
        FUN_00129808(iVar5,0);
      }
      else {
        FUN_00128c84(iVar5);
      }
      FUN_00120d54(param_1,iVar5);
    }
  }
  iVar5 = param_1[2];
  if (iVar5 != 0) {
    for (iVar1 = *(int *)(iVar5 + 0x15c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x15c)) {
      iVar5 = iVar1;
    }
    for (; iVar5 != 0; iVar5 = FUN_001d79fc(param_1 + 1,iVar5)) {
      if (*(char *)(iVar5 + 0x4d) == '\x01') goto LAB_001215a8;
    }
  }
  FUN_00146e48(*param_1);
LAB_001215a8:
  uVar3 = FUN_0010f5fc(auStack_30,param_3);
  uVar4 = FUN_0010f5fc(auStack_48,param_2);
  FUN_00129be0(piVar2,uVar4,uVar3);
  (**(code **)(*piVar2 + 0x3c))(piVar2);
  return;
}

