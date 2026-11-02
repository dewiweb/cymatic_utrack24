// rea decompile_all
// name: FUN_004c8db2
// address: 0x4c8db2
// body: available
// range: 0x4c8db2-0x4c8e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004c8db2(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_EDX;
  char cVar5;
  
  cVar5 = '\0';
  iVar2 = FUN_004c121d();
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uVar3 = FUN_004c1221(0,&juce::Component::RTTI_Type_Descriptor);
    iVar4 = FUN_005cdbcf(uVar3);
    if (iVar4 != 0) {
      FUN_004d076d();
      FUN_004d076d();
      cVar1 = (**(code **)(*extraout_EDX + 0xbc))();
      if ((cVar1 != '\0') || (cVar5 != '\0')) {
        cVar5 = '\x01';
      }
    }
  }
  return cVar5;
}

