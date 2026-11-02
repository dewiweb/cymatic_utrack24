// rea decompile_all
// name: FUN_0049b330
// address: 0x49b330
// body: available
// range: 0x49b330-0x49b37d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49b377 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b330(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = *(uint *)(in_EAX + 8);
  puVar2 = *(undefined4 **)(unaff_EBX + 0x70);
  puVar1 = (undefined4 *)(in_EAX + 0xc);
  uVar3 = 0x400;
  while( true ) {
    if (local_8 < uVar3) {
      uVar3 = local_8;
    }
    FUN_0049ad91(puVar1,uVar3);
    local_8 = local_8 - uVar3;
    if ((local_8 == 0) || (puVar2 == (undefined4 *)0x0)) break;
    uVar3 = *(uint *)(unaff_EBX + 0x74);
    puVar1 = puVar2 + 1;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  return;
}

