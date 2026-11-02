// rea decompile_all
// name: FUN_004f96b8
// address: 0x4f96b8
// body: available
// range: 0x4f96b8-0x4f971e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f96b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar2 = FUN_004c6f68();
      if (iVar2 == 0) {
        return local_8 + 1;
      }
      iVar3 = local_8 + param_2 >> 1;
      iVar2 = FUN_004c6f68();
      if (iVar3 == local_8) {
        if (iVar2 < 0) {
          return local_8;
        }
        return local_8 + 1;
      }
      iVar1 = iVar3;
      if (-1 < iVar2) {
        iVar1 = param_2;
        local_8 = iVar3;
      }
      param_2 = iVar1;
    } while (local_8 < param_2);
  }
  return local_8;
}

