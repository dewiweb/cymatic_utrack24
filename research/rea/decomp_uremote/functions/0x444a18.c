// rea decompile_all
// name: FUN_00444a18
// address: 0x444a18
// body: available
// range: 0x444a18-0x444a98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444a18(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_ECX;
  float10 fVar3;
  
  cVar1 = FUN_004c3153();
  if (cVar1 != '\0') {
    iVar2 = FUN_00444b2f();
    FUN_004c0902(in_ECX,*param_1,param_1[1]);
    FUN_005b3fb0();
    fVar3 = (float10)FUN_0044443f();
    FUN_00444b5b(iVar2,(float)fVar3);
    *(float *)(iVar2 + 0x148) = (float)fVar3;
    FUN_00444417();
  }
  return;
}

