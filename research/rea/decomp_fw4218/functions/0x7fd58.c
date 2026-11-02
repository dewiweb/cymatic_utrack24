// rea decompile_all
// name: FUN_0007fd58
// address: 0x7fd58
// body: available
// range: 0x7fd58-0x7ffeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0007fd58(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_30 [3];
  
  iVar3 = 0;
  if (**(int **)(param_4 + 4) != 0) {
    iVar3 = FUN_001c7218(**(int **)(param_4 + 4),DAT_0007fff0,DAT_0007ffec,0xffffffff);
  }
  iVar7 = DAT_0007fff8;
  pcVar2 = DAT_0007fff4;
  bVar8 = *(int *)(param_3 + 0xc) == param_2;
  if (iVar3 == 0) {
    if (**(int **)(param_4 + 4) == 0) {
      return (int *)0x0;
    }
    local_30[0] = FUN_001c7218(**(int **)(param_4 + 4),DAT_0007fff0,DAT_00080000,0xffffffff);
    if (local_30[0] == 0) {
      return (int *)0x0;
    }
    uVar6 = 1;
    do {
      iVar5 = *(int *)(*(int *)(param_4 + 4) + uVar6 * 4);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = FUN_001c7218(iVar5,DAT_0007fff0,DAT_00080000,0xffffffff);
      }
      local_30[uVar6] = iVar3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    piVar4 = (int *)FUN_001f01c4(0x30,1);
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar4[1] = -1;
    *(undefined2 *)(piVar4 + 3) = 0;
    *(undefined2 *)((int)piVar4 + 0xe) = 0;
    *(undefined1 *)(piVar4 + 4) = 1;
    piVar4[2] = param_2;
    *piVar4 = iVar7;
    *(bool *)((int)piVar4 + 0x11) = bVar8;
    if (bVar8) {
      iVar3 = 0;
      cVar1 = *pcVar2;
      while (cVar1 != -1) {
        iVar7 = (**(code **)(*(int *)piVar4[2] + 0x24))();
        if (iVar7 == pcVar2[iVar3 * 8]) {
          *(short *)((int)piVar4 + 0xe) = (short)*(undefined4 *)(pcVar2 + iVar3 * 8 + 4);
          break;
        }
        iVar3 = iVar3 + 1;
        cVar1 = pcVar2[iVar3 * 8];
      }
    }
    iVar3 = DAT_00080004;
    *(undefined2 *)(piVar4 + 0xb) = 0;
    *(undefined1 *)((int)piVar4 + 0x2e) = 0;
    *piVar4 = iVar3;
    piVar4[8] = local_30[0];
    piVar4[5] = 0;
    piVar4[9] = local_30[1];
    piVar4[6] = 0;
    piVar4[10] = local_30[2];
    piVar4[7] = 0;
    iVar3 = (**(code **)(*piVar4 + 0x20))(piVar4);
  }
  else {
    piVar4 = (int *)FUN_001f01c4(0x1c,1);
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar4[1] = -1;
    *(undefined2 *)(piVar4 + 3) = 0;
    *(undefined2 *)((int)piVar4 + 0xe) = 0;
    *(undefined1 *)(piVar4 + 4) = 1;
    piVar4[2] = param_2;
    *piVar4 = iVar7;
    *(bool *)((int)piVar4 + 0x11) = bVar8;
    if (bVar8) {
      iVar7 = 0;
      cVar1 = *pcVar2;
      while (cVar1 != -1) {
        iVar5 = (**(code **)(*(int *)piVar4[2] + 0x24))();
        if (iVar5 == pcVar2[iVar7 * 8]) {
          *(short *)((int)piVar4 + 0xe) = (short)*(undefined4 *)(pcVar2 + iVar7 * 8 + 4);
          break;
        }
        iVar7 = iVar7 + 1;
        cVar1 = pcVar2[iVar7 * 8];
      }
    }
    iVar7 = DAT_0007fffc;
    *piVar4 = DAT_0007fffc;
    piVar4[5] = 0;
    piVar4[6] = iVar3;
    iVar3 = (**(code **)(iVar7 + 0x20))(piVar4);
  }
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    return (int *)0x0;
  }
  return piVar4;
}

