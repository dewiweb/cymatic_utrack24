// rea decompile_all
// name: FUN_100049f0
// address: 0x100049f0
// body: available
// range: 0x100049f0-0x10004ab5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100049f0(void *param_1)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE local_28;
  undefined4 local_24;
  undefined4 local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e788;
  local_10 = ExceptionList;
  uVar1 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = *(HANDLE *)((int)param_1 + 0x38);
  local_24 = *(undefined4 *)((int)param_1 + 0x3c);
  local_14 = uVar1;
  DVar2 = WaitForMultipleObjects(2,&local_28,0,0xffffffff);
  while (DVar2 != 0) {
    if (DVar2 == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x40));
      local_8 = 0;
      FUN_10001450(param_1,local_20);
      (**(code **)((int)param_1 + 0x20))(local_20[0],uVar1);
      local_8 = 0xffffffff;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x40));
    }
    else {
      Sleep(0x14);
    }
    DVar2 = WaitForMultipleObjects(2,&local_28,0,0xffffffff);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

