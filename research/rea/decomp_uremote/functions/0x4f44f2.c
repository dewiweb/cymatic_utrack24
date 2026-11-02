// rea decompile_all
// name: FUN_004f44f2
// address: 0x4f44f2
// body: available
// range: 0x4f44f2-0x4f45b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f44f2(undefined4 param_1,HWND param_2)

{
  int *piVar1;
  HIMC pHVar2;
  int iVar3;
  int *unaff_EDI;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4f44fe;
  if ((char)unaff_EDI[2] != '\0') {
    piVar1 = (int *)FUN_004ed9d9(param_1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
      (**(code **)(*piVar1 + 0x18))(&DAT_0095d718);
      local_18 = FUN_00439b5a(0);
      local_18 = local_18 + *unaff_EDI;
      unaff_EDI[1] = local_18;
      local_14 = FUN_00439b5a(local_18);
      (**(code **)(*piVar1 + 0xc))(&local_18);
      local_1c = (void *)0x0;
      local_18 = 0;
      local_14 = 0;
      local_8 = 0;
      (**(code **)(*piVar1 + 0x10))(&local_1c);
      local_8 = 0xffffffff;
      _free(local_1c);
    }
    pHVar2 = ImmGetContext(param_2);
    if (pHVar2 != (HIMC)0x0) {
      ImmNotifyIME(pHVar2,0x11,0,0);
      ImmReleaseContext(param_2,pHVar2);
    }
  }
  iVar3 = FUN_00439b5a(0xffffffff);
  *unaff_EDI = -1;
  unaff_EDI[1] = iVar3;
  *(undefined1 *)(unaff_EDI + 2) = 0;
  return;
}

