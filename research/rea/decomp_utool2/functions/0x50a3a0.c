// rea decompile_all
// name: FUN_0050a3a0
// address: 0x50a3a0
// body: available
// range: 0x50a3a0-0x50a454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a3a0(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      iStack_1c = 0x50a3c2;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') {
        return;
      }
    }
    iStack_1c = 0x50a3d1;
    iVar2 = FUN_00412320();
    if ((*(uint *)(param_1 + 0x10) & 0xffffff8f) == 4) {
      *(undefined4 *)(iVar2 + 0x2b0) = *(undefined4 *)(iVar2 + 0x2ac);
      iStack_1c = 0x50a3f4;
      FUN_0050a760();
      uStack_24 = 0x50a406;
      iStack_1c = iVar2;
      FUN_004122d0();
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x78);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      if ((*(int *)(in_ECX + 0x78) <= iVar3) && (iVar3 = *(int *)(in_ECX + 0x78) + -1, iVar3 < 0))
      break;
      uStack_20 = 0x50a436;
      iStack_1c = iVar2;
      FUN_00410536();
    }
    FUN_006e6400(auStack_28);
    FUN_006ce9f0(1);
  }
  return;
}

