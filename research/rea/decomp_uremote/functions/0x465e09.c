// rea decompile_all
// name: FUN_00465e09
// address: 0x465e09
// body: available
// range: 0x465e09-0x465e74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00465e09(char *param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_0046087d();
    iVar2 = thunk_FUN_0046087d();
    iVar2 = iVar2 - iVar1;
    if (-1 < iVar2) {
      local_8 = *in_EAX;
      FUN_00460825(&local_8);
      do {
        iVar1 = FUN_00470c42(&local_8,param_1);
        if (iVar1 == 0) {
          return iVar2;
        }
        FUN_0046080a();
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  return -1;
}

