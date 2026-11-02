// rea decompile_all
// name: FUN_0056f500
// address: 0x56f500
// body: available
// range: 0x56f500-0x56f54a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0056f500(void)

{
  undefined2 *puVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  undefined2 local_8;
  
  local_8 = 0;
  puVar1 = (undefined2 *)FUN_0056f0c0(2,1);
  uVar2 = 0;
  if (puVar1 != (undefined2 *)0x0) {
    local_8 = *puVar1;
    FUN_0056f150(puVar1 + 1);
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,local_8);
}

