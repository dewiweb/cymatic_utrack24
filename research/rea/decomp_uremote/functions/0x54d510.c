// rea decompile_all
// name: FUN_0054d510
// address: 0x54d510
// body: available
// range: 0x54d510-0x54d572 inclusive
// range: 0x54d575-0x54d5fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d510(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005d2e1c;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPG::CThreadManager::vftable;
  local_8 = 1;
  FUN_00513420(uVar1);
  local_14 = in_ECX[2];
  while (local_14 != 0) {
    if (local_14 == 0) {
      local_18 = in_ECX[2];
    }
    else {
      local_18 = *(int *)(local_14 + 8);
    }
    FUN_0054d810(local_14);
    local_14 = local_18;
  }
  LOCK();
  in_ECX[6] = in_ECX[6] + -1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
  local_8 = local_8 & 0xffffff00;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
  FUN_005157c0();
  local_8 = 0xffffffff;
  FUN_0054e580();
  ExceptionList = local_10;
  return;
}

