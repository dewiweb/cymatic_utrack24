// rea decompile_all
// name: FUN_0043874c
// address: 0x43874c
// body: available
// range: 0x43874c-0x43879d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043874c(void)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_0049fa3d();
  fVar3 = (float10)1.0;
  if (fVar2 < fVar3) {
    uVar1 = CONCAT31((int3)(CONCAT22(extraout_var,
                                     (ushort)(fVar2 < fVar3) << 8 |
                                     (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                                     (ushort)(fVar2 == fVar3) << 0xe) >> 8),1);
  }
  else {
    fVar3 = (float10)FUN_0049fa3d();
    if ((fVar3 <= (float10)*(float *)(extraout_ECX + 0x14c)) &&
       (fVar3 = (float10)FUN_0049fa3d(), (float10)*(float *)(extraout_ECX_00 + 0x148) <= fVar3)) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

