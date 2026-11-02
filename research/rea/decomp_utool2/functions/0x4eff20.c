// rea decompile_all
// name: FUN_004eff20
// address: 0x4eff20
// body: available
// range: 0x4eff20-0x4f0032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eff20(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  int local_38;
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00705ada;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = 0;
  piVar4 = &local_38;
  local_8 = 0;
  puVar7 = &DAT_00738d78;
  FUN_0061f730(piVar4,&DAT_00738d78,local_14);
  FUN_0061fa00(piVar4,puVar7);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar2 = (undefined4 *)FUN_00636cf0(local_34,&local_38,local_24);
  iVar3 = (**(code **)(*(int *)*puVar2 + 4))(puVar2 + 2);
  (**(code **)(*local_34[0] + 0x54))(local_2c);
  piVar4 = (int *)(local_38 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  if (iVar3 == 1) {
    FUN_0052e080();
  }
  else {
    uVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x10)) {
      bVar6 = *(int *)(in_ECX + 0x10) != 0;
      do {
        if (bVar6) {
          piVar4 = *(int **)(*(int *)(in_ECX + 8) + uVar5 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        (**(code **)(*piVar4 + 0x5c))(iVar3);
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 < *(uint *)(in_ECX + 0x10);
      } while ((int)uVar5 < (int)*(uint *)(in_ECX + 0x10));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

