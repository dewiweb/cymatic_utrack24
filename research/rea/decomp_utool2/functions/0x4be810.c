// rea decompile_all
// name: FUN_004be810
// address: 0x4be810
// body: available
// range: 0x4be810-0x4bead4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_00464890(in_ECX[1]);
  piVar11 = (int *)*in_ECX;
  iVar1 = piVar11[2];
  iVar2 = *piVar11;
  for (piVar11 = (int *)*piVar11; piVar11 != (int *)(iVar1 * 0x10 + iVar2); piVar11 = piVar11 + 4) {
    iVar8 = *piVar11;
    iVar3 = piVar11[1];
    iVar9 = piVar11[2] + iVar8;
    iVar6 = piVar11[3] + iVar3;
    if ((((iVar3 < local_20) && (local_28 < iVar6)) && (iVar8 < local_1c)) && (local_24 < iVar9)) {
      if ((local_30 - local_38 == 1) && (local_c + local_14 == 0)) {
        if ((local_18 != 0) && (iVar3 <= local_28)) {
          *(int *)(param_1 + 8) = local_28;
          FUN_004bebe0(local_38,local_18);
        }
        iVar8 = local_2c;
        if (iVar6 < local_2c) {
          iVar8 = iVar6;
        }
        iVar9 = local_2c;
        if (iVar3 < local_34) {
          iVar3 = local_34;
        }
        for (; iVar3 < iVar8; iVar3 = iVar3 + 1) {
          *(int *)(param_1 + 8) = iVar3;
          FUN_004b9660(local_38,iVar3,1,iVar9,*(undefined4 *)(param_1 + 4));
          iVar9 = extraout_ECX;
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          *(int *)(param_1 + 8) = local_2c;
          FUN_004bebe0(local_38,local_10);
        }
      }
      else {
        iVar7 = local_38;
        if (local_38 < iVar8) {
          iVar7 = iVar8;
        }
        iVar10 = local_30;
        if (iVar9 < local_30) {
          iVar10 = iVar9;
        }
        iVar10 = iVar10 - iVar7;
        if ((local_14 == 0) || (local_24 < iVar8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((local_c == 0) || (bVar4 = true, iVar9 <= local_30)) {
          bVar4 = false;
        }
        if ((local_18 != 0) && (iVar3 <= local_28)) {
          *(int *)(param_1 + 8) = local_28;
          if (bVar5) {
            FUN_004bebe0(local_24,local_14 * local_18 >> 8);
          }
          if (0 < iVar10) {
            FUN_004beb80(iVar7,iVar10,local_18);
          }
          if (bVar4) {
            FUN_004bebe0(local_30,local_c * local_18 >> 8);
          }
        }
        iVar8 = local_2c;
        if (iVar6 < local_2c) {
          iVar8 = iVar6;
        }
        iVar9 = iVar6;
        if (iVar3 < local_34) {
          iVar3 = local_34;
        }
        for (; iVar3 < iVar8; iVar3 = iVar3 + 1) {
          *(int *)(param_1 + 8) = iVar3;
          if (bVar5) {
            FUN_004bebe0(local_24,local_14);
            iVar9 = extraout_ECX_00;
          }
          if (0 < iVar10) {
            FUN_004b9660(iVar7,*(undefined4 *)(param_1 + 8),iVar10,iVar9,
                         *(undefined4 *)(param_1 + 4));
            iVar9 = extraout_ECX_01;
          }
          if (bVar4) {
            FUN_004bebe0(local_30,local_c);
            iVar9 = extraout_ECX_02;
          }
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          *(int *)(param_1 + 8) = local_2c;
          if (bVar5) {
            FUN_004bebe0(local_24,local_14 * local_10 >> 8);
          }
          if (0 < iVar10) {
            FUN_004beb80(iVar7,iVar10,local_10);
          }
          if (bVar4) {
            FUN_004bebe0(local_30,local_c * local_10 >> 8);
          }
        }
      }
    }
  }
  return;
}

