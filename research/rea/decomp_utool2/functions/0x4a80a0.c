// rea decompile_all
// name: FUN_004a80a0
// address: 0x4a80a0
// body: available
// range: 0x4a80a0-0x4a8132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a80a0(byte param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  HWND pHVar3;
  int in_ECX;
  undefined8 uVar4;
  
  if ((DAT_00c8a690 == 0) || (uVar2 = GetMessageExtraInfo(), (uVar2 & 0xffffff80) != 0xff515780)) {
    FUN_004a6420();
    cVar1 = *(char *)(in_ECX + 0x59);
    *(undefined1 *)(in_ECX + 0x59) = 0;
    if (((param_1 & 0x13) == 0) && (pHVar3 = GetCapture(), *(HWND *)(in_ECX + 0x38) == pHVar3)) {
      ReleaseCapture();
    }
    if (cVar1 != '\0') {
      uVar4 = FUN_00687700(param_2,param_3);
      FUN_0068d900(0,DAT_00c8a9dc,uVar4,param_2,param_3);
    }
  }
  return;
}

