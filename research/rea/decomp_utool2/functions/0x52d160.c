// rea decompile_all
// name: FUN_0052d160
// address: 0x52d160
// body: available
// range: 0x52d160-0x52d313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d160(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  int local_54;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c7ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar3 = false;
  local_1c = 0;
  if ((*(int *)(in_ECX + 0x9c) != 0) && (*(int *)(*(int *)(in_ECX + 0x9c) + 0x14) != 0)) {
    puStack_5c = &stack0xffffffb0;
    local_54 = 0;
    uStack_58 = 0x1000500;
    uStack_60 = 0x52d1ad;
    FUN_006e8e70();
    local_54 = 0x52d1b5;
    FUN_00684a80();
    ExceptionList = local_10;
    return;
  }
  local_54 = 0x52d1db;
  FUN_00684c50();
  if (*(int *)(in_ECX + 0xd0) != 0) {
    local_54 = 0x52d1ee;
    piVar1 = (int *)FUN_00554ba0();
    bVar3 = true;
    if ((undefined *)*piVar1 != PTR_DAT_00c7ed54) {
      local_54 = *piVar1;
      uStack_58 = 0x52d20e;
      iVar2 = FUN_0045c1e0();
      local_11 = '\x01';
      if (iVar2 != 0) goto LAB_0052d21c;
    }
  }
  local_11 = '\0';
LAB_0052d21c:
  if ((bVar3) && (piVar1 = (int *)(local_1c + -8), piVar1 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_54 = 0x52d243;
      FID_conflict__free(piVar1);
    }
  }
  if (local_11 == '\0') {
    local_54 = 0x52d2a8;
    FUN_0045c990();
    local_8 = 1;
    local_54 = 0x52d2bd;
    FUN_006e6400();
    local_54 = 0x24;
    FUN_0040e4d0(auStack_64);
    FUN_006830c0(&local_1c);
    local_18 = local_1c;
  }
  else {
    local_54 = 0x52d25d;
    FUN_0045c990();
    local_8 = 0;
    local_54 = 0x52d272;
    FUN_006e6400();
    local_54 = 0x24;
    FUN_0040e4d0(auStack_64);
    FUN_006830c0(&local_18);
  }
  piVar1 = (int *)(local_18 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_54 = 0x52d2fd;
      FID_conflict__free(piVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

