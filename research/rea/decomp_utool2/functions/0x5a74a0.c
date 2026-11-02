// rea decompile_all
// name: FUN_005a74a0
// address: 0x5a74a0
// body: available
// range: 0x5a74a0-0x5a767e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a7610) */
/* WARNING: Removing unreachable block (ram,0x005a761a) */

void FUN_005a74a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int *_Memory;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_5c = 0x5a74de;
  FUN_00684c50();
  iVar1 = DAT_00c7ebbc;
  if (*(int *)(in_ECX + 0x48) == 0) {
    local_5c = param_2;
    uStack_60 = 0;
    uStack_64 = 0x5a7649;
    FUN_00472d90();
    local_5c = 0x21;
    FUN_0040e4d0(auStack_6c);
    FUN_006830c0(in_ECX + 0x3c);
  }
  else {
    local_8 = 0;
    local_5c = 0x5a752b;
    FUN_00636ec0();
    FUN_0044ec90();
    local_5c = 0;
    uStack_60 = 0x5a7542;
    FUN_00644f50();
    if (*(char *)(in_ECX + 0x4c) != '\0') {
      local_5c = 0x5a755f;
      FUN_0045c990();
      local_8._0_1_ = 1;
      local_5c = 0x5a757a;
      FUN_00636ec0();
      FUN_0044ec90();
      local_5c = 0;
      uStack_60 = 0x5a7592;
      FUN_00644f50();
      local_8 = (uint)local_8._1_3_ << 8;
      _Memory = (int *)(iVar1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          local_5c = 0x5a75b8;
          FID_conflict__free(_Memory);
        }
      }
    }
    local_5c = param_1;
    uStack_60 = 0x5a75f0;
    FUN_006807b0();
    FUN_00471bf0();
    local_5c = 0x5a7600;
    FID_conflict__free((void *)0x0);
  }
  ExceptionList = local_10;
  return;
}

