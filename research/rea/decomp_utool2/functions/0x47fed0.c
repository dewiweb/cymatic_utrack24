// rea decompile_all
// name: FUN_0047fed0
// address: 0x47fed0
// body: available
// range: 0x47fed0-0x48004f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fed0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *in_ECX;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  local_c = 0;
  piVar8 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar2 = in_ECX[6];
      iVar10 = *piVar8;
      if (0 < iVar10 + -1) {
        uVar3 = piVar8[1];
        puVar9 = (uint *)(piVar8 + 1);
        iVar12 = 0;
        param_1[1] = (in_ECX[2] + local_c) * ((int *)*param_1)[2] + *(int *)*param_1;
        for (iVar10 = iVar10 + -2; iVar11 = (int)uVar3 >> 8, -1 < iVar10; iVar10 = iVar10 + -1) {
          uVar4 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar5 = *puVar9;
          if ((int)uVar5 >> 8 == iVar11) {
            iVar12 = iVar12 + (uVar5 - uVar3) * uVar4;
          }
          else {
            if (0 < (int)((0x100 - (uVar3 & 0xff)) * uVar4 + iVar12) >> 8) {
              *(int *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[1]) = param_1[2];
            }
            if (0 < (int)uVar4) {
              iVar12 = ((int)uVar5 >> 8) - (iVar11 + 1);
              if (0 < iVar12) {
                uVar3 = param_1[2];
                iVar1 = uVar4 + 1;
                iVar6 = *(int *)(*param_1 + 0xc);
                puVar7 = (uint *)(iVar6 * (iVar11 + 1) + param_1[1]);
                do {
                  *puVar7 = ((uVar3 & 0xff00ff) * iVar1 >> 8 ^ (uVar3 >> 8 & 0xffff00ff) * iVar1) &
                            0xff00ff ^ (uVar3 >> 8 & 0xff00ff) * iVar1;
                  iVar12 = iVar12 + -1;
                  puVar7 = (uint *)((int)puVar7 + iVar6);
                } while (0 < iVar12);
              }
            }
            iVar12 = (uVar5 & 0xff) * uVar4;
          }
          uVar3 = uVar5;
        }
        if (0 < iVar12 >> 8) {
          *(int *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[1]) = param_1[2];
        }
      }
      local_c = local_c + 1;
      piVar8 = piVar8 + iVar2;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

