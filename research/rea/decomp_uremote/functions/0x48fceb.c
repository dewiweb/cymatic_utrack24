// rea decompile_all
// name: FUN_0048fceb
// address: 0x48fceb
// body: available
// range: 0x48fceb-0x48fd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48fd15 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048fceb(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [36];
  
  iVar1 = FUN_0048fc1b(local_28);
  if (iVar1 == 0) {
    uVar2 = FUN_0048fc57(param_1,param_2,local_28);
  }
  else {
    if (iVar1 != 1) {
      *(ushort *)(in_EAX + 0x4a) = *(ushort *)(in_EAX + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    *(ushort *)(in_EAX + 0x4a) = *(ushort *)(in_EAX + 0x4a) | 0x8000;
    FUN_00491371();
    uVar2 = 0;
  }
  return uVar2;
}

