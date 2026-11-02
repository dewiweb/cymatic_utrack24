// rea decompile_all
// name: FUN_00509710
// address: 0x509710
// body: available
// range: 0x509710-0x5098e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509710(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  
  if (*(double *)(in_ECX + 0x88) != 0.0) {
    uVar4 = *(uint *)(in_ECX + 0xb4);
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 - 1;
    }
    uVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x124)) {
      do {
        iVar1 = *(int *)(in_ECX + 0xb0);
        if (uVar5 < *(uint *)(in_ECX + 0x124)) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x11c) + uVar5 * 4);
        }
        else {
          iVar3 = 0;
        }
        iVar2 = *(int *)(in_ECX + 0x118);
        dVar8 = *(double *)(iVar3 + 0x78);
        iVar3 = *(int *)(iVar2 + 0x18);
        if ((((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 9)) ||
           (((iVar3 == 0xb || (iVar3 == 1)) || ((iVar3 == 3 || ((iVar3 == 10 || (iVar3 == 0xc)))))))
           ) {
          if (*(double *)(iVar2 + 0x70) < *(double *)(iVar2 + 0x78)) {
            if (*(double *)(iVar2 + 0x70) <= dVar8) {
              if (dVar8 <= *(double *)(iVar2 + 0x78)) {
                fVar6 = (float10)(**(code **)(**(int **)(iVar2 + 0x14) + 200))(dVar8);
                dVar8 = (double)fVar6;
              }
              else {
                dVar8 = 1.0;
              }
            }
            else {
              dVar8 = 0.0;
            }
          }
          else {
            dVar8 = 0.5;
          }
          iVar3 = *(int *)(iVar2 + 0x18);
          if ((((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 10)) || ((iVar3 == 0xc || (iVar3 == 8))))
          {
            dVar8 = 1.0 - dVar8;
          }
          fVar7 = (float)((double)*(int *)(iVar2 + 0xf4) * dVar8 + (double)*(int *)(iVar2 + 0xf0));
        }
        else {
          fVar7 = 0.0;
        }
        FUN_006e9790((int)(((float)iVar1 + fVar7) - (float)((int)uVar4 / 2)),0,uVar4,uVar4);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < *(int *)(in_ECX + 0x124));
    }
  }
  return;
}

