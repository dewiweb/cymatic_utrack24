// rea decompile_all
// name: FUN_0047010d
// address: 0x47010d
// body: available
// range: 0x47010d-0x47014a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047010d(size_t param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  char in_DL;
  
  if (param_1 == 1) {
    if (*(uint *)(in_EAX + 0x18) < 0x10) {
      iVar1 = in_EAX + 4;
    }
    else {
      iVar1 = *(int *)(in_EAX + 4);
    }
    *(char *)(iVar1 + in_ECX) = in_DL;
  }
  else {
    if (*(uint *)(in_EAX + 0x18) < 0x10) {
      iVar1 = in_EAX + 4;
    }
    else {
      iVar1 = *(int *)(in_EAX + 4);
    }
    _memset((void *)(iVar1 + in_ECX),(int)in_DL,param_1);
  }
  return;
}

