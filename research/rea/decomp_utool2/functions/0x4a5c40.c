// rea decompile_all
// name: FUN_004a5c40
// address: 0x4a5c40
// body: available
// range: 0x4a5c40-0x4a5ce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5c40(float param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = (int)(param_1 * 255.0);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x68) & 4) != 0) {
    if (param_1 < 1.0) {
      uVar1 = GetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14);
      SetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14,uVar1 | 0x80000);
      SetLayeredWindowAttributes(*(HWND *)(in_ECX + 0x38),0,(BYTE)iVar2,2);
      return;
    }
    uVar1 = GetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14);
    SetWindowLongW(*(HWND *)(in_ECX + 0x38),-0x14,uVar1 & 0xfff7ffff);
    RedrawWindow(*(HWND *)(in_ECX + 0x38),(RECT *)0x0,(HRGN)0x0,0x485);
    return;
  }
  *(BYTE *)(in_ECX + 0x78) = (BYTE)iVar2;
  FUN_006e6400(&stack0xffffffe0);
  FUN_006ce9f0(1);
  return;
}

