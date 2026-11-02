// rea decompile_all
// name: FUN_004f8e96
// address: 0x4f8e96
// body: available
// range: 0x4f8e96-0x4f8ef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004f8e96(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  puVar1 = &LAB_005e3516;
  local_8 = 0x4f8ea2;
  puVar5 = (undefined1 *)0x0;
  do {
    iVar4 = 0;
    puVar2 = puVar5;
    if (param_3 <= puVar5) {
      return puVar1;
    }
    do {
      if (puVar2[param_2] == '\0') break;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar2 < param_3);
    if (iVar4 == 0) {
      return puVar2;
    }
    uVar3 = FUN_00465395(local_14,iVar4);
    local_8 = 0;
    thunk_FUN_0046e2c4(uVar3);
    local_8 = 0xffffffff;
    puVar1 = (undefined1 *)FUN_004652d6();
    puVar5 = puVar5 + iVar4 + 1;
  } while( true );
}

