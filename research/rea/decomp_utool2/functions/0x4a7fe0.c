// rea decompile_all
// name: FUN_004a7fe0
// address: 0x4a7fe0
// body: available
// range: 0x4a7fe0-0x4a8091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  char cVar1;
  uint uVar2;
  HWND pHVar3;
  int in_ECX;
  undefined8 uVar4;
  
  if ((DAT_00c8a690 != 0) && (uVar2 = GetMessageExtraInfo(), (uVar2 & 0xffffff80) == 0xff515780)) {
    return;
  }
  hWnd = *(HWND *)(in_ECX + 0x38);
  pHVar3 = GetCapture();
  if (pHVar3 != hWnd) {
    SetCapture(hWnd);
  }
  FUN_004a7de0(1,param_2,param_3);
  cVar1 = FUN_0068da80();
  if (cVar1 != '\0') {
    FUN_004a6420();
    *(undefined1 *)(in_ECX + 0x59) = 1;
    uVar4 = FUN_00687700(param_2,param_3);
    FUN_0068d900(0,DAT_00c8a9dc,uVar4,param_2,param_3);
  }
  return;
}

