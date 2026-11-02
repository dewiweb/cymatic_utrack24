// rea decompile_all
// name: FUN_00623310
// address: 0x623310
// body: available
// range: 0x623310-0x623384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00623310(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  int local_c;
  byte local_5;
  
  pcVar1 = *(code **)(*in_ECX + 0x10);
  if (pcVar1 == FUN_00629940) {
    local_5 = 0;
    (**(code **)(*in_ECX + 0xc))(&local_5,1);
    bVar2 = local_5;
  }
  else {
    bVar2 = (*pcVar1)();
  }
  if (bVar2 == 0) {
    return 0;
  }
  uVar4 = bVar2 & 0x7f;
  if (uVar4 < 5) {
    local_c = 0;
    uVar3 = (**(code **)(*in_ECX + 0xc))(&local_c,uVar4);
    if (uVar3 == uVar4) {
      if (0x7f < bVar2) {
        local_c = -local_c;
      }
      return local_c;
    }
  }
  return 0;
}

