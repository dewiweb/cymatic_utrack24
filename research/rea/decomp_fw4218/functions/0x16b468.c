// rea decompile_all
// name: FUN_0016b468
// address: 0x16b468
// body: available
// range: 0x16b468-0x16b5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016b468(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iStack_20;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return DAT_0016b5e4;
  }
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = DAT_0016b5e8;
  if (*(int *)(iVar6 + 0xc) == 0) {
    iVar2 = *(int *)(iVar6 + 8);
    iVar4 = param_2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 4);
    }
    if (iVar2 != 0 && iVar4 != 0) {
      do {
        iVar2 = iVar4;
        iVar4 = *(int *)(iVar2 + 4);
      } while (*(int *)(iVar2 + 4) != 0);
    }
    if (iVar2 == 0) {
      iVar7 = DAT_0016b5ec;
    }
    *(int *)(iVar6 + 0xc) = iVar2;
    if (iVar2 == 0) {
      return iVar7;
    }
  }
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  iStack_20 = param_4;
  do {
    piVar8 = *(int **)(*(int *)(param_1 + 4) + 0xc);
    if ((((*(char *)((int)piVar8 + 0xb1) == '\0') && (piVar8 != (int *)0x0)) &&
        ((**(code **)(*piVar8 + 0xc))(piVar8,&iStack_20), iStack_20 != 0)) &&
       (iVar4 = FUN_0014f858(param_2), iVar4 != 0)) {
      iVar7 = 0;
      *param_3 = piVar8;
    }
    iVar2 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = iVar2 + 4;
    if (iVar4 == 0) {
      uVar3 = *(uint *)(iVar2 + 8);
      if (uVar3 != 0) {
        uVar5 = *(uint *)(uVar3 + 4);
      }
      if (uVar3 != 0 && uVar5 != 0) {
        do {
          uVar3 = uVar5;
          uVar5 = *(uint *)(uVar3 + 4);
        } while (*(uint *)(uVar3 + 4) != 0);
        uVar5 = 0;
      }
    }
    else {
      uVar5 = (uint)*(byte *)(iVar4 + 0xc);
      uVar3 = *(uint *)(iVar4 + 8);
      uVar1 = uVar3;
      if ((*(byte *)(iVar4 + 0xc) & 0x80) == 0) {
        do {
          uVar3 = uVar1;
          if (uVar3 != 0) {
            uVar5 = *(uint *)(uVar3 + 4);
          }
          uVar1 = uVar5;
        } while (uVar3 != 0 && uVar5 != 0);
      }
    }
    *(uint *)(iVar2 + 0xc) = uVar3;
    if (uVar3 == 0) {
      uVar3 = *(uint *)(*(int *)(param_1 + 4) + 8);
      if (uVar3 != 0) {
        uVar5 = *(uint *)(uVar3 + 4);
      }
      if (uVar3 != 0 && uVar5 != 0) {
        do {
          uVar3 = uVar5;
          uVar5 = *(uint *)(uVar3 + 4);
        } while (*(uint *)(uVar3 + 4) != 0);
      }
      *(uint *)(*(int *)(param_1 + 4) + 0xc) = uVar3;
    }
  } while ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0xc) != iVar6));
  return iVar7;
}

