// rea decompile_all
// name: FUN_00439532
// address: 0x439532
// body: available
// range: 0x439532-0x4395aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439532(void)

{
  int *in_EAX;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = in_EAX[2] + 1;
  if ((in_EAX[1] < iVar2) && (uVar3 = iVar2 / 2 + 8 + iVar2 & 0xfffffff8, in_EAX[1] != uVar3)) {
    if ((int)uVar3 < 1) {
      _free((void *)*in_EAX);
      *in_EAX = 0;
    }
    else {
      if ((void *)*in_EAX == (void *)0x0) {
        pvVar1 = _malloc(uVar3 << 5);
      }
      else {
        pvVar1 = _realloc((void *)*in_EAX,uVar3 << 5);
      }
      *in_EAX = (int)pvVar1;
    }
    in_EAX[1] = uVar3;
  }
  iVar2 = in_EAX[2];
  in_EAX[2] = iVar2 + 1;
  if (iVar2 * 0x20 + *in_EAX != 0) {
    FUN_004395b3();
  }
  return;
}

