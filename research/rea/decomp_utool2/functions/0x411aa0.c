// rea decompile_all
// name: FUN_00411aa0
// address: 0x411aa0
// body: available
// range: 0x411aa0-0x411cbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00411c06) */

void FUN_00411aa0(double *param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 *in_ECX;
  double *pdVar4;
  double *in_EDX;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  
  pdVar6 = in_EDX + (((int)param_1 - (int)in_EDX >> 3) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1);
  FUN_00411e00(param_1 + -1);
  pdVar7 = pdVar6 + 1;
  for (; in_EDX < pdVar6; pdVar6 = pdVar6 + -1) {
    if ((pdVar6[-1] < *pdVar6) || (*pdVar6 < pdVar6[-1])) break;
  }
  pdVar3 = pdVar7;
  pdVar5 = pdVar6;
  if (pdVar7 < param_1) {
    do {
      pdVar3 = pdVar7;
      if ((*pdVar7 < *pdVar6) || (*pdVar6 < *pdVar7)) break;
      pdVar7 = pdVar7 + 1;
      pdVar3 = pdVar7;
    } while (pdVar7 < param_1);
  }
joined_r0x00411b62:
  do {
    pdVar4 = pdVar5;
    if (param_1 <= pdVar7) {
joined_r0x00411bb5:
      for (; in_EDX < pdVar5; pdVar5 = pdVar5 + -1) {
        pdVar4 = pdVar4 + -1;
        dVar1 = *pdVar4;
        if (*pdVar6 <= dVar1) {
          if (*pdVar6 < dVar1) break;
          pdVar6 = pdVar6 + -1;
          if (pdVar6 != pdVar4) {
            dVar2 = *pdVar6;
            *pdVar6 = dVar1;
            *pdVar4 = dVar2;
          }
        }
      }
      if (pdVar5 == in_EDX) {
        if (pdVar7 == param_1) {
          in_ECX[1] = pdVar3;
          *in_ECX = pdVar6;
          return;
        }
        if (pdVar3 != pdVar7) {
          dVar1 = *pdVar6;
          *pdVar6 = *pdVar3;
          *pdVar3 = dVar1;
        }
        dVar1 = *pdVar6;
        *pdVar6 = *pdVar7;
        *pdVar7 = dVar1;
        pdVar7 = pdVar7 + 1;
        pdVar3 = pdVar3 + 1;
        pdVar6 = pdVar6 + 1;
      }
      else {
        pdVar5 = pdVar5 + -1;
        if (pdVar7 == param_1) {
          pdVar6 = pdVar6 + -1;
          if (pdVar5 != pdVar6) {
            dVar1 = *pdVar5;
            *pdVar5 = *pdVar6;
            *pdVar6 = dVar1;
          }
          dVar1 = *pdVar6;
          *pdVar6 = pdVar3[-1];
          pdVar3[-1] = dVar1;
          pdVar3 = pdVar3 + -1;
        }
        else {
          dVar1 = *pdVar7;
          *pdVar7 = *pdVar5;
          *pdVar5 = dVar1;
          pdVar7 = pdVar7 + 1;
        }
      }
      goto joined_r0x00411b62;
    }
    dVar1 = *pdVar7;
    pdVar8 = pdVar3;
    if (dVar1 <= *pdVar6) {
      if (dVar1 < *pdVar6) goto joined_r0x00411bb5;
      pdVar8 = pdVar3 + 1;
      if (pdVar3 != pdVar7) {
        dVar2 = *pdVar3;
        *pdVar3 = dVar1;
        *pdVar7 = dVar2;
      }
    }
    pdVar7 = pdVar7 + 1;
    pdVar3 = pdVar8;
  } while( true );
}

