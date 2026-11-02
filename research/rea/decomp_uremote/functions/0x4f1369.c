// rea decompile_all
// name: FUN_004f1369
// address: 0x4f1369
// body: available
// range: 0x4f1369-0x4f14b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1369(int param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  HWND pHVar3;
  uint uVar4;
  int *in_ECX;
  int iStack_24;
  int iStack_20;
  
  *(undefined1 *)(in_ECX + 0x16) = param_2;
  FUN_004f643a();
  cVar2 = FUN_004c04c2();
  if ((cVar2 == '\0') && (pHVar3 = GetParent((HWND)in_ECX[0xe]), pHVar3 != (HWND)0x0)) {
    FUN_004f0b41();
  }
  (**(code **)(*in_ECX + 0x1c))();
  FUN_004f5e38();
  if ((iStack_24 != *(int *)(param_1 + 8)) || (bVar1 = false, iStack_20 != *(int *)(param_1 + 0xc)))
  {
    bVar1 = true;
  }
  FUN_004f0b22(in_ECX[0xe]);
  if ((bVar1) && (cVar2 = FUN_004ed52d(), cVar2 != '\0')) {
    FUN_004f1315();
    cVar2 = FUN_004c04c2();
    if ((cVar2 == '\0') &&
       ((in_ECX[0x12] != 0 && (uVar4 = FUN_00467ec4(), in_ECX[0x12] + 0x1eU < uVar4)))) {
      FUN_004f2652();
    }
  }
  return;
}

