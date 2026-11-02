// rea decompile_all
// name: FUN_005d8820
// address: 0x5d8820
// body: available
// range: 0x5d8820-0x5d8a45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d8820(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint in_ECX;
  float *pfVar5;
  float *pfVar6;
  int in_EDX;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  int local_34;
  int local_24;
  float *local_20;
  int local_10;
  float *local_8;
  
  iVar7 = in_ECX * in_EDX;
  if (0 < in_EDX) {
    pfVar3 = param_1 + iVar7;
    pfVar10 = param_2 + -1;
    pfVar2 = param_1;
    pfVar5 = param_2;
    local_10 = in_EDX;
    do {
      pfVar10 = pfVar10 + in_ECX * 2;
      *pfVar5 = *pfVar3 + *pfVar2;
      fVar14 = *pfVar2;
      fVar13 = *pfVar3;
      pfVar2 = pfVar2 + in_ECX;
      pfVar3 = pfVar3 + in_ECX;
      pfVar5 = pfVar5 + in_ECX * 2;
      *pfVar10 = fVar14 - fVar13;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      if (0 < in_EDX) {
        pfVar3 = param_1 + iVar7;
        pfVar2 = param_2 + in_ECX * 2;
        local_8 = param_2;
        pfVar10 = param_1;
        local_34 = in_EDX;
        do {
          if (2 < (int)in_ECX) {
            local_20 = (float *)(param_3 + 4);
            local_24 = (in_ECX - 3 >> 1) + 1;
            pfVar5 = pfVar3;
            pfVar8 = pfVar10;
            pfVar11 = pfVar2;
            pfVar12 = local_8;
            do {
              pfVar6 = pfVar5 + 2;
              pfVar9 = pfVar8 + 2;
              pfVar1 = local_20 + -1;
              fVar14 = *local_20;
              local_20 = local_20 + 2;
              local_24 = local_24 + -1;
              fVar13 = *pfVar1 * pfVar5[1] + *pfVar6 * fVar14;
              fVar14 = *pfVar1 * *pfVar6 - fVar14 * pfVar5[1];
              pfVar12[2] = fVar14 + *pfVar9;
              pfVar11[-2] = fVar14 - *pfVar9;
              pfVar12[1] = pfVar8[1] + fVar13;
              pfVar11[-3] = pfVar8[1] - fVar13;
              pfVar5 = pfVar6;
              pfVar8 = pfVar9;
              pfVar11 = pfVar11 + -2;
              pfVar12 = pfVar12 + 2;
            } while (local_24 != 0);
          }
          pfVar2 = pfVar2 + in_ECX * 2;
          pfVar10 = pfVar10 + in_ECX;
          local_8 = local_8 + in_ECX * 2;
          pfVar3 = pfVar3 + in_ECX;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      uVar4 = in_ECX & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == 1) {
        return;
      }
    }
    if (0 < in_EDX) {
      param_2 = param_2 + in_ECX;
      pfVar3 = param_1 + (in_ECX - 1);
      param_1 = param_1 + (in_ECX - 1) + iVar7;
      do {
        fVar14 = *param_1;
        param_1 = param_1 + in_ECX;
        *param_2 = -fVar14;
        fVar14 = *pfVar3;
        pfVar3 = pfVar3 + in_ECX;
        param_2[-1] = fVar14;
        param_2 = param_2 + in_ECX * 2;
        in_EDX = in_EDX + -1;
      } while (in_EDX != 0);
    }
  }
  return;
}

