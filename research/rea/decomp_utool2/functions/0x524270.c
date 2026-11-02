// rea decompile_all
// name: FUN_00524270
// address: 0x524270
// body: available
// range: 0x524270-0x524412 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524270(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  uint uVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070aef2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x33c);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00524420();
  local_8 = 1;
  FUN_0045c990();
  local_8._0_1_ = 2;
  FUN_004eb590();
  local_8 = CONCAT31(local_8._1_3_,1);
  _Memory = (int *)((int)pvVar2 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_006e5240();
  iVar1 = puVar3[0x54];
  if (0 < iVar1) {
    uVar5 = 0;
    if (0 < (int)puVar3[0x50]) {
      bVar6 = puVar3[0x50] != 0;
      do {
        if (bVar6) {
          iVar4 = *(int *)(puVar3[0x4e] + uVar5 * 4);
        }
        else {
          iVar4 = 0;
        }
        *(int *)(*(int *)(*(int *)(iVar4 + 0x78) + 0xc) + 0x28) = iVar1;
        FUN_005406f0();
        FUN_00410a10();
        local_8._0_1_ = 3;
        FUN_0045c990();
        local_8._0_1_ = 4;
        FUN_0045c990("Song Project Error");
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_005bd5a0();
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 < (uint)puVar3[0x50];
      } while ((int)uVar5 < (int)puVar3[0x50]);
    }
    FUN_00548700();
  }
  (**(code **)*puVar3)();
  ExceptionList = local_10;
  return;
}

