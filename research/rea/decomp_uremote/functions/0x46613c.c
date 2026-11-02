// rea decompile_all
// name: FUN_0046613c
// address: 0x46613c
// body: available
// range: 0x46613c-0x4661c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046613c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30 [5];
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = param_2;
  uStack_4 = 0xc;
  local_8 = 0x466148;
  local_14 = 0;
  local_30[0] = 0x466158;
  uVar2 = FUN_0046087d();
  local_30[0] = 0x466162;
  local_18 = FUN_0046087d();
  local_30[0] = param_1;
  FUN_004652e4();
  local_8 = 0;
  local_14 = 1;
  while( true ) {
    local_1c = (undefined1 *)local_30;
    local_30[0] = param_3;
    iVar3 = FUN_00465dbc(uVar1);
    if (iVar3 < 0) break;
    local_1c = (undefined1 *)local_30;
    local_30[0] = param_4;
    FUN_00465ff1(uVar1,&param_1,iVar3,uVar2);
    local_30[0] = uVar1;
    FUN_00465317();
    local_30[0] = 0x4661b7;
    FUN_004652d6();
  }
  return uVar1;
}

