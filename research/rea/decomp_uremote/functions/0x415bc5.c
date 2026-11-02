// rea decompile_all
// name: FUN_00415bc5
// address: 0x415bc5
// body: available
// range: 0x415bc5-0x415c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00415bc5(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = *param_1;
  iVar1 = param_2[2];
  local_8 = 0x17;
  if (param_2[4] != 0) {
    iVar1 = (iVar1 * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 0) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + 0xc) + 0x20 >> 6;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    iVar2 = *(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xcc);
  }
  if (iVar1 + 0x20 >> 6 == iVar2) {
    local_8 = FUN_00415b86(param_1,0);
  }
  return local_8;
}

