// rea decompile_all
// name: FUN_0007b018
// address: 0x7b018
// body: available
// range: 0x7b018-0x7b27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7b21c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007b018(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  piVar3 = (int *)param_1[3];
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)param_1[4];
      piVar2 = (int *)0x0;
      while( true ) {
        piVar1 = piVar3;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        bVar9 = piVar1 <= param_2;
        bVar8 = param_2 == piVar1;
        if (bVar9 && !bVar8) {
          bVar9 = param_2 <= (int *)piVar1[2];
          bVar8 = (int *)piVar1[2] == param_2;
        }
        if (bVar9 && !bVar8) break;
        piVar3 = (int *)*piVar1;
        piVar2 = piVar1;
      }
      iVar7 = *param_1;
      if (((int *)piVar1[1] <= param_2) &&
         (FUN_00006158((int)param_2 - piVar1[1],iVar7), extraout_r1_00 == 0)) {
        *(char *)param_2 = (char)piVar1[3];
        bVar4 = FUN_00006158((int)param_2 - piVar1[1],iVar7);
        *(byte *)(piVar1 + 3) = bVar4;
        uVar5 = FUN_00006158((int)param_2 - piVar1[1],iVar7);
        if (uVar5 == bVar4) {
          *(char *)((int)piVar1 + 0xd) = *(char *)((int)piVar1 + 0xd) + '\x01';
          param_1[7] = param_1[7] + 1;
          param_1[10] = param_1[10] + 1;
          if (piVar2 == (int *)0x0) {
            param_1[4] = *piVar1;
          }
          else {
            *piVar2 = *piVar1;
          }
          *piVar1 = param_1[3];
          param_1[3] = (int)piVar1;
          return 1;
        }
      }
LAB_0007b21c:
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    bVar9 = piVar1 <= param_2;
    bVar8 = param_2 == piVar1;
    if (bVar9 && !bVar8) {
      bVar9 = param_2 <= (int *)piVar1[2];
      bVar8 = (int *)piVar1[2] == param_2;
    }
    if (bVar9 && !bVar8) {
      iVar7 = *param_1;
      if (((int *)piVar1[1] <= param_2) &&
         (FUN_00006158((int)param_2 - piVar1[1],iVar7), extraout_r1 == 0)) {
        *(char *)param_2 = (char)piVar1[3];
        bVar4 = FUN_00006158((int)param_2 - piVar1[1],iVar7);
        *(byte *)(piVar1 + 3) = bVar4;
        uVar5 = FUN_00006158((int)param_2 - piVar1[1],iVar7);
        if (uVar5 == bVar4) {
          *(char *)((int)piVar1 + 0xd) = *(char *)((int)piVar1 + 0xd) + '\x01';
          param_1[7] = param_1[7] + 1;
          param_1[10] = param_1[10] + 1;
          if (*(char *)((int)piVar1 + 0xd) == *(char *)((int)piVar1 + 0xe)) {
            if (piVar2 == (int *)0x0) {
              param_1[3] = *piVar1;
            }
            else {
              *piVar2 = *piVar1;
            }
            iVar7 = param_1[2];
            if (iVar7 != 0) {
              param_1[7] = param_1[7] - (uint)*(byte *)(iVar7 + 0xe);
              param_1[6] = param_1[6] - (uint)*(byte *)(iVar7 + 0xe);
              iVar6 = param_1[1] + -8;
              if (iVar6 < 1) {
                iVar6 = param_1[1];
              }
              else {
                param_1[1] = iVar6;
              }
              if ((uint)(*param_1 * iVar6) < 0x800) {
                uVar5 = FUN_00006158(0x800);
                param_1[1] = uVar5;
              }
              else {
                uVar5 = param_1[1];
              }
              if (0xff < uVar5) {
                param_1[1] = 0xff;
              }
              param_1[0xc] = param_1[0xc] + 1;
              thunk_FUN_00181b24(iVar7);
              param_1[5] = param_1[5] + -1;
              param_1[2] = 0;
            }
            *piVar1 = param_1[2];
            param_1[2] = (int)piVar1;
          }
          return 1;
        }
      }
      goto LAB_0007b21c;
    }
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  } while( true );
}

