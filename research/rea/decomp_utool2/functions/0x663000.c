// rea decompile_all
// name: FUN_00663000
// address: 0x663000
// body: available
// range: 0x663000-0x663234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00663000(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int local_30;
  int local_2c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x170);
  iVar2 = *(int *)(param_1 + 0x198);
  uVar3 = *(undefined4 *)(param_1 + 0x178);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (cVar8 = FUN_00663470(), cVar8 == '\0')) {
    return 0;
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
      return 1;
    }
    local_8 = *(int *)(iVar2 + 0xc);
    iVar14 = *(int *)(iVar2 + 0x10);
    uVar4 = **(undefined4 **)(param_1 + 0x18);
    uVar5 = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar6 = *param_2;
    iVar7 = *(int *)(iVar2 + 0x3c);
    iVar15 = 0;
    for (iVar11 = *(int *)(param_1 + 0x16c); iVar11 <= iVar1; iVar11 = iVar11 + 1) {
      if (iVar14 < 8) {
        cVar8 = FUN_00667430(iVar14,0);
        if (cVar8 == '\0') {
          return 0;
        }
        local_8 = local_30;
        iVar14 = local_2c;
        if (7 < local_2c) goto LAB_006630e3;
        uVar9 = 1;
LAB_0066310c:
        uVar10 = FUN_00667350(iVar14,iVar7,uVar9);
        if ((int)uVar10 < 0) {
          return 0;
        }
        local_8 = local_30;
        iVar14 = local_2c;
      }
      else {
LAB_006630e3:
        uVar10 = local_8 >> ((char)iVar14 - 8U & 0x1f) & 0xff;
        iVar12 = *(int *)(iVar7 + 0x90 + uVar10 * 4);
        if (iVar12 == 0) {
          uVar9 = 9;
          goto LAB_0066310c;
        }
        uVar10 = (uint)*(byte *)(uVar10 + 0x490 + iVar7);
        iVar14 = iVar14 - iVar12;
      }
      iVar12 = (int)uVar10 >> 4;
      uVar10 = uVar10 & 0xf;
      if (uVar10 == 0) {
        if (iVar12 != 0xf) {
          iVar15 = 1 << ((byte)iVar12 & 0x1f);
          if (iVar12 != 0) {
            if (iVar14 < iVar12) {
              cVar8 = FUN_00667430(iVar14,iVar12);
              if (cVar8 == '\0') {
                return 0;
              }
              local_8 = local_30;
              iVar14 = local_2c;
            }
            iVar14 = iVar14 - iVar12;
            iVar15 = iVar15 + (local_8 >> ((byte)iVar14 & 0x1f) & iVar15 - 1U);
          }
          iVar15 = iVar15 + -1;
          break;
        }
        iVar11 = iVar11 + 0xf;
      }
      else {
        iVar11 = iVar11 + iVar12;
        if (iVar14 < (int)uVar10) {
          cVar8 = FUN_00667430(iVar14,uVar10);
          if (cVar8 == '\0') {
            return 0;
          }
          local_8 = local_30;
          iVar14 = local_2c;
        }
        iVar14 = iVar14 - uVar10;
        uVar13 = (1 << (sbyte)uVar10) - 1U & local_8 >> ((byte)iVar14 & 0x1f);
        if ((int)uVar13 < *(int *)(&DAT_00c02390 + uVar10 * 4)) {
          uVar13 = *(int *)(&DAT_00c020f0 + uVar10 * 4) + uVar13;
        }
        *(short *)(iVar6 + (&DAT_00c02140)[iVar11] * 2) = (short)uVar13 << ((byte)uVar3 & 0x1f);
      }
    }
    **(undefined4 **)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uVar5;
    *(int *)(iVar2 + 0xc) = local_8;
    *(int *)(iVar2 + 0x10) = iVar14;
    *(int *)(iVar2 + 0x14) = iVar15;
  }
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return 1;
}

