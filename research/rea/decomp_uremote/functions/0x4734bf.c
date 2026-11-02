// rea decompile_all
// name: FUN_004734bf
// address: 0x4734bf
// body: available
// range: 0x4734bf-0x4734f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004734bf(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  
  psVar2 = (short *)*in_EAX;
  iVar4 = 0;
  sVar1 = *psVar2;
  while( true ) {
    if (sVar1 == 0) {
      return -1;
    }
    iVar3 = FUN_00460a06();
    if (iVar3 == param_1) break;
    iVar4 = iVar4 + 1;
    sVar1 = *psVar2;
  }
  return iVar4;
}

