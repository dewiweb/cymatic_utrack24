// rea decompile_all
// name: FUN_00692680
// address: 0x692680
// body: available
// range: 0x692680-0x69276d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00692680(void)

{
  int *in_ECX;
  float fVar1;
  int local_18;
  int local_10;
  
  if (in_ECX[0x3a] == 2) {
    in_ECX[0x3f] = 0;
    in_ECX[0x40] = 0;
    in_ECX[0x41] = 0;
    in_ECX[0x42] = 0;
  }
  else {
    fVar1 = (float)in_ECX[7];
    local_18 = SUB84((double)((float)in_ECX[6] * 0.08) + 6755399441055744.0,0);
    local_10 = SUB84((double)(fVar1 * 0.08) + 6755399441055744.0,0);
    if (local_10 < local_18) {
      local_18 = local_10;
    }
    if (in_ECX[0x3a] == 1) {
      local_10 = SUB84((double)(fVar1 * 0.55) + 6755399441055744.0,0);
    }
    else {
      local_10 = in_ECX[7] + local_18 * -2;
    }
    in_ECX[0x3f] = local_18;
    in_ECX[0x40] = local_18;
    in_ECX[0x41] = in_ECX[6] + local_18 * -2;
    in_ECX[0x42] = local_10;
  }
  if (*(code **)(*in_ECX + 0xd4) != FUN_00409d60) {
    (**(code **)(*in_ECX + 0xd4))(in_ECX + 0x3f);
  }
  return;
}

