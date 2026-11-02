// rea decompile_all
// name: FUN_004f799d
// address: 0x4f799d
// body: available
// range: 0x4f799d-0x4f7a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f799d(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int *unaff_ESI;
  uint uVar4;
  
  iVar3 = unaff_ESI[2] + 1;
  if ((unaff_ESI[1] < iVar3) && (uVar4 = iVar3 / 2 + 8 + iVar3 & 0xfffffff8, unaff_ESI[1] != uVar4))
  {
    if ((int)uVar4 < 1) {
      _free((void *)*unaff_ESI);
      *unaff_ESI = 0;
    }
    else {
      if ((void *)*unaff_ESI == (void *)0x0) {
        pvVar2 = _malloc(uVar4 << 3);
      }
      else {
        pvVar2 = _realloc((void *)*unaff_ESI,uVar4 << 3);
      }
      *unaff_ESI = (int)pvVar2;
    }
    unaff_ESI[1] = uVar4;
  }
  uVar4 = unaff_ESI[2];
  if (param_1 < uVar4) {
    puVar1 = (undefined4 *)(*unaff_ESI + param_1 * 8);
    if (0 < (int)(uVar4 - param_1)) {
      _memmove(puVar1 + 2,puVar1,(uVar4 - param_1) * 8);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      FUN_004d076d();
    }
    unaff_ESI[2] = unaff_ESI[2] + 1;
  }
  else {
    unaff_ESI[2] = uVar4 + 1;
    puVar1 = (undefined4 *)(*unaff_ESI + uVar4 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      FUN_004d076d();
    }
  }
  return;
}

