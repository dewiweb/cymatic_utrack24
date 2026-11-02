// rea decompile_all
// name: FUN_004419e0
// address: 0x4419e0
// body: available
// range: 0x4419e0-0x441abc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004419e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int local_c;
  
  local_c = 0;
  if (0 < param_6) {
    do {
      pbVar3 = (byte *)(((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U))
                          >> 3) * local_c + *(int *)(in_ECX + 0x80) * param_1) -
                        (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68) +
                       *(int *)(in_ECX + 0x70));
      if (param_3 == 0) {
        fVar8 = 0.0;
        fVar7 = 0.0;
      }
      else {
        iVar6 = (*pbVar3 - 0x80) * 0x1000000;
        iVar5 = iVar6;
        iVar1 = param_3;
        while (iVar2 = iVar5, iVar1 = iVar1 + -1, iVar1 != 0) {
          pbVar3 = pbVar3 + *(int *)(in_ECX + 0x20);
          iVar5 = (*pbVar3 - 0x80) * 0x1000000;
          iVar4 = iVar5;
          if (iVar5 <= iVar6) {
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          if (iVar2 <= iVar5) {
            iVar5 = iVar2;
          }
        }
        fVar8 = (float)iVar2 * 4.656613e-10;
        fVar7 = (float)iVar6 * 4.656613e-10;
        if ((float)iVar6 * 4.656613e-10 <= fVar8) {
          fVar7 = fVar8;
        }
      }
      *(float *)(param_5 + local_c * 8) = fVar8;
      *(float *)(param_5 + 4 + local_c * 8) = fVar7;
      local_c = local_c + 1;
    } while (local_c < param_6);
  }
  return;
}

