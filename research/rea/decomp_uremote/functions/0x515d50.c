// rea decompile_all
// name: FUN_00515d50
// address: 0x515d50
// body: available
// range: 0x515d50-0x515e7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515d50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf2db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    iVar1 = FUN_005160b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    if ((((iVar1 == 0) || (*(int *)(iVar1 + 0xc) != param_1)) || (*(int *)(iVar1 + 0x10) != param_2)
        ) || (*(int *)(iVar1 + 0x14) != param_3)) {
      iVar2 = FUN_0052e6e0();
      iVar3 = FUN_005af82d(0x20);
      local_8 = 0;
      if (iVar3 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = FUN_00516180(param_1,param_2,param_3,iVar2 + param_4);
      }
      local_8 = 0xffffffff;
      if (local_34 != 0) {
        FUN_00513420();
        *(undefined4 *)(local_34 + 8) = *(undefined4 *)(in_ECX + 100);
        *(int *)(in_ECX + 100) = local_34;
        LOCK();
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
        UNLOCK();
        LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
      }
    }
    if (iVar1 != 0) {
      FUN_00516280();
    }
  }
  ExceptionList = local_10;
  return;
}

