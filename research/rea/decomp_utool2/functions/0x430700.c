// rea decompile_all
// name: FUN_00430700
// address: 0x430700
// body: available
// range: 0x430700-0x4308b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00430700(void)

{
  int *_Memory;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_5c;
  int *local_58;
  void *local_54;
  void *local_34;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe076;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x72f) == '\0') {
    FUN_0063eab0(local_14);
    local_58 = *(int **)(in_ECX + 0x6e4);
    FUN_00430310();
    *(undefined1 *)(in_ECX + 0x72e) = 1;
    uVar2 = FUN_006375e0(in_ECX + 0x6a4);
    local_8 = 0;
    uVar3 = FUN_006375e0(in_ECX + 0x6c4);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042f7d0(&local_5c,uVar3,uVar2,*(undefined8 *)(in_ECX + 0x69c),
                 *(undefined4 *)(in_ECX + 0x694));
    _Memory = (int *)(local_5c + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    FID_conflict__free(local_34);
    local_8 = 0xffffffff;
    FID_conflict__free(local_54);
    FUN_004309d0();
    if (local_58 != (int *)0x0) {
      (**(code **)(*local_58 + 8))(in_ECX + -0xc);
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x6e8));
      *(int **)(in_ECX + 0x6e4) = local_58;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x6e8));
    }
    if (*(int *)(in_ECX + 0x14) == 0) {
      FUN_005c78b0();
    }
    else {
      FUN_005c78b0();
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + 8) == 0) {
      *(undefined4 *)(in_ECX + 4) = 100;
      *(undefined4 *)(in_ECX + 8) = 100;
      local_8 = 2;
      if (DAT_00c8a668 == 0) {
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      FUN_00463c00(in_ECX);
    }
    else {
      FUN_00463b90();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

