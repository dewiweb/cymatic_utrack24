// rea decompile_all
// name: FUN_004fe646
// address: 0x4fe646
// body: available
// range: 0x4fe646-0x4fe6e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004fe646(undefined4 param_1)

{
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4fe652;
  FUN_0046537e(local_14);
  local_8 = 0;
  FUN_004fc70c(local_18,local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004fcca6();
  FUN_004652d6();
  local_8 = 0xffffffff;
  FUN_004652d6();
  FUN_0046537e(local_14);
  local_8 = 2;
  FUN_004fc70c(local_1c,local_14);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004fccb1();
  FUN_004652d6();
  FUN_004652d6();
  FUN_004fccbc();
  return param_1;
}

