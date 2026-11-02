// rea decompile_all
// name: FUN_00424b3e
// address: 0x424b3e
// body: available
// range: 0x424b3e-0x424b96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00424b3e(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00426115(param_1,"CHARSET_REGISTRY",&local_14);
  if (iVar1 == 0) {
    iVar1 = FUN_00426115(param_1,"CHARSET_ENCODING",&local_c);
    if (iVar1 == 0) {
      if ((local_14 == 1) && (local_c == 1)) {
        *param_2 = local_8;
        *param_3 = local_10;
        return 0;
      }
      iVar1 = 6;
    }
  }
  return iVar1;
}

