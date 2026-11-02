// rea decompile_all
// name: FUN_004fba7f
// address: 0x4fba7f
// body: available
// range: 0x4fba7f-0x4fbd84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fba7f(void)

{
  int iVar1;
  int in_EAX;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  
  FUN_00500f31();
  FUN_00500ee4();
  FUN_00500fa2();
  FUN_004fb4e7();
  FUN_0047713c();
  iVar1 = *(int *)(extraout_EDX + 0x60);
  if (*(char *)(in_EAX + 0x10) == '\0') {
    FUN_004a55cf();
    fVar2 = (float10)FUN_00474d74();
    fVar3 = (float10)FUN_00474d74();
    if (fVar3 <= (float10)(double)fVar2) {
      FUN_004fb80a();
    }
    else {
      FUN_004fb80a();
    }
    FUN_004fcddd();
  }
  else {
    FUN_004fb80a();
    FUN_004fb1a7(iVar1 + 0x78);
  }
  return;
}

