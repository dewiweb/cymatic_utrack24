// rea decompile_all
// name: FUN_004d0772
// address: 0x4d0772
// body: available
// range: 0x4d0772-0x4d08a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0772(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  
  cVar2 = FUN_004f5cc9();
  if (cVar2 != '\0') {
    FUN_004f640a();
    cVar2 = FUN_004f5cc9();
    if (cVar2 == '\0') {
      FUN_00440367();
      FUN_00439b5a();
      iVar1 = in_EAX[1];
      iVar3 = FUN_00439b5a(iVar1);
      if ((iVar3 <= param_3) || (iVar1 < 1)) {
        FUN_00439b5a();
      }
      FUN_00440367();
      FUN_00439b5a();
      iVar1 = *in_EAX;
      iVar3 = FUN_00439b5a(iVar1);
      if ((iVar3 <= param_4) || (iVar1 < 1)) {
        FUN_00439b5a();
      }
    }
  }
  FUN_004c751a();
  return;
}

