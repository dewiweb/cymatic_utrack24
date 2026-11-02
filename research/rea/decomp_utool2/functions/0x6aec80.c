// rea decompile_all
// name: FUN_006aec80
// address: 0x6aec80
// body: available
// range: 0x6aec80-0x6aed2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aec80(void)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  
  iVar6 = 0;
  iVar4 = in_ECX[2];
  if (0 < iVar4) {
    iVar2 = *in_ECX;
    do {
      iVar3 = *(int *)(iVar2 + iVar6 * 4);
      iVar4 = iVar4 + -1;
      pdVar1 = (double *)(iVar3 + 0x18);
      if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
        if (-1 < iVar4) {
          puVar5 = (undefined4 *)(iVar2 + iVar4 * 4);
          do {
            if (*(int *)*puVar5 == iVar6) {
              iVar4 = *(int *)(iVar2 + iVar4 * 4);
              if (iVar4 != 0) {
                iVar4 = *(int *)(iVar4 + 4);
                goto LAB_006aed04;
              }
              break;
            }
            puVar5 = puVar5 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        iVar4 = 0;
LAB_006aed04:
        dVar7 = (double)iVar4;
      }
      else {
        if (-1 < iVar4) {
          puVar5 = (undefined4 *)(iVar2 + iVar4 * 4);
          do {
            if (*(int *)*puVar5 == iVar6) {
              iVar4 = *(int *)(iVar2 + iVar4 * 4);
              if (iVar4 != 0) {
                dVar7 = (double)-*(int *)(iVar4 + 4) / (double)in_ECX[3];
                goto LAB_006aed0c;
              }
              break;
            }
            puVar5 = puVar5 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        dVar7 = 0.0;
      }
LAB_006aed0c:
      *(double *)(iVar3 + 0x18) = dVar7;
      iVar6 = iVar6 + 1;
      iVar4 = in_ECX[2];
    } while (iVar6 < iVar4);
  }
  return;
}

