// rea decompile_all
// name: FUN_004c3d7e
// address: 0x4c3d7e
// body: available
// range: 0x4c3d7e-0x4c3e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c3d7e(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4c3d8a;
  uStack_28 = 0x4c3d8f;
  FUN_004f4b4e();
  if (unaff_EDI != *(int *)(unaff_ESI + 0x30)) {
    local_14 = auStack_2c;
    local_30 = 0x4c3da3;
    FUN_00467e6f();
    local_14 = (undefined1 *)&local_34;
    local_34 = param_1;
    local_30 = param_2;
    local_3c = 0x4c3dbd;
    FUN_004c3be3();
    *(int *)(unaff_ESI + 0x30) = unaff_EDI;
    local_30 = 0x4c3dcf;
    local_14 = auStack_2c;
    FUN_00467e6f();
    local_8 = 0;
    local_34 = param_1;
    local_30 = param_2;
    local_14 = (undefined1 *)&local_3c;
    local_3c = param_1;
    FUN_004c35c7();
    local_8 = 0xffffffff;
    local_3c = 0x4c3e0a;
    FUN_004c3be3();
  }
  return;
}

