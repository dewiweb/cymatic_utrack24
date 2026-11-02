// rea decompile_all
// name: FUN_004f15d0
// address: 0x4f15d0
// body: available
// range: 0x4f15d0-0x4f1678 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f15d0(float param_1)

{
  BYTE bAlpha;
  char cVar1;
  uint uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  
  FUN_005b3fb0();
  bAlpha = FUN_00470645(0,0xff);
  cVar1 = FUN_004c04c2();
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 0x78) = extraout_DL;
    FUN_004c1613(extraout_ECX);
  }
  else if (1.0 <= param_1) {
    uVar2 = GetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14);
    SetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14,uVar2 & 0xfff7ffff);
    RedrawWindow(*(HWND *)(in_ECX + 0x38),(RECT *)0x0,(HRGN)0x0,0x485);
  }
  else {
    uVar2 = GetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14);
    SetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14,uVar2 | 0x80000);
    SetLayeredWindowAttributes(*(HWND *)(in_ECX + 0x38),0,bAlpha,2);
  }
  return;
}

