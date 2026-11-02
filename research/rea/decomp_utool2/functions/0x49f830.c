// rea decompile_all
// name: FUN_0049f830
// address: 0x49f830
// body: available
// range: 0x49f830-0x49f9ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f830(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint extraout_ECX;
  uint uVar6;
  int iVar7;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  void *local_20;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703080;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = 0;
  local_2c = param_1;
  if ((((*(byte *)(in_ECX + 0x69) & 0x10) != 0) ||
      (((*(int *)(in_ECX + 0xc) != 0 && (cVar2 = FUN_006e6320(local_14), cVar2 == '\0')) ||
       (*(int *)(*(int *)(in_ECX + 0x74) + 0xb8) == 0)))) ||
     ((*(char *)(local_2c + 0x3d) == '\0' || (*(char *)(in_ECX + 0x89) != '\0'))))
  goto LAB_0049f9d0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_8 = 0;
  if (*(char *)(*(int *)(in_ECX + 0x74) + 0x9f) == '\0') {
    iVar4 = *(int *)(in_ECX + 0x84);
    cVar2 = FUN_006e38e0(iVar4);
    if (cVar2 != '\0') goto LAB_0049f905;
    iVar7 = iVar4;
    if (iVar4 < iVar4 + 1) {
      iVar7 = iVar4 + 1;
    }
    FUN_004100a0(iVar4,iVar7);
  }
  else {
LAB_0049f905:
    uVar3 = FUN_006d17e0(&local_20);
    FUN_004ac430(uVar3);
    FID_conflict__free(local_20);
  }
  iVar4 = FUN_004ae6c0();
  if (0 < iVar4) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 0xb8) + 0x3c))(&local_24,&local_38);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar6 = local_28;
    if (*(code **)(*local_24 + 0x28) == FUN_004133b0) {
      if (*(code **)(*local_24 + 0x40) == FUN_004133b0) {
        bVar1 = true;
      }
      else {
        puVar5 = (undefined4 *)FUN_00635650(&local_28);
        uVar6 = 1;
        if (*(char *)*puVar5 == '\0') goto LAB_0049f98b;
        bVar1 = true;
      }
    }
    else {
LAB_0049f98b:
      bVar1 = false;
    }
    if ((uVar6 & 1) != 0) {
      FUN_00637c10();
      uVar6 = extraout_ECX;
    }
    if (bVar1) {
      *(undefined1 *)(in_ECX + 0x89) = 1;
      FUN_00699ad0(local_2c,&local_38,&local_24,uVar6);
    }
    (**(code **)(*local_24 + 0x54))(local_1c);
  }
  FID_conflict__free(local_38);
LAB_0049f9d0:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

