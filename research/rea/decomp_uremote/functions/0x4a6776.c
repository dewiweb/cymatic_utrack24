// rea decompile_all
// name: FUN_004a6776
// address: 0x4a6776
// body: available
// range: 0x4a6776-0x4a67ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6776(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *unaff_ESI;
  uint uVar5;
  
  iVar4 = unaff_ESI[2] + 1;
  if ((unaff_ESI[1] < iVar4) && (uVar5 = iVar4 / 2 + 8 + iVar4 & 0xfffffff8, unaff_ESI[1] != uVar5))
  {
    if ((int)uVar5 < 1) {
      _free((void *)*unaff_ESI);
      *unaff_ESI = 0;
    }
    else {
      if ((void *)*unaff_ESI == (void *)0x0) {
        pvVar3 = _malloc(uVar5 << 3);
      }
      else {
        pvVar3 = _realloc((void *)*unaff_ESI,uVar5 << 3);
      }
      *unaff_ESI = (int)pvVar3;
    }
    unaff_ESI[1] = uVar5;
  }
  iVar4 = unaff_ESI[2];
  unaff_ESI[2] = iVar4 + 1;
  puVar1 = (undefined4 *)(*unaff_ESI + iVar4 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = param_1[1];
    *puVar1 = *param_1;
    puVar1[1] = uVar2;
  }
  return;
}

