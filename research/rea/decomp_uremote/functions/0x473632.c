// rea decompile_all
// name: FUN_00473632
// address: 0x473632
// body: available
// range: 0x473632-0x4736d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00473632(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *apuStack_30 [5];
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_0095d678;
  uStack_4 = 0xc;
  puVar3 = &LAB_005dc44f;
  local_8 = 0x47363e;
  if (DAT_0095d678 != (int *)0x0) {
    apuStack_30[0] = local_14;
    (**(code **)(*DAT_0095d678 + 4))();
    local_8 = 0;
    local_18 = (undefined1 *)apuStack_30;
    FUN_004652e4(local_14);
    FUN_00465c6b(&local_18);
    local_1c = (undefined1 *)apuStack_30;
    FUN_004d076d();
    cVar2 = FUN_00466360(param_1);
    apuStack_30[0] = (undefined1 *)0x473699;
    FUN_004652d6();
    if (cVar2 != '\0') {
      apuStack_30[0] = (undefined1 *)0x4736a5;
      iVar4 = thunk_FUN_0046087d();
      apuStack_30[0] = (undefined1 *)(iVar4 + 1);
      apuStack_30[0] = (undefined1 *)FUN_004664c4();
      local_8 = CONCAT31(local_8._1_3_,1);
      (**(code **)(*piVar1 + 0x18))();
      apuStack_30[0] = (undefined1 *)0x4736c6;
      FUN_004652d6();
    }
    apuStack_30[0] = (undefined1 *)0x4736ce;
    puVar3 = (undefined1 *)FUN_004652d6();
  }
  return puVar3;
}

