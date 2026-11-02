// rea decompile_all
// name: FUN_004a6420
// address: 0x4a6420
// body: available
// range: 0x4a6420-0x4a64b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6420(void)

{
  ushort uVar1;
  ushort uVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (in_ECX & 1) << 4;
  uVar4 = uVar3 | 0x20;
  if ((in_ECX & 2) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x40;
  if ((in_ECX & 0x10) == 0) {
    uVar3 = uVar4;
  }
  DAT_00c8a9dc = uVar3 | DAT_00c8a9dc & 0xffffff8f;
  uVar1 = GetAsyncKeyState(0x10);
  uVar2 = GetAsyncKeyState(0x11);
  uVar4 = uVar1 >> 0xf | 2;
  if ((uVar2 & 0x8000) == 0) {
    uVar4 = (uint)(uVar1 >> 0xf);
  }
  uVar1 = GetAsyncKeyState(0x12);
  uVar3 = uVar4 | 4;
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = uVar4;
  }
  uVar1 = GetAsyncKeyState(0xa5);
  uVar4 = uVar3 & 0xfffffff9;
  if ((uVar1 & 0x8000) == 0) {
    uVar4 = uVar3;
  }
  DAT_00c8a9dc = uVar4 | DAT_00c8a9dc & 0x70;
  return;
}

