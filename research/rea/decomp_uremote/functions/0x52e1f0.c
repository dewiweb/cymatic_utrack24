// rea decompile_all
// name: FUN_0052e1f0
// address: 0x52e1f0
// body: available
// range: 0x52e1f0-0x52e2f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e1f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  CMFCRibbonProgressBar local_28 [24];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d04ae;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 4) = 1;
  (**(code **)(*in_ECX + 0x20))(uVar2);
  if (in_ECX[6] != 0) {
    puVar1 = (undefined4 *)in_ECX[6];
    FUN_00515830();
    SetEvent((HANDLE)*puVar1);
  }
  CMFCRibbonProgressBar::CMFCRibbonProgressBar(local_28);
  local_8 = 0;
  while (*(char *)((int)in_ECX + 0x11) != '\0') {
    uVar2 = FUN_0057aec0();
    if (9999 < uVar2) break;
    Sleep(10);
  }
  if (*(char *)((int)in_ECX + 0x11) != '\0') {
    TerminateThread((HANDLE)in_ECX[0xb],0);
    (**(code **)(*in_ECX + 0x24))();
    *(undefined1 *)((int)in_ECX + 0x11) = 0;
  }
  if (in_ECX[0xb] != -1) {
    CloseHandle((HANDLE)in_ECX[0xb]);
  }
  in_ECX[0xb] = -1;
  ExceptionList = local_10;
  return;
}

