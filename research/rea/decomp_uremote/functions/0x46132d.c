// rea decompile_all
// name: FUN_0046132d
// address: 0x46132d
// body: available
// range: 0x46132d-0x461369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046132d(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x1c))(param_1);
  iVar3 = (**(code **)(*param_2 + 0x1c))(param_1);
  if (iVar2 == iVar3) {
LAB_00461363:
    uVar4 = 1;
  }
  else {
    if ((iVar2 != 0) && (iVar3 != 0)) {
      cVar1 = FUN_004702a5();
      if (cVar1 != '\0') goto LAB_00461363;
    }
    uVar4 = 0;
  }
  return uVar4;
}

