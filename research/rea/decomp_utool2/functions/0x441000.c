// rea decompile_all
// name: FUN_00441000
// address: 0x441000
// body: available
// range: 0x441000-0x441141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441000(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ushort *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < param_6) {
    fVar8 = 4.656613e-10;
    local_14 = in_ECX;
    do {
      iVar3 = local_8;
      if (*(char *)(in_ECX + 0x88) == '\0') {
        local_c = *(int *)(in_ECX + 0x20);
        puVar5 = (ushort *)
                 (((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3) *
                    local_8 + *(int *)(in_ECX + 0x80) * param_1 + *(int *)(in_ECX + 0x70)) -
                  (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68));
        if (param_3 == 0.0) {
          local_1c = param_3;
          local_18 = param_3;
        }
        else {
          local_10 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8) << 0x10;
          iVar2 = local_10;
          fVar1 = param_3;
          while (puVar5 = puVar5 + *(int *)(in_ECX + 0x20), fVar1 = (float)((int)fVar1 + -1),
                fVar1 != 0.0) {
            iVar7 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8) * 0x10000;
            iVar6 = iVar7;
            if (iVar7 <= iVar2) {
              iVar6 = iVar2;
            }
            if (local_10 <= iVar7) {
              iVar7 = local_10;
            }
            local_10 = iVar7;
            iVar2 = iVar6;
          }
          local_1c = (float)local_10 * fVar8;
          in_ECX = local_14;
          if ((float)iVar2 * fVar8 <= local_1c) {
            local_18 = local_1c;
          }
          else {
            local_18 = (float)iVar2 * fVar8;
          }
        }
        pfVar4 = &local_1c;
      }
      else {
        pfVar4 = (float *)FUN_00442c40(local_24,local_8,param_1,param_2,param_3,param_4);
      }
      fVar1 = pfVar4[1];
      *(float *)(param_5 + iVar3 * 8) = *pfVar4;
      *(float *)(param_5 + 4 + iVar3 * 8) = fVar1;
      local_8 = iVar3 + 1;
    } while (iVar3 + 1 < param_6);
  }
  return;
}

