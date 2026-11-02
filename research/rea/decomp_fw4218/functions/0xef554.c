// rea decompile_all
// name: FUN_000ef554
// address: 0xef554
// body: available
// range: 0xef554-0xef663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ef554(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_000ef664;
  if ((*(int *)(param_2 + 0x58) != -2) &&
     ((*(int *)(param_2 + 0x58) == -1 ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x178) + 0x74))(), iVar2 == 0)))) {
    return iVar3;
  }
  iVar3 = FUN_000ee34e(param_1,param_2);
  bVar1 = false;
  if (iVar3 == 0) {
    uVar6 = *(undefined4 *)(param_2 + 0x58);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x178) + 0x70))(*(int **)(param_1 + 0x178),uVar6);
    if (iVar3 == 0) {
      return -3;
    }
    iVar3 = *(int *)(iVar3 + 0x4c);
    if (iVar3 == 0) {
      return -8;
    }
    iVar2 = FUN_001f01c4(0x3c,1);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = FUN_00133804();
      iVar3 = FUN_001a7b24(iVar2,uVar4,uVar6,iVar3);
    }
    bVar1 = true;
  }
  iVar2 = FUN_001a7964(iVar3,param_2);
  if ((iVar2 == 0) &&
     (((*(int *)(param_2 + 0x58) == -2 || (bVar1)) || (*(int *)(iVar3 + 0xc) != 0)))) {
    piVar5 = (int *)FUN_000ca860(param_2);
    if (piVar5 == (int *)0x0) {
      iVar2 = -7;
    }
    else {
      iVar2 = (**(code **)(*piVar5 + 0x30))(piVar5,param_1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)**(undefined4 **)(iVar3 + 4))(*(undefined4 **)(iVar3 + 4),piVar5,iVar3);
        if (iVar2 == 0) {
          FUN_001a7860(iVar3,piVar5);
          if (!bVar1) {
            return 0;
          }
          FUN_000ee2a4(param_1,iVar3);
          return 0;
        }
        (**(code **)(*piVar5 + 4))(piVar5);
      }
    }
    if (bVar1) {
      FUN_001a7abc(iVar3);
    }
    return iVar2;
  }
  return -1;
}

