// rea decompile_all
// name: FUN_00696340
// address: 0x696340
// body: available
// range: 0x696340-0x696488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696340(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int *_Memory;
  float fVar4;
  float local_60;
  float local_5c;
  float local_50;
  int local_30;
  int local_24;
  int local_1c;
  float fStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721e5e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x97) == '\0') {
    fVar4 = 3.4028235e+38;
  }
  else {
    fVar4 = (float)((*(int *)(*(int *)(in_ECX + 0x7c) + 0xb8) - *(int *)(in_ECX + 0xfc)) + -3);
  }
  fStack_18 = 0.0;
  if (0.0 < fVar4) {
    FUN_004a0d50(in_ECX + 0x114,*(undefined4 *)(in_ECX + 0x128));
    local_8 = 0;
    cVar2 = FUN_004a0e90(uVar3);
    while (cVar2 != '\0') {
      fVar4 = local_50;
      if (local_50 <= fStack_18) {
        fVar4 = fStack_18;
      }
      cVar2 = FUN_004a0e90(uVar3);
      fStack_18 = fVar4;
    }
    fVar4 = *(float *)(*(int *)(in_ECX + 0x108) + 0x14);
    if (fVar4 <= local_5c + local_60) {
      fVar4 = local_5c + local_60;
    }
    local_1c = SUB84((double)fVar4 + 6755399441055744.0,0);
    local_24 = SUB84((double)fStack_18 + 6755399441055744.0,0);
    FUN_006e9790(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x10),
                 *(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),
                 local_24 + 2 + *(int *)(in_ECX + 0xfc),local_1c + 1 + *(int *)(in_ECX + 0x100));
    _Memory = (int *)(local_30 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

