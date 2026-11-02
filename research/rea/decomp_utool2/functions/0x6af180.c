// rea decompile_all
// name: FUN_006af180
// address: 0x6af180
// body: available
// range: 0x6af180-0x6af312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006af180(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  int local_24;
  int local_1c;
  
  iVar7 = in_ECX[2];
  iVar5 = iVar7 + -1;
  if (-1 < iVar5) {
    piVar4 = (int *)*in_ECX;
    piVar2 = piVar4 + iVar5;
    while (piVar1 = (int *)*piVar2, *piVar1 != param_1) {
      piVar2 = piVar2 + -1;
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
    }
    iVar8 = 0;
    piVar2 = piVar4;
    iVar6 = iVar7;
    if (0 < iVar7) {
      do {
        dVar10 = *(double *)(*piVar2 + 8);
        if (dVar10 < 0.0) {
          dVar10 = dVar10 * (double)-in_ECX[3];
        }
        local_1c = SUB84(dVar10 + 6755399441055744.0,0);
        iVar8 = iVar8 + local_1c;
        iVar6 = iVar6 + -1;
        piVar2 = piVar2 + 1;
      } while (iVar6 != 0);
    }
    param_1 = 0;
    iVar6 = in_ECX[3];
    iVar3 = iVar6;
    if (iVar6 < iVar8) {
      iVar3 = iVar8;
    }
    if (iVar5 < iVar7) {
      iVar8 = iVar7 - iVar5;
      param_1 = 0;
      piVar2 = piVar4 + iVar5;
      do {
        dVar10 = *(double *)(*piVar2 + 8);
        if (dVar10 < 0.0) {
          dVar10 = dVar10 * (double)-iVar6;
        }
        piVar2 = piVar2 + 1;
        local_24 = SUB84(dVar10 + 6755399441055744.0,0);
        param_1 = param_1 + local_24;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = iVar5 + 1;
    iVar9 = 0;
    if (iVar8 < iVar7) {
      iVar7 = iVar7 - iVar8;
      piVar4 = piVar4 + iVar8;
      do {
        dVar10 = *(double *)(*piVar4 + 0x10);
        if (dVar10 < 0.0) {
          dVar10 = dVar10 * (double)-iVar6;
        }
        piVar4 = piVar4 + 1;
        local_24 = SUB84(dVar10 + 6755399441055744.0,0);
        iVar9 = iVar9 + local_24;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar9 = (iVar6 - piVar1[1]) - iVar9;
    if (param_2 < iVar9) {
      param_2 = iVar9;
    }
    if (iVar3 - param_1 < param_2) {
      param_2 = iVar3 - param_1;
    }
    iVar5 = FUN_006aee10(0,iVar5,param_2,0);
    FUN_006aee10(iVar8,in_ECX[2],in_ECX[3] - (iVar5 + piVar1[1]),iVar5 + piVar1[1]);
    FUN_006aec80();
  }
  return;
}

