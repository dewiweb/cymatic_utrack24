// rea decompile_all
// name: FUN_004c4700
// address: 0x4c4700
// body: available
// range: 0x4c4700-0x4c47b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c4700(void)

{
  char cVar1;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar2;
  undefined4 uStack_18;
  float local_14;
  
  FUN_00467a99();
  FUN_00467e6f();
  FUN_00467e6f();
  FUN_00468028();
  cVar1 = FUN_00467ae4();
  if (cVar1 != '\0') {
    local_14 = *unaff_EDI - *unaff_ESI;
    uStack_18 = 0x4c4762;
    fVar2 = (float10)FUN_00474d74();
    if (fVar2 < (float10)8.0) {
      local_14 = unaff_EDI[1] - unaff_ESI[1];
      uStack_18 = 0x4c4785;
      fVar2 = (float10)FUN_00474d74();
      if (fVar2 < (float10)8.0) {
        local_14 = 7.005189e-39;
        FUN_004d076d();
        if (((undefined4 *)unaff_EDI[4] == &uStack_18) && (unaff_EDI[5] == unaff_ESI[5])) {
          return 1;
        }
      }
    }
  }
  return 0;
}

