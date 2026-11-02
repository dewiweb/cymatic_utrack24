// rea decompile_all
// name: FUN_005d8a70
// address: 0x5d8a70
// body: available
// range: 0x5d8a70-0x5d8c76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d8a70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int in_EDX;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar5 = 0;
  iVar1 = -1;
  iVar9 = 0;
  local_8 = in_ECX;
  do {
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 < 4) {
        iVar5 = *(int *)(&DAT_00c14c70 + iVar1 * 4);
      }
      else {
        iVar5 = iVar5 + 2;
      }
    } while (local_8 != (local_8 / iVar5) * iVar5);
    piVar2 = param_1 + iVar9 + 1;
    iVar7 = local_8 / iVar5;
    local_c = iVar9;
    do {
      local_8 = iVar7;
      piVar2 = piVar2 + 1;
      iVar9 = local_c + 1;
      *piVar2 = iVar5;
      if ((iVar5 == 2) && (iVar9 != 1)) {
        piVar4 = piVar2;
        iVar7 = local_c;
        if (1 < iVar9) {
          do {
            *piVar4 = piVar4[-1];
            iVar7 = iVar7 + -1;
            piVar4 = piVar4 + -1;
          } while (iVar7 != 0);
        }
        param_1[2] = 2;
      }
      if (local_8 == 1) {
        param_1[1] = iVar9;
        *param_1 = in_ECX;
        param_1 = (int *)0x0;
        local_10 = 1;
        if (0 < local_c) {
          piVar3 = piVar3 + 2;
          do {
            iVar7 = 0;
            iVar9 = *piVar3 * local_10;
            iVar1 = *piVar3 + -1;
            iVar5 = in_ECX / iVar9;
            if (0 < iVar1) {
              pfVar6 = (float *)(in_EDX + (int)param_1 * 4);
              param_1 = (int *)((int)param_1 + iVar1 * iVar5);
              do {
                iVar7 = iVar7 + local_10;
                fVar11 = 0.0;
                if (2 < iVar5) {
                  iVar10 = (iVar5 - 3U >> 1) + 1;
                  pfVar8 = pfVar6;
                  do {
                    fVar11 = fVar11 + 1.0;
                    fVar12 = fVar11 * (float)iVar7 * (6.2831855 / (float)in_ECX);
                    fVar13 = fVar12;
                    FUN_004363f0();
                    *pfVar8 = fVar13;
                    FUN_00436470();
                    pfVar8[1] = fVar12;
                    pfVar8 = pfVar8 + 2;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
                pfVar6 = pfVar6 + iVar5;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            piVar3 = piVar3 + 1;
            local_c = local_c + -1;
            local_10 = iVar9;
          } while (local_c != 0);
        }
        return;
      }
      iVar7 = local_8 / iVar5;
      local_c = iVar9;
    } while (local_8 == (local_8 / iVar5) * iVar5);
  } while( true );
}

