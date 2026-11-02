// rea decompile_all
// name: FUN_0044c770
// address: 0x44c770
// body: available
// range: 0x44c770-0x44c804 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044c770(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char *in_ECX;
  int local_c;
  
  local_c = SUB84((double)((float)param_1 * 127.0) + 6755399441055744.0,0);
  if (local_c < -0x80) {
    local_c = -0x80;
  }
  else if (0x7f < local_c) {
    local_c = 0x7f;
  }
  cVar2 = (char)local_c;
  *in_ECX = cVar2;
  param_1._0_4_ = SUB84((double)(param_1._4_4_ * 127.0) + 6755399441055744.0,0);
  if ((int)(float)param_1 < -0x80) {
    param_1._0_4_ = -NAN;
  }
  else if (0x7f < (int)(float)param_1) {
    param_1._0_4_ = 1.77965e-43;
  }
  cVar1 = SUB41((float)param_1,0);
  in_ECX[1] = cVar1;
  if (cVar2 == cVar1) {
    if (cVar1 == '\x7f') {
      *in_ECX = cVar2 + -1;
      return;
    }
    in_ECX[1] = cVar1 + '\x01';
  }
  return;
}

