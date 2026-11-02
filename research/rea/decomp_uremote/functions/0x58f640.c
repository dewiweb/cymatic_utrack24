// rea decompile_all
// name: FUN_0058f640
// address: 0x58f640
// body: available
// range: 0x58f640-0x58f6be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0058f640(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00569e70();
  iVar3 = FUN_00569e70();
  bVar1 = (uint)(iVar2 + iVar3) <= param_2;
  if (bVar1) {
    FUN_00569f00(param_1,iVar2);
    FUN_00569f00(param_1 + iVar2,iVar3);
  }
  return bVar1;
}

