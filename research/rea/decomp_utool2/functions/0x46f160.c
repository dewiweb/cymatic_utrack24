// rea decompile_all
// name: FUN_0046f160
// address: 0x46f160
// body: available
// range: 0x46f160-0x46f356 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f160(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
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
  
  if (0 < in_ECX[2]) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar9 = param_1[2] + iVar1;
    iVar6 = param_1[3] + iVar2;
    uVar11 = in_ECX[2] - 1;
    if (-1 < (int)uVar11) {
      iVar12 = uVar11 * 0x10;
      do {
        iVar3 = *(int *)(*in_ECX + 4 + iVar12);
        piVar8 = (int *)(*in_ECX + iVar12);
        iVar4 = *piVar8;
        iVar10 = piVar8[2] + iVar4;
        iVar5 = piVar8[3];
        iVar7 = iVar5 + iVar3;
        if ((((iVar4 < iVar9) && (iVar1 < iVar10)) && (iVar3 < iVar6)) && (iVar2 < iVar7)) {
          if (iVar4 < iVar1) {
            if (((iVar3 < iVar2) || (iVar6 < iVar7)) || (iVar9 < iVar10)) {
              *piVar8 = iVar1;
              piVar8[2] = iVar10 - iVar1;
              local_30 = iVar1 - iVar4;
              local_38 = iVar4;
              local_34 = iVar3;
              local_2c = iVar5;
              FUN_004718f0(uVar11 + 1,&local_38);
              uVar11 = uVar11 + 2;
              iVar12 = iVar12 + 0x20;
            }
            else {
              piVar8[2] = iVar1 - iVar4;
            }
          }
          else if (iVar9 < iVar10) {
            *piVar8 = iVar9;
            piVar8[2] = iVar10 - iVar9;
            if ((iVar3 < iVar2) || (iVar6 < iVar7)) {
              local_20 = iVar9 - iVar4;
              local_28 = iVar4;
              local_24 = iVar3;
              local_1c = iVar5;
              FUN_004718f0(uVar11 + 1,&local_28);
              uVar11 = uVar11 + 2;
              iVar12 = iVar12 + 0x20;
            }
          }
          else if (iVar3 < iVar2) {
            if (iVar6 < iVar7) {
              piVar8[1] = iVar2;
              piVar8[3] = iVar7 - iVar2;
              local_10 = piVar8[2];
              local_c = iVar2 - iVar3;
              local_18 = iVar4;
              local_14 = iVar3;
              FUN_004718f0(uVar11 + 1,&local_18);
              uVar11 = uVar11 + 2;
              iVar12 = iVar12 + 0x20;
            }
            else {
              piVar8[3] = iVar2 - iVar3;
            }
          }
          else if (iVar6 < iVar7) {
            piVar8[1] = iVar6;
            piVar8[3] = iVar7 - iVar6;
          }
          else if (uVar11 < (uint)in_ECX[2]) {
            FUN_00472850(uVar11);
          }
        }
        iVar12 = iVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
  }
  return;
}

