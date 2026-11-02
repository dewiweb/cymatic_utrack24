// rea decompile_all
// name: FUN_005c6580
// address: 0x5c6580
// body: available
// range: 0x5c6580-0x5c6700 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6580(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *in_ECX;
  int *in_EDX;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  float in_XMM2_Da;
  int local_18;
  
  iVar4 = (int)(((int)param_1 >> 0x1f & 3U) + param_1) >> 2;
  if (((uint)in_ECX & 0xf) == 0) {
    if (((uint)in_EDX & 0xf) == 0) {
      if (0 < iVar4) {
        do {
          iVar6 = *in_EDX;
          iVar1 = in_EDX[1];
          iVar2 = in_EDX[2];
          iVar3 = in_EDX[3];
          in_EDX = in_EDX + 4;
          *in_ECX = (float)iVar6 * in_XMM2_Da;
          in_ECX[1] = (float)iVar1 * in_XMM2_Da;
          in_ECX[2] = (float)iVar2 * in_XMM2_Da;
          in_ECX[3] = (float)iVar3 * in_XMM2_Da;
          in_ECX = in_ECX + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (0 < iVar4) {
      do {
        iVar6 = *in_EDX;
        iVar1 = in_EDX[1];
        iVar2 = in_EDX[2];
        iVar3 = in_EDX[3];
        in_EDX = in_EDX + 4;
        *in_ECX = (float)iVar6 * in_XMM2_Da;
        in_ECX[1] = (float)iVar1 * in_XMM2_Da;
        in_ECX[2] = (float)iVar2 * in_XMM2_Da;
        in_ECX[3] = (float)iVar3 * in_XMM2_Da;
        in_ECX = in_ECX + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (((uint)in_EDX & 0xf) == 0) {
    if (0 < iVar4) {
      do {
        iVar6 = *in_EDX;
        iVar1 = in_EDX[1];
        iVar2 = in_EDX[2];
        iVar3 = in_EDX[3];
        in_EDX = in_EDX + 4;
        *in_ECX = (float)iVar6 * in_XMM2_Da;
        in_ECX[1] = (float)iVar1 * in_XMM2_Da;
        in_ECX[2] = (float)iVar2 * in_XMM2_Da;
        in_ECX[3] = (float)iVar3 * in_XMM2_Da;
        in_ECX = in_ECX + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (0 < iVar4) {
    do {
      iVar6 = *in_EDX;
      iVar1 = in_EDX[1];
      iVar2 = in_EDX[2];
      iVar3 = in_EDX[3];
      in_EDX = in_EDX + 4;
      *in_ECX = (float)iVar6 * in_XMM2_Da;
      in_ECX[1] = (float)iVar1 * in_XMM2_Da;
      in_ECX[2] = (float)iVar2 * in_XMM2_Da;
      in_ECX[3] = (float)iVar3 * in_XMM2_Da;
      in_ECX = in_ECX + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1 = param_1 & 3;
  if ((param_1 != 0) && (iVar4 = 0, param_1 != 0)) {
    if (3 < param_1) {
      local_18 = (param_1 - 4 >> 2) + 1;
      iVar4 = local_18 * 4;
      pfVar5 = in_ECX + 1;
      piVar7 = in_EDX + 3;
      do {
        local_18 = local_18 + -1;
        pfVar5[-1] = (float)piVar7[-3] * in_XMM2_Da;
        *pfVar5 = (float)*(int *)((int)in_EDX + (-0x10 - (int)in_ECX) + (int)(pfVar5 + 4)) *
                  in_XMM2_Da;
        pfVar5[1] = (float)piVar7[-1] * in_XMM2_Da;
        pfVar5[2] = (float)*piVar7 * in_XMM2_Da;
        pfVar5 = pfVar5 + 4;
        piVar7 = piVar7 + 4;
      } while (local_18 != 0);
    }
    if (iVar4 < (int)param_1) {
      iVar6 = param_1 - iVar4;
      pfVar5 = in_ECX + iVar4;
      do {
        *pfVar5 = (float)*(int *)((int)pfVar5 + ((int)in_EDX - (int)in_ECX)) * in_XMM2_Da;
        iVar6 = iVar6 + -1;
        pfVar5 = pfVar5 + 1;
      } while (iVar6 != 0);
    }
  }
  return;
}

