// rea decompile_all
// name: FUN_004dfe3e
// address: 0x4dfe3e
// body: available
// range: 0x4dfe3e-0x4dff02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfe3e(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dfd5e;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  iVar5 = 0;
  if (((*(int *)(in_ECX + 0x18) != 0) && ((*(byte *)(param_2 + 1) & 0x20) == 0)) &&
     (0 < *(int *)(in_ECX + 0x24))) {
    do {
      iVar1 = **(int **)(in_ECX + 0x18);
      uVar4 = FUN_00467165(uVar3);
      (**(code **)(iVar1 + 0xc))(local_28,iVar5,uVar4);
      uStack_c = 0;
      cVar2 = FUN_004e2851(*param_2);
      if (cVar2 != '\0') {
        FUN_004df937();
        FUN_0047479c();
        uStack_c = 0xffffffff;
        thunk_FUN_004f657d(local_28);
        ExceptionList = local_14;
        return;
      }
      uStack_c = 0xffffffff;
      thunk_FUN_004f657d(local_28);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x24));
  }
  ExceptionList = local_14;
  return;
}

