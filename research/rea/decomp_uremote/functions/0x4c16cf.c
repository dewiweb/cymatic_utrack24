// rea decompile_all
// name: FUN_004c16cf
// address: 0x4c16cf
// body: available
// range: 0x4c16cf-0x4c1737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c16cf(void)

{
  undefined4 *puVar1;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined1 *local_8;
  
  local_34 = local_18;
  local_38 = 0x4c16e2;
  FUN_004c2047();
  local_34 = local_28;
  local_38 = 0x4c16ee;
  puVar1 = (undefined4 *)FUN_004a4c72();
  local_40 = *puVar1;
  local_3c = puVar1[1];
  local_38 = puVar1[2];
  local_34 = (undefined1 *)puVar1[3];
  if ((0 < local_38) && (0 < (int)local_34)) {
    local_8 = (undefined1 *)&local_40;
    FUN_004c1738(0);
  }
  return;
}

