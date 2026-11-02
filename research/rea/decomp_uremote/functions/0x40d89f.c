// rea decompile_all
// name: FUN_0040d89f
// address: 0x40d89f
// body: available
// range: 0x40d89f-0x40d8e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8df to 0x40d888 FUN_0040d888 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040d89f(void)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int in_EAX;
  uint uVar4;
  
  if (in_EAX != 0) {
    sVar2 = *(short *)(in_EAX + 0x16);
    sVar3 = *(short *)(in_EAX + 0x38);
    *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x3a) + sVar2;
    *(short *)(in_EAX + 0x14) = *(short *)(in_EAX + 0x14) + *(short *)(in_EAX + 0x38);
    *(int *)(in_EAX + 0x30) = *(int *)(in_EAX + 0x30) + *(int *)(in_EAX + 0x54);
    uVar4 = 0;
    if ((int)sVar3 != 0) {
      do {
        psVar1 = (short *)(*(int *)(in_EAX + 0x44) + uVar4 * 2);
        *psVar1 = *psVar1 + sVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(int)sVar3);
    }
    FUN_0040d888();
    return;
  }
  return;
}

