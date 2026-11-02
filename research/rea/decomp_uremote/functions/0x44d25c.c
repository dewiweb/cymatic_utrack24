// rea decompile_all
// name: FUN_0044d25c
// address: 0x44d25c
// body: available
// range: 0x44d25c-0x44d2c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d25c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20 [7];
  
  local_20[6] = 0;
  iVar1 = 0x18;
  iVar2 = 0;
  local_20[0] = 0xc;
  local_20[1] = 8;
  local_20[2] = 6;
  local_20[3] = 4;
  local_20[4] = 2;
  local_20[5] = 1;
  do {
    if ((*(int *)(param_1 + 4) * 0xd) / 10 <= param_2 / iVar1) {
      return;
    }
    iVar1 = local_20[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0);
  return;
}

