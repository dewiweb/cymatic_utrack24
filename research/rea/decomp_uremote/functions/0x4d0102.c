// rea decompile_all
// name: FUN_004d0102
// address: 0x4d0102
// body: available
// range: 0x4d0102-0x4d0175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0102(int param_1)

{
  void *pvVar1;
  int iVar2;
  int unaff_ESI;
  uint uVar3;
  
  iVar2 = *(int *)(unaff_ESI + 0x1c) + 1;
  if (((int)*(uint *)(unaff_ESI + 0x18) < iVar2) &&
     (uVar3 = iVar2 / 2 + 8 + iVar2 & 0xfffffff8, *(uint *)(unaff_ESI + 0x18) != uVar3)) {
    if ((int)uVar3 < 1) {
      _free(*(void **)(unaff_ESI + 0x14));
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
    }
    else {
      if (*(void **)(unaff_ESI + 0x14) == (void *)0x0) {
        pvVar1 = _malloc(uVar3 << 2);
      }
      else {
        pvVar1 = _realloc(*(void **)(unaff_ESI + 0x14),uVar3 << 2);
      }
      *(void **)(unaff_ESI + 0x14) = pvVar1;
    }
    *(uint *)(unaff_ESI + 0x18) = uVar3;
  }
  iVar2 = *(int *)(unaff_ESI + 0x1c);
  *(int *)(unaff_ESI + 0x1c) = iVar2 + 1;
  *(int *)(*(int *)(unaff_ESI + 0x14) + iVar2 * 4) = param_1;
  *(int *)(param_1 + 8) = unaff_ESI;
  return;
}

