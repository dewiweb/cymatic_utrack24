// rea decompile_all
// name: FUN_0045e698
// address: 0x45e698
// body: available
// range: 0x45e698-0x45e708 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e698(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == *(int *)(in_ECX + 0x140)) {
    FUN_0045ed90();
  }
  if (param_2 == *(int *)(in_ECX + 0x148)) {
    FUN_0045ee3a();
    return;
  }
  if (param_2 == *(int *)(in_ECX + 0x144)) {
    FUN_0045ede5();
    return;
  }
  if (param_2 == *(int *)(in_ECX + 0x14c)) {
    uVar2 = 1;
  }
  else {
    if (param_2 != *(int *)(in_ECX + 0x150)) {
      if (param_2 != *(int *)(in_ECX + 0x154)) {
        return;
      }
      uVar2 = 1;
      uVar1 = 0;
      goto LAB_0045e6fb;
    }
    uVar2 = 0;
  }
  uVar1 = 1;
LAB_0045e6fb:
  FUN_0045ee8d(uVar1,uVar2);
  return;
}

