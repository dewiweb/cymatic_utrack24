// rea decompile_all
// name: FUN_004fcb72
// address: 0x4fcb72
// body: available
// range: 0x4fcb72-0x4fcbd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_004fcb72(void)

{
  undefined4 extraout_EDX;
  float10 fVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4fcb7e;
  uStack_38 = 0x8b8c;
  uStack_3c = 0x4fcb89;
  glGetString();
  uStack_3c = 0x4fcb94;
  FUN_00466c04();
  local_8 = 0;
  local_24 = (double)CONCAT44(&uStack_3c,(undefined4)local_24);
  FUN_004c751a();
  FUN_004667be(extraout_EDX);
  uStack_3c = 0x4fcbb8;
  fVar1 = (float10)FUN_00466972();
  local_24 = (double)fVar1;
  uStack_3c = 0x4fcbc2;
  FUN_004652d6();
  uStack_3c = 0x4fcbca;
  FUN_004652d6();
  return (float10)local_24;
}

