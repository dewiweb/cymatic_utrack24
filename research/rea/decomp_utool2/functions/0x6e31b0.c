// rea decompile_all
// name: FUN_006e31b0
// address: 0x6e31b0
// body: available
// range: 0x6e31b0-0x6e322c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e31b0(int param_1)

{
  char cVar1;
  int *in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] != 0) {
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') goto LAB_006e31e6;
    }
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      cVar1 = FUN_006ceda0();
      if (cVar1 == '\0') {
        uVar2 = 2;
      }
    }
  }
LAB_006e31e6:
  FUN_006c8640(uVar2);
  if (in_ECX[0x30] == 2) {
    if (-1 < in_ECX[0x2a]) {
      FUN_0063eb10(in_ECX[0x2a]);
    }
    if (*(char *)((int)in_ECX + 0xdd) != '\0') {
      (**(code **)(*in_ECX + 0xc4))(param_1 + 0x10);
    }
  }
  return;
}

