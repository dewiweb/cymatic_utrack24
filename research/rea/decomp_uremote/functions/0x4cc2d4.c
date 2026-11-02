// rea decompile_all
// name: FUN_004cc2d4
// address: 0x4cc2d4
// body: available
// range: 0x4cc2d4-0x4cc416 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004cc2d4(int param_1)

{
  float *pfVar1;
  int iStack_40;
  int iStack_3c;
  float local_28;
  float local_24;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  float *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4cc2e0;
  iStack_3c = 0x4cc2ea;
  FUN_00476d39();
  local_8 = 0;
  iStack_3c = 0x4cc2f8;
  FUN_004e3907();
  local_8._0_1_ = 1;
  iStack_3c = 0x4cc304;
  FUN_004e3907();
  local_8._0_1_ = 2;
  iStack_3c = 0x4cc310;
  FUN_004e3907();
  local_8 = CONCAT31(local_8._1_3_,3);
  pfVar1 = *(float **)(param_1 + 4);
  if (pfVar1 != (float *)0x0) {
    iStack_40 = param_1 + 0xc;
    local_18 = (float *)&iStack_40;
    iStack_3c = iStack_40;
    FUN_004a4aac();
    FUN_004e3933(local_20);
    iStack_40 = 0x4cc342;
    iStack_3c = param_1 + 0x24;
    FUN_004e2ee9();
    iStack_3c = param_1 + 0x28;
    iStack_40 = 0x4cc34e;
    FUN_004e2ee9();
    iStack_3c = 0x4cc356;
    FUN_004e2f64();
    iStack_3c = 0x4cc35e;
    FUN_004e2f64();
    local_1c = (undefined1 *)&iStack_40;
    local_18 = pfVar1 + 2;
    FUN_004a4aac();
    FUN_004e3933(local_20);
    iStack_3c = param_1 + 0x2c;
    iStack_40 = 0x4cc388;
    FUN_004e2ee9();
    iStack_3c = param_1 + 0x30;
    iStack_40 = 0x4cc394;
    FUN_004e2ee9();
    iStack_3c = 0x4cc39c;
    FUN_004e2f64();
    iStack_3c = 0x4cc3a4;
    FUN_004e2f64();
    local_1c = (undefined1 *)&iStack_40;
    local_28 = (pfVar1[3] + *pfVar1) - pfVar1[1];
    local_24 = (pfVar1[1] + *pfVar1) - *local_18;
    FUN_004a4aac();
    FUN_004e3933(local_20);
    iStack_3c = param_1 + 0x34;
    iStack_40 = 0x4cc3e5;
    FUN_004e2ee9();
    iStack_3c = param_1 + 0x38;
    iStack_40 = 0x4cc3f1;
    FUN_004e2ee9();
    iStack_3c = 0x4cc3f9;
    FUN_004e2f64();
    iStack_3c = 0x4cc401;
    FUN_004e2f64();
    iStack_3c = 0x4cc40d;
    FUN_00476f96();
  }
  return param_1;
}

