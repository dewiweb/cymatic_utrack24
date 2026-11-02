// rea decompile_all
// name: FUN_004a88b0
// address: 0x4a88b0
// body: available
// range: 0x4a88b0-0x4a897b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a88b0(undefined4 param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = GetAsyncKeyState(0x10);
  uVar3 = GetAsyncKeyState(0x11);
  uVar5 = uVar2 >> 0xf | 2;
  if ((uVar3 & 0x8000) == 0) {
    uVar5 = (uint)(uVar2 >> 0xf);
  }
  uVar2 = GetAsyncKeyState(0x12);
  uVar6 = uVar5 | 4;
  if ((uVar2 & 0x8000) == 0) {
    uVar6 = uVar5;
  }
  uVar2 = GetAsyncKeyState(0xa5);
  uVar5 = uVar6 & 0xfffffff9;
  if ((uVar2 & 0x8000) == 0) {
    uVar5 = uVar6;
  }
  DAT_00c8a9dc = uVar5 | DAT_00c8a9dc & 0x70;
  switch(param_1) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x90:
  case 0x91:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
    if (DAT_00c8a9b0 != DAT_00c8a9dc) {
      DAT_00c8a9b0 = DAT_00c8a9dc;
      FUN_0068d130();
    }
    break;
  default:
  }
  cVar1 = FUN_0068d1f0(0);
  if ((cVar1 == '\0') && (iVar4 = FUN_006cecc0(), iVar4 == 0)) {
    return 0;
  }
  return 1;
}

