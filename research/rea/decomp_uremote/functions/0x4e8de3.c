// rea decompile_all
// name: FUN_004e8de3
// address: 0x4e8de3
// body: available
// range: 0x4e8de3-0x4e8e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_004e8de3(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  float10 fVar2;
  undefined1 local_20 [8];
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4e8def;
  if (*unaff_EDI < param_1) {
    if (param_1 < *(int *)(unaff_EDI[6] + 8) + *unaff_EDI) {
      FUN_0049fe5a(local_20);
      local_8 = 0;
      FUN_004e7e2d(unaff_EDI[6]);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0049fec9(unaff_EDI[7],unaff_EDI[4],0);
      FUN_004652d6();
      if (param_1 - *unaff_EDI < local_18) {
        iVar1 = FUN_0049feb2();
        fVar2 = (float10)FUN_0043d2e1(unaff_EDI[5],*(undefined4 *)(iVar1 + 0xc));
      }
      else {
        fVar2 = (float10)(float)unaff_EDI[5];
      }
      FUN_0049fea0();
      fVar2 = (float10)(float)fVar2;
    }
    else {
      fVar2 = (float10)(float)unaff_EDI[5];
    }
  }
  else {
    fVar2 = (float10)(float)unaff_EDI[4];
  }
  return fVar2;
}

