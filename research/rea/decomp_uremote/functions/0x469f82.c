// rea decompile_all
// name: FUN_00469f82
// address: 0x469f82
// body: available
// range: 0x469f82-0x46a009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x469ff3 to 0x469f2b FUN_00469f2b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00469f82(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    if (*(int *)(unaff_ESI + 0x20) == 0) {
      *(code **)(unaff_ESI + 0x20) = FUN_0046cece;
      *(undefined4 *)(unaff_ESI + 0x28) = 0;
    }
    if (*(int *)(unaff_ESI + 0x24) == 0) {
      *(code **)(unaff_ESI + 0x24) = FUN_00412f2b;
    }
    iVar1 = (**(code **)(unaff_ESI + 0x20))(*(undefined4 *)(unaff_ESI + 0x28),1,0x2530);
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
    *(int *)(unaff_ESI + 0x1c) = iVar1;
    if ((int)in_EAX < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      in_EAX = -in_EAX;
    }
    else {
      *(int *)(iVar1 + 8) = ((int)in_EAX >> 4) + 1;
      if ((int)in_EAX < 0x30) {
        in_EAX = in_EAX & 0xf;
      }
    }
    if (in_EAX - 8 < 8) {
      *(uint *)(iVar1 + 0x24) = in_EAX;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      uVar2 = FUN_00469f2b();
      return uVar2;
    }
    (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  }
  return 0xfffffffe;
}

