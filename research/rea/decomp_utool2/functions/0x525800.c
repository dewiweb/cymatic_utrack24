// rea decompile_all
// name: FUN_00525800
// address: 0x525800
// body: available
// range: 0x525800-0x525a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525800(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  int local_44;
  int local_40;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b1c8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (*(int *)(in_ECX + 0x514) == 0) {
    operator_new(0xac);
    local_8 = 0;
    FUN_0045c990("This selection is empty.");
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar2 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68,local_38,&PTR_DAT_00c7ed68);
    local_8 = 2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(1);
      FUN_006e5050(piVar2,0xffffffff);
    }
    piVar2 = (int *)(local_38[0] + -8);
    if (piVar2 == &DAT_00bfe124) goto LAB_00525a2c;
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    operator_new(0xac);
    ppuVar7 = &PTR_DAT_00c7ed68;
    local_8 = 3;
    puVar5 = &DAT_0073b828;
    if (*(int *)(in_ECX + 0x514) == 0) {
      puVar5 = &DAT_0073b824;
    }
    FUN_0045c990(puVar5,&PTR_DAT_00c7ed68,uVar1);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int *)(in_ECX + 0x514) < 0) {
      iVar3 = FUN_006104a0();
      *(undefined1 *)(iVar3 + -1) = 0x2d;
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = FUN_006104a0();
    }
    puVar6 = &local_15 + -iVar3;
    FUN_004557e0(puVar6);
    local_8 = 5;
    FUN_00637690(local_38);
    FUN_006377c0(puVar6);
    uVar4 = FUN_00637730(puVar5);
    local_8 = 6;
    piVar2 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68,uVar4,ppuVar7);
    local_8 = 9;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(1);
      FUN_006e5050(piVar2,0xffffffff);
    }
    piVar2 = (int *)(local_44 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_38[0] + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_40 + -8);
    if (piVar2 == &DAT_00bfe124) goto LAB_00525a2c;
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    FID_conflict__free(piVar2);
  }
LAB_00525a2c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

