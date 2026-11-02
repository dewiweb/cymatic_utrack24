// rea decompile_all
// name: FUN_005e5be0
// address: 0x5e5be0
// body: available
// range: 0x5e5be0-0x5e5dd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e5be0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (*(int *)(param_1[2] + iVar1 * 4) == 0) {
    iVar2 = *param_1;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x40) + 4) + 0x1c) + iVar1 * 4) / 2;
    fVar11 = (float)*(int *)(in_EDX + 4) * 0.5;
    dVar7 = (double)(fVar11 * fVar11 * 1.85e-08);
    FUN_006f7a30();
    dVar8 = (double)(fVar11 * 0.00074);
    FUN_006f7a30();
    uVar3 = FUN_004c554b(iVar5 * 4 + 4);
    iVar6 = 0;
    *(undefined4 *)(param_1[2] + iVar1 * 4) = uVar3;
    if (0 < iVar5) {
      do {
        fVar12 = (((float)*(int *)(in_EDX + 4) * 0.5) / (float)iVar5) * (float)iVar6;
        dVar9 = (double)(fVar12 * fVar12 * 1.85e-08);
        FUN_006f7a30();
        dVar10 = (double)(fVar12 * 0.00074);
        FUN_006f7a30();
        fVar12 = ((float)dVar9 * 2.24 + (float)dVar10 * 13.1 + fVar12 * 0.0001) *
                 ((float)iVar2 / ((float)dVar7 * 2.24 + (float)dVar8 * 13.1 + fVar11 * 0.0001));
        FUN_00436410();
        iVar4 = (int)fVar12;
        if (*param_1 <= iVar4) {
          iVar4 = *param_1 + -1;
        }
        *(int *)(*(int *)(param_1[2] + iVar1 * 4) + iVar6 * 4) = iVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    *(undefined4 *)(*(int *)(param_1[2] + iVar1 * 4) + iVar6 * 4) = 0xffffffff;
    param_1[iVar1 + 3] = iVar5;
  }
  return;
}

