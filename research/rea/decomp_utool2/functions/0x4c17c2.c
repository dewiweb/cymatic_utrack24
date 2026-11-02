// rea decompile_all
// name: FUN_004c17c2
// address: 0x4c17c2
// body: available
// range: 0x4c17c2-0x4c185c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c1858 to 0x4d4dcb FUN_004d4dcb (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c17c2(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004d4dcb();
  }
  iVar7 = *param_2;
  uVar6 = 0;
  if (0 < iVar7) {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
    iVar2 = *piVar1;
    do {
      if (0 < iVar2) {
        iVar3 = param_2[1];
        local_c = iVar2;
        piVar5 = piVar1;
        do {
          piVar5 = piVar5 + 1;
          iVar4 = ___TypeMatch(iVar3 + local_8,*piVar5,*(undefined4 *)(param_1 + 0x1c));
          if (iVar4 != 0) {
            uVar6 = 1;
            break;
          }
          local_c = local_c + -1;
        } while (0 < local_c);
      }
      local_8 = local_8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return uVar6;
}

