// rea decompile_all
// name: FUN_004f0426
// address: 0x4f0426
// body: available
// range: 0x4f0426-0x4f04cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004f0426(undefined1 **param_1)

{
  undefined1 *puVar1;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  puVar1 = &LAB_005dbf0c;
  local_8 = 0x4f0432;
  if (param_1 == (undefined1 **)0x1001) {
    puStack_38 = &param_1;
    puStack_3c = (undefined1 *)0x4f044d;
    FUN_0046537e();
    local_8 = 0;
    puStack_38 = (undefined4 *)local_18;
    puStack_3c = (undefined1 *)0x4f045f;
    puVar1 = (undefined1 *)FUN_00465153();
    puStack_3c = local_14;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00465153();
    puStack_38 = &param_1;
    puStack_3c = puVar1;
    FUN_004efedd();
    puStack_38 = (undefined4 *)0x4f048c;
    FUN_004652d6();
    puStack_38 = (undefined4 *)0x4f0494;
    FUN_004652d6();
    local_8 = 0xffffffff;
    puStack_38 = (undefined4 *)0x4f04a0;
    FUN_004652d6();
    puStack_38 = (undefined4 *)0x0;
    param_1 = &puStack_3c;
    FUN_004c751a();
    puStack_38 = (undefined4 *)FUN_004c71a0();
    puStack_3c = (undefined1 *)0x4f04c4;
    puVar1 = (undefined1 *)FUN_004f63ca();
  }
  return puVar1;
}

