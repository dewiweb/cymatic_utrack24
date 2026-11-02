// rea decompile_all
// name: FUN_00441ca0
// address: 0x441ca0
// body: available
// range: 0x441ca0-0x441d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441ca0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = 0;
  if (0 < param_6) {
    do {
      piVar4 = (int *)(((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >>
                         3) * iVar5 + *(int *)(in_ECX + 0x80) * param_1) -
                       (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68) +
                      *(int *)(in_ECX + 0x70));
      if (param_3 == 0) {
        fVar8 = 0.0;
        fVar7 = 0.0;
      }
      else {
        iVar6 = *piVar4;
        iVar2 = iVar6;
        iVar3 = param_3;
        while (iVar3 = iVar3 + -1, iVar3 != 0) {
          piVar4 = piVar4 + *(int *)(in_ECX + 0x20);
          iVar1 = *piVar4;
          if (iVar6 < iVar1) {
            iVar6 = iVar1;
          }
          if (iVar1 < iVar2) {
            iVar2 = iVar1;
          }
        }
        fVar8 = (float)iVar2 * 4.656613e-10;
        fVar7 = (float)iVar6 * 4.656613e-10;
        if ((float)iVar6 * 4.656613e-10 <= fVar8) {
          fVar7 = fVar8;
        }
      }
      *(float *)(param_5 + iVar5 * 8) = fVar8;
      *(float *)(param_5 + 4 + iVar5 * 8) = fVar7;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_6);
  }
  return;
}

