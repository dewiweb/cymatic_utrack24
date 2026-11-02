// rea decompile_all
// name: FUN_005fc8f0
// address: 0x5fc8f0
// body: available
// range: 0x5fc8f0-0x5fc977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fc8f0(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *in_ECX;
  int iVar4;
  uint uVar5;
  uint local_1c;
  uint local_c;
  
  bVar3 = false;
  uVar5 = 0;
  if (*in_ECX != 0) {
    iVar4 = 0;
    local_1c = 0;
    local_c = 0;
    do {
      if (bVar3) {
        uVar1 = *(uint *)(iVar4 + in_ECX[1]);
        uVar2 = *(uint *)(iVar4 + 4 + in_ECX[1]);
        if ((uVar1 & uVar2) != 0xffffffff) {
          if ((uVar2 < local_c) || ((uVar2 == local_c && (uVar1 <= local_1c)))) {
            return 0;
          }
        }
      }
      uVar5 = uVar5 + 1;
      local_c = *(uint *)(iVar4 + 4 + in_ECX[1]);
      local_1c = *(uint *)(iVar4 + in_ECX[1]);
      bVar3 = true;
      iVar4 = iVar4 + 0x18;
    } while (uVar5 < *in_ECX);
  }
  return 1;
}

