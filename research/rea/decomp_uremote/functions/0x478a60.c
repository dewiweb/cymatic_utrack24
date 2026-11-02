// rea decompile_all
// name: FUN_00478a60
// address: 0x478a60
// body: available
// range: 0x478a60-0x478ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00478a60(void)

{
  float fVar1;
  undefined4 *in_EAX;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  
  if (in_EAX[2] != 0) {
    pfVar2 = (float *)*in_EAX;
    uVar4 = 0;
    do {
      fVar1 = *pfVar2;
      uVar5 = uVar4 + 1;
      pfVar3 = pfVar2 + 1;
      if (fVar1 == 100002.0) {
        uVar5 = uVar4 + 3;
        pfVar3 = pfVar2 + 3;
      }
      else if (((fVar1 == 100001.0) || (fVar1 == 100003.0)) || (fVar1 == 100004.0)) {
        return 0;
      }
      pfVar2 = pfVar3;
      uVar4 = uVar5;
    } while (uVar5 < (uint)in_EAX[2]);
  }
  return 1;
}

