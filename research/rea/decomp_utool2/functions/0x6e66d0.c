// rea decompile_all
// name: FUN_006e66d0
// address: 0x6e66d0
// body: available
// range: 0x6e66d0-0x6e673f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e66d0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint3 uVar4;
  int in_ECX;
  uint uVar5;
  
  iVar2 = FUN_006e9580();
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x1c) + 0xc);
  if (pcVar1 == FUN_006de170) {
    uVar5 = 0x101;
  }
  else {
    uVar5 = (*pcVar1)();
  }
  uVar3 = FUN_006d42d0((byte)(uVar5 >> 3) & 1);
  uVar4 = (uint3)((uint)uVar3 >> 8);
  if (((*(byte *)(in_ECX + 0x68) & 4) != 0) && ((uVar5 & 0x100) != 0)) {
    FUN_0068a620(CONCAT31(uVar4,1));
    FUN_0068e810(0);
    return;
  }
  FUN_0068a620((uint)uVar4 << 8);
  FUN_0068e810(0);
  return;
}

