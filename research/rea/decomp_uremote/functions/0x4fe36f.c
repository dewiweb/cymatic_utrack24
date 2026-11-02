// rea decompile_all
// name: FUN_004fe36f
// address: 0x4fe36f
// body: available
// range: 0x4fe36f-0x4fe451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004fe36f(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4fe37b;
  puStack_28 = (undefined1 *)0x4fe383;
  iVar1 = FUN_004fe2c9();
  iVar2 = 0;
  if (iVar1 != 0) {
    puStack_28 = (undefined1 *)0x0;
    local_14 = (undefined1 *)&uStack_2c;
    FUN_004c751a();
    iVar2 = FUN_00467199();
    iVar3 = param_3;
    if (iVar2 < 0) {
      if (param_3 != 0) {
        puStack_28 = (undefined1 *)&param_2;
        uStack_2c = 0x4fe3f4;
        FUN_0046537e();
        local_8 = 0;
        puStack_28 = (undefined1 *)&param_2;
        uStack_2c = 0x4fe401;
        thunk_FUN_0046e2c4();
        local_8 = 0xffffffff;
        puStack_28 = (undefined1 *)0x4fe40d;
        FUN_004652d6();
        if (*(int *)(iVar1 + 0x98) < *(int *)(iVar1 + 0x9c) + 1) {
          puStack_28 = (undefined1 *)0x4fe42f;
          FUN_004f8197();
          iVar3 = param_3;
        }
        iVar2 = *(int *)(iVar1 + 0x9c);
        *(int *)(iVar1 + 0x9c) = iVar2 + 1;
        *(int *)(*(int *)(iVar1 + 0x94) + iVar2 * 4) = iVar3;
        piVar4 = (int *)(iVar3 + 4);
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
    }
    else if (param_3 == 0) {
      puStack_28 = (undefined1 *)0x4fe3d2;
      FUN_004671f6();
      puStack_28 = (undefined1 *)0x4fe3df;
      iVar2 = FUN_004ff638();
    }
    else {
      puStack_28 = (undefined1 *)0x4fe3c9;
      iVar2 = FUN_004ff5d5();
    }
  }
  return iVar2;
}

