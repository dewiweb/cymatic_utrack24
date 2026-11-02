// rea decompile_all
// name: FUN_0041bf1b
// address: 0x41bf1b
// body: available
// range: 0x41bf1b-0x41bf94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bf1b(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  piVar1 = (int *)(in_EAX * 0xcc + 4 + in_ECX);
  iVar2 = *piVar1;
  iVar3 = piVar1[0x31];
  if (iVar2 != 0) {
    iVar5 = thunk_FUN_00401000(piVar1[1],iVar3);
    piVar1[2] = iVar5;
    piVar1[3] = iVar5 + 0x20U & 0xffffffc0;
    piVar4 = piVar1 + 1;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      iVar6 = thunk_FUN_00401000(piVar4[3],iVar3);
      iVar5 = piVar1[2];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x80) {
        iVar6 = iVar5;
      }
      piVar4[4] = iVar6;
      piVar4[5] = iVar6 + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 3;
    }
  }
  return;
}

