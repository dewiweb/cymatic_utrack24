// rea decompile_all
// name: FUN_005ee010
// address: 0x5ee010
// body: available
// range: 0x5ee010-0x5ee1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ee010(undefined4 param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar9 = param_2[2];
  uVar12 = 0;
  uVar1 = *param_2;
  if (uVar9 != 0) {
    iVar11 = param_4[1];
    puVar4 = (undefined4 *)(iVar11 + 0x2dec);
    do {
      piVar6 = (int *)*puVar4;
      piVar7 = *(int **)(param_3 + uVar12 * 4);
      uVar8 = uVar1 * 4;
      while (uVar3 = uVar8 - 4, 3 < uVar8) {
        if (*piVar7 != *piVar6) goto LAB_005ee076;
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
        uVar8 = uVar3;
      }
      if (uVar3 != 0xfffffffc) {
LAB_005ee076:
        if (((char)*piVar7 != (char)*piVar6) ||
           ((uVar3 != 0xfffffffd &&
            ((*(char *)((int)piVar7 + 1) != *(char *)((int)piVar6 + 1) ||
             ((uVar3 != 0xfffffffe &&
              ((*(char *)((int)piVar7 + 2) != *(char *)((int)piVar6 + 2) ||
               ((uVar3 != 0xffffffff && (*(char *)((int)piVar7 + 3) != *(char *)((int)piVar6 + 3))))
               ))))))))) {
          uVar8 = 0;
          local_10 = 0;
          local_14 = 0;
          uVar9 = 0;
          if (uVar1 == 0) goto LAB_005ee10c;
          iVar2 = *(int *)(param_3 + uVar12 * 4);
          piVar6 = *(int **)(iVar11 + 0x2dec + uVar12 * 4);
          iVar10 = iVar2 - (int)piVar6;
          goto LAB_005ee0e0;
        }
      }
      uVar12 = uVar12 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar12 < uVar9);
  }
  *(int *)(param_4[1] + 0x2e10) = *(int *)(param_4[1] + 0x2e10) - uVar1;
  if (uVar9 != 0) {
    iVar11 = 0x2dec;
    do {
      iVar2 = *(int *)(iVar11 + param_4[1]);
      FUN_004c1df0(iVar2,iVar2 + uVar1 * 4,*(int *)(param_4[1] + 0x2e10) << 2);
      iVar11 = iVar11 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return 0;
  while( true ) {
    uVar8 = uVar8 + 1;
    piVar6 = piVar6 + 1;
    if (uVar1 <= uVar8) break;
LAB_005ee0e0:
    if (*(int *)(iVar10 + (int)piVar6) != *piVar6) {
      local_10 = *(undefined4 *)(*(int *)(iVar11 + 0x2dec + uVar12 * 4) + uVar8 * 4);
      local_14 = *(undefined4 *)(iVar2 + uVar8 * 4);
      uVar9 = uVar8;
      goto LAB_005ee10c;
    }
  }
  uVar9 = 0;
LAB_005ee10c:
  uVar8 = param_2[6];
  uVar3 = param_2[7];
  *(uint *)(iVar11 + 0x2e20) = uVar9 + param_2[6];
  *(uint *)(iVar11 + 0x2e24) = uVar3 + CARRY4(uVar9,uVar8);
  uVar5 = __aulldiv(param_2[6],param_2[7],uVar1,0);
  *(undefined4 *)(param_4[1] + 0x2e28) = uVar5;
  *(uint *)(param_4[1] + 0x2e2c) = uVar12;
  *(uint *)(param_4[1] + 0x2e30) = uVar9;
  *(undefined4 *)(param_4[1] + 0x2e34) = local_10;
  *(undefined4 *)(param_4[1] + 0x2e38) = local_14;
  *(undefined4 *)*param_4 = 4;
  return 1;
}

