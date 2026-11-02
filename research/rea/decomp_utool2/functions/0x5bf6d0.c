// rea decompile_all
// name: FUN_005bf6d0
// address: 0x5bf6d0
// body: available
// range: 0x5bf6d0-0x5bf807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bf6d0(int *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  
  if (*(double *)(in_ECX + 0x20) == 0.0) {
    *(double *)(in_ECX + 0x20) =
         6.283185307179586 / (*(double *)(in_ECX + 0x10) / *(double *)(in_ECX + 8));
  }
  iVar4 = 0;
  if (0 < param_1[2]) {
    do {
      dVar1 = *(double *)(in_ECX + 0x18);
      dVar6 = dVar1;
      FUN_006f9250();
      fVar7 = (float)dVar6 * *(float *)(in_ECX + 0x28);
      *(double *)(in_ECX + 0x18) = dVar1 + *(double *)(in_ECX + 0x20);
      iVar5 = *(int *)*param_1 + -1;
      if (-1 < iVar5) {
        if (3 < *(int *)*param_1) {
          do {
            iVar2 = *param_1;
            *(float *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar5 * 4) + (param_1[1] + iVar4) * 4) =
                 fVar7;
            *(undefined1 *)(iVar2 + 0x94) = 0;
            iVar2 = *param_1;
            *(float *)(*(int *)(*(int *)(iVar2 + 0xc) + -4 + iVar5 * 4) + (param_1[1] + iVar4) * 4)
                 = fVar7;
            *(undefined1 *)(iVar2 + 0x94) = 0;
            iVar2 = *param_1;
            *(float *)(*(int *)(*(int *)(iVar2 + 0xc) + -8 + iVar5 * 4) + (param_1[1] + iVar4) * 4)
                 = fVar7;
            *(undefined1 *)(iVar2 + 0x94) = 0;
            iVar3 = *param_1;
            iVar2 = iVar5 * 4;
            iVar5 = iVar5 + -4;
            *(float *)(*(int *)(*(int *)(iVar3 + 0xc) + -0xc + iVar2) + (param_1[1] + iVar4) * 4) =
                 fVar7;
            *(undefined1 *)(iVar3 + 0x94) = 0;
          } while (2 < iVar5);
        }
        for (; -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar2 = *param_1;
          *(float *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar5 * 4) + (param_1[1] + iVar4) * 4) = fVar7
          ;
          *(undefined1 *)(iVar2 + 0x94) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[2]);
  }
  return;
}

