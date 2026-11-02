// rea decompile_all
// name: FUN_001e20fc
// address: 0x1e20fc
// body: available
// range: 0x1e20fc-0x1e2313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001e20fc(undefined4 *param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  if (param_1 == param_2) {
    return;
  }
  iVar3 = (int)param_2 - (int)param_1 >> 2;
  FUN_001e1b4c(param_1,param_2,iVar3,param_3,param_4);
  if (iVar3 < 0x11) {
    puVar6 = param_1 + 1;
    if (puVar6 != param_2) {
      do {
        uVar7 = *puVar6;
        iVar3 = (*param_3)(uVar7,*param_1);
        if (iVar3 == 0) {
          iVar3 = (*param_3)(uVar7,puVar6[-1]);
          puVar5 = puVar6 + -1;
          puVar8 = puVar6;
          while (puVar1 = puVar5, iVar3 != 0) {
            *puVar8 = *puVar1;
            iVar3 = (*param_3)(uVar7,puVar1[-1]);
            puVar5 = puVar1 + -1;
            puVar8 = puVar1;
          }
          *puVar8 = uVar7;
        }
        else {
          iVar3 = (int)puVar6 - (int)param_1 >> 2;
          if (0 < iVar3) {
            iVar4 = 0;
            do {
              iVar2 = iVar4 + -1;
              puVar8 = puVar6 + iVar4;
              iVar3 = iVar3 + -1;
              iVar4 = iVar4 + -1;
              *puVar8 = puVar6[iVar2];
            } while (iVar3 != 0);
          }
          *param_1 = uVar7;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != param_2);
      return;
    }
    return;
  }
  puVar6 = param_1;
  while (puVar8 = puVar6 + 1, puVar8 != param_1 + 0x10) {
    uVar7 = *puVar8;
    iVar3 = (*param_3)(uVar7,*param_1);
    if (iVar3 == 0) {
      iVar3 = (*param_3)(uVar7,*puVar6);
      puVar5 = puVar8;
      while (puVar1 = puVar6, iVar3 != 0) {
        *puVar5 = *puVar1;
        iVar3 = (*param_3)(uVar7,puVar1[-1]);
        puVar6 = puVar1 + -1;
        puVar5 = puVar1;
      }
    }
    else {
      iVar3 = (int)puVar8 - (int)param_1 >> 2;
      puVar5 = param_1;
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          iVar2 = iVar4 + -1;
          puVar6 = puVar8 + iVar4;
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + -1;
          *puVar6 = puVar8[iVar2];
        } while (iVar3 != 0);
      }
    }
    *puVar5 = uVar7;
    puVar6 = puVar8;
  }
  param_1 = param_1 + 0x10;
  if (param_1 != param_2) {
    do {
      uVar7 = *param_1;
      iVar3 = (*param_3)(uVar7,param_1[-1]);
      puVar8 = param_1 + -1;
      puVar6 = param_1;
      while (puVar5 = puVar8, iVar3 != 0) {
        *puVar6 = *puVar5;
        iVar3 = (*param_3)(uVar7,puVar5[-1]);
        puVar8 = puVar5 + -1;
        puVar6 = puVar5;
      }
      param_1 = param_1 + 1;
      *puVar6 = uVar7;
    } while (param_1 != param_2);
    return;
  }
  return;
}

