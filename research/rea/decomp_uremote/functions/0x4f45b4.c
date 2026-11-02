// rea decompile_all
// name: FUN_004f45b4
// address: 0x4f45b4
// body: available
// range: 0x4f45b4-0x4f4717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f45b4(undefined4 param_1,HWND param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  void *local_30 [3];
  void *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  HIMC local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4f45c0;
  piVar2 = (int *)FUN_004ed9d9();
  local_14 = ImmGetContext(param_2);
  if ((piVar2 != (int *)0x0) && (local_14 != (HIMC)0x0)) {
    if (*in_ECX < 0) {
      piVar3 = (int *)(**(code **)(*piVar2 + 8))();
      iVar1 = *piVar3;
      iVar4 = FUN_00439b5a();
      *in_ECX = iVar1;
      in_ECX[1] = iVar4;
    }
    if ((param_3 & 0x800) == 0) {
      if ((param_3 & 8) != 0) {
        uVar5 = FUN_004f4718();
        local_18 = &stack0xffffffb8;
        local_8 = 2;
        FUN_004f4796(in_ECX,&stack0xffffffb8,local_14,param_3);
        FUN_004f4830(uVar5);
        local_8 = 0xffffffff;
        FUN_004652d6();
        FUN_004f4889(in_ECX,local_30);
        local_8 = 3;
        (**(code **)(*piVar2 + 0x10))();
        local_8 = 0xffffffff;
        _free(local_30[0]);
        *(undefined1 *)(in_ECX + 2) = 1;
      }
    }
    else {
      uVar5 = FUN_004f4718();
      local_8 = 0;
      local_1c = &stack0xffffffb8;
      local_1c = (undefined1 *)FUN_00439b5a(0xffffffff);
      FUN_004f4830(uVar5);
      FUN_004652d6();
      *in_ECX = -1;
      in_ECX[1] = (int)local_1c;
      *(undefined1 *)(in_ECX + 2) = 0;
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = (undefined1 *)0x0;
      local_8 = 1;
      (**(code **)(*piVar2 + 0x10))();
      local_8 = 0xffffffff;
      _free(local_24);
    }
    FUN_004f498d();
    ImmReleaseContext(param_2,local_14);
  }
  return;
}

