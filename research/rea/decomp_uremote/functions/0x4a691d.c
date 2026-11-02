// rea decompile_all
// name: FUN_004a691d
// address: 0x4a691d
// body: available
// range: 0x4a691d-0x4a69ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a691d(undefined4 *param_1)

{
  int *in_EAX;
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  
  iVar3 = in_EAX[2] + 1;
  if ((in_EAX[1] < iVar3) && (uVar4 = iVar3 / 2 + 8 + iVar3 & 0xfffffff8, in_EAX[1] != uVar4)) {
    if ((int)uVar4 < 1) {
      _free((void *)*in_EAX);
      *in_EAX = 0;
    }
    else {
      if ((void *)*in_EAX == (void *)0x0) {
        pvVar1 = _malloc(uVar4 << 4);
      }
      else {
        pvVar1 = _realloc((void *)*in_EAX,uVar4 << 4);
      }
      *in_EAX = (int)pvVar1;
    }
    in_EAX[1] = uVar4;
  }
  puVar2 = (undefined4 *)(in_EAX[2] * 0x10 + *in_EAX);
  in_EAX[2] = in_EAX[2] + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    FUN_004d076d();
    *(undefined4 *)(extraout_EDX + 8) = param_1[2];
    *(undefined4 *)(extraout_EDX + 0xc) = param_1[3];
  }
  return;
}

