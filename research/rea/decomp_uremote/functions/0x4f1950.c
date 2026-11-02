// rea decompile_all
// name: FUN_004f1950
// address: 0x4f1950
// body: available
// range: 0x4f1950-0x4f19b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1950(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char extraout_DL;
  undefined4 uVar3;
  
  iVar2 = FUN_005cdbcf(param_1,0,&juce::ComponentPeer::RTTI_Type_Descriptor,
                       &juce::HWNDComponentPeer::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x30))(0);
    FUN_004c079b();
    cVar1 = FUN_004c079b();
    if (extraout_DL == cVar1) {
      uVar3 = *(undefined4 *)(iVar2 + 0x38);
    }
    else {
      cVar1 = FUN_004c079b();
      if (cVar1 == '\0') {
        return;
      }
      uVar3 = 0;
    }
    FUN_004f0b54(in_ECX[0xe],uVar3);
  }
  return;
}

