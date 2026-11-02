// rea decompile_all
// name: FUN_00441210
// address: 0x441210
// body: available
// range: 0x441210-0x44132c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441210(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  uint *puVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float fVar9;
  float local_20 [2];
  undefined4 local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar8 = 0;
  if (0 < param_6) {
    do {
      iVar7 = *(int *)(in_ECX + 0x80) * param_1;
      piVar2 = *(int **)(in_ECX + 0x68);
      if (*(char *)(in_ECX + 0x88) == '\0') {
        puVar5 = (uint *)(((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U))
                            >> 3) * iVar8 + iVar7) - piVar2[2]) + *piVar2 + *(int *)(in_ECX + 0x70))
        ;
        if (param_3 == 0.0) {
          local_10 = param_3;
          local_c = param_3;
        }
        else {
          uVar3 = *puVar5;
          local_8 = (float)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                           uVar3 << 0x18);
          fVar4 = local_8;
          local_10 = local_8;
          fVar1 = param_3;
          while (local_c = fVar4, fVar1 = (float)((int)fVar1 + -1), fVar1 != 0.0) {
            puVar5 = puVar5 + *(int *)(in_ECX + 0x20);
            uVar3 = *puVar5;
            local_8 = (float)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18);
            fVar9 = local_8;
            if (local_10 <= local_8) {
              fVar9 = local_10;
            }
            fVar4 = local_8;
            local_10 = fVar9;
            if (local_8 <= local_c) {
              fVar4 = local_c;
            }
          }
          if (local_c <= local_10) {
            local_c = local_10;
          }
          else {
          }
        }
        pfVar6 = &local_10;
      }
      else {
        local_18 = *(undefined4 *)(in_ECX + 0x20);
        local_14 = ((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3)
                     * iVar8 + iVar7) - piVar2[2]) + *piVar2 + *(int *)(in_ECX + 0x70);
        FUN_00442db0(local_20,param_3);
        pfVar6 = local_20;
      }
      fVar1 = pfVar6[1];
      *(float *)(param_5 + iVar8 * 8) = *pfVar6;
      *(float *)(param_5 + 4 + iVar8 * 8) = fVar1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_6);
  }
  return;
}

