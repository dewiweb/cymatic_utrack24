// rea decompile_all
// name: FUN_0049912e
// address: 0x49912e
// body: available
// range: 0x49912e-0x4991f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4991e2 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049912e(void *param_1,uint param_2)

{
  undefined4 uVar1;
  int in_EAX;
  void *_Dst;
  int unaff_EDI;
  
  if ((in_EAX != 0) && (unaff_EDI != 0)) {
    if (param_2 < 0x101) {
      if ((((int)param_2 < 1) || (param_1 != (void *)0x0)) &&
         ((param_2 != 0 || ((*(byte *)(in_EAX + 0x21c) & 1) != 0)))) {
        FUN_0048f0ec();
        _Dst = (void *)FUN_00491655();
        *(void **)(in_EAX + 0xf8) = _Dst;
        if (0 < (int)param_2) {
          _memcpy(_Dst,param_1,param_2 * 3);
        }
        uVar1 = *(undefined4 *)(in_EAX + 0xf8);
        *(uint *)(unaff_EDI + 0xe8) = *(uint *)(unaff_EDI + 0xe8) | 0x1000;
        *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) | 8;
        *(undefined4 *)(unaff_EDI + 0x10) = uVar1;
        *(short *)(in_EAX + 0xfc) = (short)param_2;
        *(short *)(unaff_EDI + 0x14) = (short)param_2;
      }
      else {
        FUN_004914c8(2);
      }
    }
    else {
      if (*(char *)(unaff_EDI + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_00491122();
      }
      FUN_00491216();
    }
  }
  return;
}

