// rea decompile_all
// name: FUN_004fc220
// address: 0x4fc220
// body: available
// range: 0x4fc220-0x4fc384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc220(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706bcb;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 != in_ECX + 0x2284) {
    return;
  }
  piVar2 = (int *)(in_ECX + 0x1e6c);
  piVar1 = (int *)(PTR_DAT_00c7ed54 + -8);
  ExceptionList = &local_10;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar2;
  *piVar2 = (int)PTR_DAT_00c7ed54;
  UNLOCK();
  piVar1 = (int *)(iVar3 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  FUN_006e4900(piVar2,0);
  cVar4 = FUN_004fbec0(uVar5);
  if (cVar4 == '\0') {
    if (*(int *)(in_ECX + 0xd60) == 0) goto LAB_004fc36b;
    *(undefined4 *)(in_ECX + 0xd60) = 2;
    FUN_0045c990("Modified");
    local_8 = 4;
  }
  else {
    if (*(int *)(in_ECX + 0xd60) == 0) goto LAB_004fc36b;
    *(undefined4 *)(in_ECX + 0xd60) = 3;
    FUN_0045c990("Modified");
    local_8 = 1;
  }
  FUN_006e4900(&param_1,0);
  local_8 = 0xffffffff;
  FUN_00637c10();
  FUN_006e6170(0x1000280,DAT_00c7ebb0);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
LAB_004fc36b:
  FUN_004fbe50();
  ExceptionList = local_10;
  return;
}

