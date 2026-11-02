// rea decompile_all
// name: FUN_0042a1ac
// address: 0x42a1ac
// body: available
// range: 0x42a1ac-0x42a1f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a1ac(void)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 uVar2;
  int *in_EAX;
  int unaff_ESI;
  
  iVar1 = *in_EAX;
  if ((0 < iVar1) && (iVar1 <= *(int *)(unaff_ESI + 0x1c))) {
    _Dst = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + (*(int *)(unaff_ESI + 0x1c) - iVar1) * 4);
    uVar2 = *_Dst;
    _memmove(_Dst,_Dst + 1,iVar1 * 4 - 4);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + -4 + *(int *)(unaff_ESI + 0x1c) * 4) = uVar2;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}

