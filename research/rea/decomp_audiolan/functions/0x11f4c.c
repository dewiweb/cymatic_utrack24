// rea decompile_all
// name: FUN_00011f4c
// address: 0x11f4c
// body: available
// range: 0x11f4c-0x1223b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12198 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011f4c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x24))();
  iVar4 = FUN_00046630(uVar3,0);
  iVar5 = (**(code **)(**(int **)(param_2 + 4) + 0x9c))();
  uVar15 = iVar5 * iVar4;
  iVar5 = (**(code **)(**(int **)(param_3 + 4) + 0x9c))();
  uVar6 = iVar4 * iVar5;
  piVar12 = *(int **)(*(int *)(param_1 + 0xc0) + 0x164);
  iVar5 = (**(code **)(*piVar12 + 0x1c))(piVar12);
  if (iVar5 == 0) {
    thunk_FUN_000028a4(DAT_00012240);
    return;
  }
  iVar5 = 0x80;
  do {
    iVar7 = (**(code **)(**(int **)(param_2 + 4) + 0x148))(*(int **)(param_2 + 4),0);
    if (iVar7 == 0) goto LAB_0001219c;
    FUN_00014b7c();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x24))();
  iVar5 = FUN_0004669c(uVar3,0);
  uVar13 = iVar5 * 300;
  uVar11 = 0;
  iVar5 = 0;
  do {
    iVar7 = (**(code **)(**(int **)(param_2 + 4) + 0x148))(*(int **)(param_2 + 4),0);
    if (iVar7 == 0) {
LAB_0001219c:
                    /* WARNING: Could not recover jumptable at 0x000121b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar12 + 0x20))(piVar12);
      return;
    }
    uVar14 = *(uint *)(iVar7 + 4);
    if (((uVar11 == 0) || (uVar13 < uVar11)) && (uVar11 < uVar14)) {
      uVar11 = FUN_0017bfc0();
      if (*DAT_0001223c + 60000U < uVar11) {
        iVar5 = FUN_000cc044(param_1 + 0xdc);
        iVar8 = FUN_000cbd4c(param_1 + 0xdc);
        iVar5 = iVar5 - iVar8;
        FUN_000cbd68(param_1 + 0xdc);
      }
      iVar8 = FUN_0017bfc0();
      uVar11 = uVar14 + uVar13;
      *DAT_0001223c = iVar8;
    }
    if (uVar11 < uVar13 && uVar14 < uVar13) {
      uVar11 = uVar13;
    }
    iVar8 = FUN_00014bac(param_4,0);
    if (iVar8 != 0) {
      iVar9 = (**(code **)(*piVar12 + 0x38))(piVar12,iVar8,iVar4,uVar14,iVar7);
      if (iVar9 == 0) {
        FUN_00014b7c(iVar8);
      }
      else {
        if ((8 < iVar5) &&
           (puVar10 = (undefined4 *)((uint)*(ushort *)(iVar8 + -2) + iVar8 + 0x14), uVar6 != 0)) {
          uVar1 = uVar6 >> 1;
          puVar2 = puVar10 + -1;
          if ((uVar6 & 1) != 0) {
            *puVar10 = 0;
            puVar2 = puVar10;
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2 = puVar2 + 2;
          }
        }
        (**(code **)(**(int **)(param_3 + 4) + 0x140))(*(int **)(param_3 + 4),iVar8);
      }
    }
    if (iVar5 < 9) {
      FUN_00110eec();
      iVar8 = FUN_00110eb0();
      if (iVar8 != 0) goto LAB_000121d4;
    }
    else {
LAB_000121d4:
      puVar10 = (undefined4 *)((uint)*(ushort *)(iVar7 + -2) + iVar7 + 0x14);
      if (uVar15 != 0) {
        uVar1 = uVar15 >> 1;
        puVar2 = puVar10 + -1;
        if ((uVar15 & 1) != 0) {
          *puVar10 = 0;
          puVar2 = puVar10;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2 = puVar2 + 2;
        }
      }
    }
    (**(code **)(*piVar12 + 0x34))(piVar12,iVar7,iVar4,uVar14);
  } while( true );
}

