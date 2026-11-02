// rea decompile_all
// name: FUN_0045d259
// address: 0x45d259
// body: available
// range: 0x45d259-0x45d32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045d259(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  cVar1 = FUN_0045f278(unaff_EDI);
  if (cVar1 != '\0') {
    if (*(int *)(unaff_EDI + 1000) == 0) {
      if (*(int *)(unaff_EDI + 0x114) != 0) {
        FUN_005017d0();
        FUN_00502380(param_1);
        iVar4 = **(int **)(unaff_EDI + 0x114);
        uVar2 = FUN_00501cb0();
        iVar3 = (**(code **)(iVar4 + 0x174))(0xd001,0,uVar2);
        iVar4 = iVar3;
        if (iVar3 != 0) {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0xc) + 4 + iVar3;
        }
        (**(code **)(**(int **)(unaff_EDI + 0x124) + 0x6c))(iVar4);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0xc) + 4 + iVar3;
        }
        (**(code **)(**(int **)(unaff_EDI + 0x124) + 0x6c))(iVar4);
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 8) + 4 + iVar3) + 4))();
        FUN_00501900();
      }
    }
    else {
      FUN_00446754(param_1);
    }
  }
  return;
}

