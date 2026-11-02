// rea decompile_all
// name: FUN_005c74f0
// address: 0x5c74f0
// body: available
// range: 0x5c74f0-0x5c7670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c74f0(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float *in_EDX;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float in_XMM2_Da;
  int local_14;
  
  iVar5 = (int)(((int)param_1 >> 0x1f & 3U) + param_1) >> 2;
  if (((uint)in_ECX & 0xf) == 0) {
    if (((uint)in_EDX & 0xf) == 0) {
      if (0 < iVar5) {
        do {
          fVar1 = *in_EDX;
          fVar2 = in_EDX[1];
          fVar3 = in_EDX[2];
          fVar4 = in_EDX[3];
          in_EDX = in_EDX + 4;
          *in_ECX = fVar1 * in_XMM2_Da;
          in_ECX[1] = fVar2 * in_XMM2_Da;
          in_ECX[2] = fVar3 * in_XMM2_Da;
          in_ECX[3] = fVar4 * in_XMM2_Da;
          in_ECX = in_ECX + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (0 < iVar5) {
      do {
        fVar1 = *in_EDX;
        fVar2 = in_EDX[1];
        fVar3 = in_EDX[2];
        fVar4 = in_EDX[3];
        in_EDX = in_EDX + 4;
        *in_ECX = fVar1 * in_XMM2_Da;
        in_ECX[1] = fVar2 * in_XMM2_Da;
        in_ECX[2] = fVar3 * in_XMM2_Da;
        in_ECX[3] = fVar4 * in_XMM2_Da;
        in_ECX = in_ECX + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (((uint)in_EDX & 0xf) == 0) {
    if (0 < iVar5) {
      do {
        fVar1 = *in_EDX;
        fVar2 = in_EDX[1];
        fVar3 = in_EDX[2];
        fVar4 = in_EDX[3];
        in_EDX = in_EDX + 4;
        *in_ECX = fVar1 * in_XMM2_Da;
        in_ECX[1] = fVar2 * in_XMM2_Da;
        in_ECX[2] = fVar3 * in_XMM2_Da;
        in_ECX[3] = fVar4 * in_XMM2_Da;
        in_ECX = in_ECX + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (0 < iVar5) {
    do {
      fVar1 = *in_EDX;
      fVar2 = in_EDX[1];
      fVar3 = in_EDX[2];
      fVar4 = in_EDX[3];
      in_EDX = in_EDX + 4;
      *in_ECX = fVar1 * in_XMM2_Da;
      in_ECX[1] = fVar2 * in_XMM2_Da;
      in_ECX[2] = fVar3 * in_XMM2_Da;
      in_ECX[3] = fVar4 * in_XMM2_Da;
      in_ECX = in_ECX + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1 = param_1 & 3;
  if ((param_1 != 0) && (iVar5 = 0, param_1 != 0)) {
    if (3 < param_1) {
      local_14 = (param_1 - 4 >> 2) + 1;
      iVar5 = local_14 * 4;
      pfVar6 = in_ECX + 1;
      pfVar8 = in_EDX + 3;
      do {
        local_14 = local_14 + -1;
        pfVar6[-1] = pfVar8[-3] * in_XMM2_Da;
        *pfVar6 = *(float *)((int)in_EDX + (-0x10 - (int)in_ECX) + (int)(pfVar6 + 4)) * in_XMM2_Da;
        pfVar6[1] = pfVar8[-1] * in_XMM2_Da;
        pfVar6[2] = in_XMM2_Da * *pfVar8;
        pfVar6 = pfVar6 + 4;
        pfVar8 = pfVar8 + 4;
      } while (local_14 != 0);
    }
    if (iVar5 < (int)param_1) {
      iVar7 = param_1 - iVar5;
      pfVar6 = in_ECX + iVar5;
      do {
        *pfVar6 = *(float *)((int)pfVar6 + ((int)in_EDX - (int)in_ECX)) * in_XMM2_Da;
        iVar7 = iVar7 + -1;
        pfVar6 = pfVar6 + 1;
      } while (iVar7 != 0);
    }
  }
  return;
}

