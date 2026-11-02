// rea decompile_all
// name: FUN_004f7479
// address: 0x4f7479
// body: available
// range: 0x4f7479-0x4f7508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7479(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
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
        pvVar1 = _malloc(uVar4 << 5);
      }
      else {
        pvVar1 = _realloc((void *)*unaff_ESI,uVar4 << 5);
      }
      *unaff_ESI = (int)pvVar1;
    }
    unaff_ESI[1] = uVar4;
  }
  puVar2 = (undefined4 *)(unaff_ESI[2] * 0x20 + *unaff_ESI);
  unaff_ESI[2] = unaff_ESI[2] + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 6);
  }
  return;
}

