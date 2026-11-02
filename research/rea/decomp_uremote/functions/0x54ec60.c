// rea decompile_all
// name: FUN_0054ec60
// address: 0x54ec60
// body: available
// range: 0x54ec60-0x54ecdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054ec60(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0xc) == '\0') {
    local_c = 2;
  }
  else {
    local_c = 0;
    bVar1 = true;
    while (bVar1) {
      iVar2 = Ordinal_19(*(undefined4 *)(in_ECX + 8),param_1,param_2,0);
      if (iVar2 == -1) {
        iVar2 = Ordinal_111();
        if (iVar2 != 0x2733) {
          local_c = 2;
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
  }
  return local_c;
}

