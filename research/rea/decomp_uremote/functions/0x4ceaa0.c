// rea decompile_all
// name: FUN_004ceaa0
// address: 0x4ceaa0
// body: available
// range: 0x4ceaa0-0x4ceb01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 FUN_004ceaa0(int param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined1 uVar3;
  float *unaff_ESI;
  float10 fVar4;
  
  FUN_004652cd();
  uVar3 = 0;
  cVar2 = FUN_004cebff(extraout_ECX);
  if (cVar2 == '\0') {
    fVar4 = (float10)0;
  }
  else {
    if (param_2 == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    fVar4 = (float10)FUN_004ceb5b(uVar1);
    uVar3 = 1;
  }
  *unaff_ESI = (float)fVar4;
  FUN_004652d6();
  return uVar3;
}

