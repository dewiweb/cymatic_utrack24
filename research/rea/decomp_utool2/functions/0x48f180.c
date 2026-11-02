// rea decompile_all
// name: FUN_0048f180
// address: 0x48f180
// body: available
// range: 0x48f180-0x48f262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048f180(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  int local_20;
  double local_18;
  double local_10;
  
  cVar1 = FUN_0048f270();
  iVar2 = 1;
  if (cVar1 == '\0') {
    local_20 = 1;
    iVar2 = 1;
    while( true ) {
      FUN_00633c20(*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c),
                   *(undefined4 *)(in_ECX + 0x48 + local_20 * 0x18),
                   *(undefined4 *)(in_ECX + 0x4c + local_20 * 0x18));
      FUN_0061e1c0();
      if (local_18 <= local_10) break;
      fVar3 = *(float *)(in_ECX + 0x40) - *(float *)(in_ECX + 0x40 + local_20 * 0x18);
      FUN_00411660();
      fVar4 = 8.0;
      if (8.0 <= fVar3) {
        return iVar2;
      }
      fVar3 = *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x44 + local_20 * 0x18);
      FUN_00411660();
      if (fVar4 <= fVar3) {
        return iVar2;
      }
      if (*(int *)(in_ECX + 0x50) != *(int *)(in_ECX + 0x50 + local_20 * 0x18)) {
        return iVar2;
      }
      if (*(int *)(in_ECX + 0x54) != *(int *)(in_ECX + 0x54 + local_20 * 0x18)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      local_20 = local_20 + 1;
      if (3 < local_20) {
        return iVar2;
      }
    }
  }
  return iVar2;
}

