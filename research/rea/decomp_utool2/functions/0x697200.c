// rea decompile_all
// name: FUN_00697200
// address: 0x697200
// body: available
// range: 0x697200-0x69727f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00697200(char param_1)

{
  char cVar1;
  int in_ECX;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  
  if ((*(char *)(in_ECX + 0x94) == '\0') && ((*(byte *)(in_ECX + 0x69) & 0x10) == 0)) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      uStack_14 = 0x697225;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uStack_14 = 0x697230;
    FUN_00697280();
    if (param_1 == '\0') {
      uStack_14 = 0x697248;
      cVar1 = FUN_0063b740();
    }
    else {
      uStack_14 = 0x697241;
      cVar1 = FUN_0063b8c0();
    }
    if (cVar1 != '\0') {
      uStack_14 = 0x697253;
      FUN_00696170();
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
      uStack_14 = 0x69726e;
      FUN_00696830();
      return 1;
    }
  }
  return 0;
}

