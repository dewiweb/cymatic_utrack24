// rea decompile_all
// name: FUN_0049e1cb
// address: 0x49e1cb
// body: available
// range: 0x49e1cb-0x49e294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049e1cb(int param_1)

{
  undefined4 *unaff_ESI;
  float10 fVar1;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_14[0] = param_1;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_0049f4df();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00474d0f();
  FUN_0049f81a(local_14,0x42c80000);
  FUN_0049f5e8();
  FUN_004c4d7a();
  fVar1 = (float10)FUN_0049e590(&param_1,"BDEFPRTZOQ",1);
  unaff_ESI[6] = (float)fVar1;
  fVar1 = (float10)FUN_0049e590(&param_1,"acegmnopqrsuvwxy",1);
  unaff_ESI[7] = (float)fVar1;
  fVar1 = (float10)FUN_0049e590(&param_1,"BDELZOC",0);
  unaff_ESI[8] = (float)fVar1;
  FUN_004c4d7a();
  return;
}

