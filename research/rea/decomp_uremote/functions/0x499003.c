// rea decompile_all
// name: FUN_00499003
// address: 0x499003
// body: available
// range: 0x499003-0x499100 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x499028 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499003(int param_1,int param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  int unaff_EDI;
  
  if ((param_1 != 0) && (unaff_EDI != 0)) {
    if ((((param_2 != 1) && (param_2 != 2)) ||
        (((((param_3 == (char *)0x0 || (sVar1 = _strlen(param_3), sVar1 == 0)) || (*param_3 == '-'))
          || ((iVar2 = FUN_00490936(sVar1), iVar2 == 0 || (param_4 == (char *)0x0)))) ||
         (sVar3 = _strlen(param_4), sVar3 == 0)))) ||
       ((*param_4 == '-' || (iVar2 = FUN_00490936(sVar3), iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    *(undefined1 *)(unaff_EDI + 0xfc) = (undefined1)param_2;
    pvVar4 = (void *)FUN_0049176b();
    *(void **)(unaff_EDI + 0x100) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      _memcpy(pvVar4,param_3,sVar1 + 1);
      pvVar4 = (void *)FUN_0049176b();
      *(void **)(unaff_EDI + 0x104) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        _memcpy(pvVar4,param_4,sVar3 + 1);
        *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) | 0x4000;
        *(uint *)(unaff_EDI + 0xe8) = *(uint *)(unaff_EDI + 0xe8) | 0x100;
        return;
      }
      FUN_00491789(param_1,*(undefined4 *)(unaff_EDI + 0x100));
      *(undefined4 *)(unaff_EDI + 0x100) = 0;
    }
    FUN_00491216();
  }
  return;
}

