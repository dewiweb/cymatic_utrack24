// rea decompile_all
// name: FUN_004f3a4f
// address: 0x4f3a4f
// body: available
// range: 0x4f3a4f-0x4f3ac8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004f3a4f(void)

{
  char cVar1;
  int *in_EAX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004f3d16(&local_c);
  uVar2 = FUN_004a8e4a(local_8,extraout_ECX,extraout_ECX,0);
  uVar3 = FUN_004a8e4a(local_c);
  cVar1 = (**(code **)(*in_EAX + 0x48))(uVar3,uVar2);
  if (cVar1 != '\0') {
    FUN_004f2bc6(in_EAX,local_c,local_8);
    cVar1 = FUN_004ed52d();
    if (cVar1 == '\0') {
      return true;
    }
  }
  FUN_004eda42();
  return (char)in_EAX[0xd] == '\0';
}

