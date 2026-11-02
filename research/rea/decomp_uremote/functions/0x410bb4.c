// rea decompile_all
// name: FUN_00410bb4
// address: 0x410bb4
// body: available
// range: 0x410bb4-0x410c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00410bb4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *in_EAX;
  int iVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  undefined **local_8;
  
  iVar2 = in_ECX - (int)in_EAX;
  local_8 = &PTR_FUN_008fb3f8;
  do {
    iVar1 = 0;
    *(undefined4 *)(iVar2 + (int)in_EAX) = 0;
    if (param_2 != 0) {
      iVar1 = FUN_0041106d();
    }
    *in_EAX = iVar1;
    if (iVar1 == 0) {
      iVar1 = iVar2 + (int)in_EAX;
      iVar1 = (*(code *)*local_8)(param_1,param_2,param_3,iVar1,iVar1 + (in_EDX - in_ECX));
      *in_EAX = iVar1;
    }
    local_8 = local_8 + 2;
    in_EAX = in_EAX + 1;
  } while ((int)local_8 < 0x8fb440);
  return;
}

