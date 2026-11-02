// rea decompile_all
// name: FUN_00465251
// address: 0x465251
// body: available
// range: 0x465251-0x4652cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465251(undefined1 *param_1)

{
  int iVar1;
  uint in_EAX;
  undefined1 *in_ECX;
  undefined4 *unaff_EBX;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 == (int *)&DAT_005ffbd0) {
    FUN_004651d8();
    *in_ECX = 0;
    param_1 = in_ECX;
LAB_00465273:
    *unaff_EBX = param_1;
  }
  else {
    if (in_EAX <= *(uint *)(param_1 + -4)) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar1 < 1) goto LAB_00465273;
    }
    FUN_004702e7(*(undefined4 *)(param_1 + -4));
    FUN_004651d8();
    _memcpy(in_ECX,param_1,*(size_t *)(param_1 + -4));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_005b13e8(piVar2);
    }
    *unaff_EBX = in_ECX;
  }
  return;
}

