// rea decompile_all
// name: FUN_005be3c0
// address: 0x5be3c0
// body: available
// range: 0x5be3c0-0x5be4f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005be3c0(code *param_1)

{
  double *pdVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  int *in_EDX;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int local_20;
  
  local_20 = 0;
  if (0 < in_ECX[2]) {
    do {
      uVar10 = 0;
      piVar3 = *(int **)(*in_ECX + local_20 * 4);
      iVar4 = piVar3[2];
      if (0 < iVar4) {
        do {
          if (uVar10 < (uint)piVar3[2]) {
            puVar11 = *(undefined4 **)(*piVar3 + uVar10 * 4);
          }
          else {
            puVar11 = (undefined4 *)0x0;
          }
          cVar5 = (*param_1)();
          if (cVar5 != '\0') {
            puVar6 = operator_new(0x20);
            pdVar1 = (double *)(puVar11 + 2);
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar11 + 2);
            iVar8 = puVar11[4];
            puVar6[4] = iVar8;
            if (iVar8 < 5) {
              *puVar6 = *puVar11;
            }
            else {
              if (4 < (int)puVar11[4]) {
                puVar11 = (undefined4 *)*puVar11;
              }
              if (iVar8 < 5) {
                FUN_004c2c30(puVar6,puVar11,puVar6[4]);
              }
              else {
                uVar7 = FUN_004c554b(iVar8);
                *puVar6 = uVar7;
                FUN_004c2c30(uVar7,puVar11,puVar6[4]);
              }
            }
            puVar6[6] = 0;
            dVar2 = *pdVar1;
            *(double *)(puVar6 + 2) = dVar2 + 0.0;
            iVar8 = in_EDX[2] + -1;
            if (-1 < iVar8) {
              piVar9 = (int *)(*in_EDX + iVar8 * 4);
              do {
                if (*(double *)(*piVar9 + 8) <= dVar2 + 0.0) break;
                piVar9 = piVar9 + -1;
                iVar8 = iVar8 + -1;
              } while (-1 < iVar8);
            }
            FUN_00411110(iVar8 + 1,puVar6);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar4);
      }
      local_20 = local_20 + 1;
    } while (local_20 < in_ECX[2]);
  }
  return;
}

