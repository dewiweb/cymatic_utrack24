// rea decompile_all
// name: FUN_004ef7c3
// address: 0x4ef7c3
// body: available
// range: 0x4ef7c3-0x4ef828 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ef821 to 0x4c50fb FUN_004c50fb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef7c3(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  FUN_00440367(0x6c3);
  FUN_0047479c();
  iVar2 = FUN_004ef85f(in_EAX);
  if (iVar2 == *(int *)(in_EAX + 0x24)) {
    return;
  }
  uVar1 = *(uint *)(in_EAX + 0x20);
  *(int *)(in_EAX + 0x24) = iVar2;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (uVar1 < *(uint *)(in_EAX + 0x20)) {
      iVar2 = *(int *)(*(int *)(in_EAX + 0x18) + uVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      FUN_004ef830();
      FUN_004efb07();
    }
  }
  FUN_004c4e62();
  FUN_004c50fb();
  return;
}

