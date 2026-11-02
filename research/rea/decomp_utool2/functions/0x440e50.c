// rea decompile_all
// name: FUN_00440e50
// address: 0x440e50
// body: available
// range: 0x440e50-0x440ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440e50(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_8;
  
  local_8 = 0;
  if (0 < param_6) {
    do {
      local_10 = *(int *)(in_ECX + 0x20);
      piVar2 = *(int **)(in_ECX + 0x68);
      iVar4 = (((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3) *
               local_8 + *(int *)(in_ECX + 0x80) * param_1) - piVar2[2];
      if (*(char *)(in_ECX + 0x88) == '\0') {
        pbVar5 = (byte *)(iVar4 + *(int *)(in_ECX + 0x70) + *piVar2);
        if (param_3 == 0.0) {
          local_20 = param_3;
          local_1c = param_3;
        }
        else {
          iVar4 = (*pbVar5 - 0x80) * 0x1000000;
          iVar8 = iVar4;
          fVar1 = param_3;
          while (iVar3 = iVar8, fVar1 = (float)((int)fVar1 + -1), fVar1 != 0.0) {
            pbVar5 = pbVar5 + local_10;
            iVar8 = (*pbVar5 - 0x80) * 0x1000000;
            iVar7 = iVar8;
            if (iVar8 <= iVar4) {
              iVar7 = iVar4;
            }
            iVar4 = iVar7;
            if (iVar3 <= iVar8) {
              iVar8 = iVar3;
            }
          }
          local_20 = (float)iVar3 * 4.656613e-10;
          if ((float)iVar4 * 4.656613e-10 <= local_20) {
            local_1c = local_20;
          }
          else {
            local_1c = (float)iVar4 * 4.656613e-10;
          }
        }
        pfVar6 = &local_20;
      }
      else {
        pbVar5 = (byte *)(iVar4 + *piVar2 + *(int *)(in_ECX + 0x70));
        if (param_3 == 0.0) {
          local_18 = param_3;
          pfVar6 = &local_18;
          local_14 = param_3;
        }
        else {
          iVar4 = (*pbVar5 - 0x80) * 0x1000000;
          iVar8 = iVar4;
          fVar1 = param_3;
          while (iVar3 = iVar8, fVar1 = (float)((int)fVar1 + -1), fVar1 != 0.0) {
            pbVar5 = pbVar5 + local_10;
            iVar8 = (*pbVar5 - 0x80) * 0x1000000;
            iVar7 = iVar8;
            if (iVar8 <= iVar4) {
              iVar7 = iVar4;
            }
            iVar4 = iVar7;
            if (iVar3 <= iVar8) {
              iVar8 = iVar3;
            }
          }
          local_18 = (float)iVar3 * 4.656613e-10;
          if ((float)iVar4 * 4.656613e-10 <= local_18) {
            local_14 = local_18;
            pfVar6 = &local_18;
          }
          else {
            local_14 = (float)iVar4 * 4.656613e-10;
            pfVar6 = &local_18;
          }
        }
      }
      fVar1 = pfVar6[1];
      *(float *)(param_5 + local_8 * 8) = *pfVar6;
      *(float *)(param_5 + 4 + local_8 * 8) = fVar1;
      local_8 = local_8 + 1;
    } while (local_8 < param_6);
  }
  return;
}

