// rea decompile_all
// name: FUN_001dc620
// address: 0x1dc620
// body: available
// range: 0x1dc620-0x1dc79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dc620(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    piVar6 = (int *)param_1[4];
    puVar7 = (undefined4 *)param_2[4];
    puVar5 = (undefined4 *)*puVar7;
    for (piVar2 = (int *)*piVar6; piVar2 != piVar6 && puVar5 != puVar7; piVar2 = (int *)*piVar2) {
      iVar4 = puVar5[3];
      piVar2[2] = puVar5[2];
      piVar2[3] = iVar4;
      puVar5 = (undefined4 *)*puVar5;
    }
    if (puVar5 == puVar7) {
      while (piVar3 = piVar2, piVar3 != piVar6) {
        piVar2 = (int *)param_1[4];
        if (piVar3 != (int *)param_1[4]) {
          piVar2 = (int *)*piVar3;
          *(int *)piVar3[1] = *piVar3;
          *(int *)(*piVar3 + 4) = piVar3[1];
          param_1[5] = param_1[5] + -1;
          *piVar3 = param_1[1];
          param_1[1] = (int)piVar3;
        }
      }
    }
    else {
      do {
        piVar2 = (int *)param_1[1];
        if (piVar2 == (int *)0x0) {
          if (param_1[2] == param_1[3]) {
            uVar8 = 1;
            if (*param_1 != 0) {
              uVar1 = *(uint *)(*param_1 + 4);
              uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
              if (uVar8 < uVar1 + 1) {
                uVar8 = uVar1 + 1;
              }
            }
            piVar2 = (int *)FUN_0010f82c(0xc,0);
            iVar4 = FUN_0010f82c(uVar8 << 4,0);
            piVar2[2] = iVar4;
            *piVar2 = *param_1;
            piVar2[1] = uVar8;
            *param_1 = (int)piVar2;
            iVar4 = piVar2[2];
            param_1[2] = iVar4;
            param_1[3] = iVar4 + uVar8 * 0x10;
          }
          piVar2 = (int *)param_1[2];
          param_1[2] = (int)(piVar2 + 4);
        }
        else {
          param_1[1] = *piVar2;
        }
        if (piVar2 + 2 != (int *)0x0) {
          iVar4 = puVar5[3];
          piVar2[2] = puVar5[2];
          piVar2[3] = iVar4;
        }
        *piVar2 = (int)piVar6;
        piVar2[1] = piVar6[1];
        *(int **)piVar6[1] = piVar2;
        piVar6[1] = (int)piVar2;
        param_1[5] = param_1[5] + 1;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != puVar7);
    }
  }
  return param_1;
}

