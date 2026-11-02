// rea decompile_all
// name: FUN_004a8d10
// address: 0x4a8d10
// body: available
// range: 0x4a8d10-0x4a8dfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8d10(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  UINT UVar3;
  uint uVar4;
  uint uVar5;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar1 = GetAsyncKeyState(0x10);
  uVar2 = GetAsyncKeyState(0x11);
  uVar4 = uVar1 >> 0xf | 2;
  if ((uVar2 & 0x8000) == 0) {
    uVar4 = (uint)(uVar1 >> 0xf);
  }
  uVar1 = GetAsyncKeyState(0x12);
  uVar5 = uVar4 | 4;
  if ((uVar1 & 0x8000) == 0) {
    uVar5 = uVar4;
  }
  uVar1 = GetAsyncKeyState(0xa5);
  uVar4 = uVar5 & 0xfffffff9;
  if ((uVar1 & 0x8000) == 0) {
    uVar4 = uVar5;
  }
  DAT_00c8a9dc = uVar4 | DAT_00c8a9dc & 0x70;
  uVar4 = param_2 >> 0x10 & 0xff;
  local_14 = param_1;
  if (param_1 - 0x30 < 10) {
    switch(uVar4) {
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
      local_14 = param_1 + 0x10030;
    }
  }
  else {
    UVar3 = MapVirtualKeyW(uVar4,1);
    UVar3 = MapVirtualKeyW(UVar3,2);
    if ((UVar3 & 0xffff) != 0) {
      local_14 = UVar3 & 0xffff;
    }
    if ((param_1 < 0x20) && ((DAT_00c8a9dc & 6) != 0)) {
      param_1 = 0;
    }
  }
  local_10 = DAT_00c8a9dc & 0xffffff8f;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  local_c = param_1;
  FUN_0068d370(&local_14);
  return;
}

