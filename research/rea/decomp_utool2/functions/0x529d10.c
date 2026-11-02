// rea decompile_all
// name: FUN_00529d10
// address: 0x529d10
// body: available
// range: 0x529d10-0x529ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529d10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 local_38 [4];
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c1df;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = FUN_00448730(*(undefined4 *)(param_1 + 8),"BTN_CHG_SR",uVar1);
  if (iVar2 == 0) {
    FUN_00524270();
  }
  else {
    iVar2 = FUN_00448730(*(undefined4 *)(param_1 + 8),"BTN_CHG_RES",uVar1);
    if (iVar2 == 0) {
      FUN_00522f90();
    }
    else {
      iVar2 = FUN_00448730(*(undefined4 *)(param_1 + 8),"BTN_CHG_MSR",uVar1);
      if (iVar2 == 0) {
        FUN_00524270();
      }
      else {
        iVar2 = FUN_00448730(*(undefined4 *)(param_1 + 8),"BTNID_CHG_MRES",uVar1);
        if (iVar2 == 0) {
          FUN_00522f90();
        }
        else {
          local_24[0] = &PTR_vftable_00c7ed44;
          local_1c[0] = 0;
          puVar6 = local_38;
          local_8 = 0;
          puVar7 = &DAT_0073b41c;
          FUN_0061f730(puVar6,&DAT_0073b41c);
          FUN_0061fa00(puVar6,puVar7);
          local_8 = CONCAT31(local_8._1_3_,1);
          puVar3 = (undefined4 *)FUN_00636cf0(local_34,local_38,local_24);
          iVar2 = (**(code **)(*(int *)*puVar3 + 4))(puVar3 + 2);
          (**(code **)(*local_34[0] + 0x54))(local_2c);
          FUN_00637000();
          local_8 = 0xffffffff;
          (**(code **)(*local_24[0] + 0x54))(local_1c);
          if (iVar2 == 0x200) {
            FUN_00518650();
          }
          else if (iVar2 == 0x1000) {
            FUN_00517fd0();
          }
          else {
            uVar1 = 0;
            if (0 < *(int *)(in_ECX + 0x10)) {
              bVar5 = *(int *)(in_ECX + 0x10) != 0;
              do {
                if (bVar5) {
                  piVar4 = *(int **)(*(int *)(in_ECX + 8) + uVar1 * 4);
                }
                else {
                  piVar4 = (int *)0x0;
                }
                (**(code **)(*piVar4 + 0x6c))(iVar2);
                uVar1 = uVar1 + 1;
                bVar5 = uVar1 < *(uint *)(in_ECX + 0x10);
              } while ((int)uVar1 < (int)*(uint *)(in_ECX + 0x10));
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

