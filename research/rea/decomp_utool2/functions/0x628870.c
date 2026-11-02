// rea decompile_all
// name: FUN_00628870
// address: 0x628870
// body: available
// range: 0x628870-0x628ad2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628870(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *in_EDX;
  void *_Memory;
  float10 fVar5;
  undefined8 uVar6;
  int local_44;
  undefined8 local_40;
  undefined1 local_35;
  int *local_34;
  undefined1 local_2c [8];
  undefined **local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dafa;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = (double)CONCAT44(in_ECX,(void *)local_40);
  iVar3 = (**(code **)(*in_EDX + 0x40))(local_14);
  local_44 = iVar3;
  if (iVar3 < 1) {
LAB_00628aaf:
    *in_ECX = &PTR_vftable_00c7ed38;
  }
  else {
    pcVar1 = *(code **)(*in_EDX + 0x10);
    if (pcVar1 == FUN_00629940) {
      local_35 = 0;
      (**(code **)(*in_EDX + 0xc))(&local_35,1);
      uVar2 = local_35;
    }
    else {
      uVar2 = (*pcVar1)();
    }
    switch(uVar2) {
    case 1:
      uVar4 = (**(code **)(*in_EDX + 0x20))();
      *in_ECX = &PTR_vftable_00c7ed44;
      in_ECX[2] = uVar4;
      break;
    case 2:
      *in_ECX = &PTR_vftable_00c7ed34;
      *(undefined1 *)(in_ECX + 2) = 1;
      break;
    case 3:
      *in_ECX = &PTR_vftable_00c7ed34;
      *(undefined1 *)(in_ECX + 2) = 0;
      break;
    case 4:
      fVar5 = (float10)(**(code **)(*in_EDX + 0x38))();
      local_40 = (double)fVar5;
      *in_ECX = &PTR_vftable_00c7ed2c;
      *(double *)(in_ECX + 2) = local_40;
      break;
    case 5:
      FUN_0062cb00(0x100);
      local_8 = 0;
      FUN_00622920(in_EDX,iVar3 + -1,iVar3 + -1 >> 0x1f);
      uVar4 = FUN_00622880(&local_44);
      FUN_006361d0(uVar4);
      FUN_00637c10();
      FUN_0062cab0();
      break;
    case 6:
      uVar6 = (**(code **)(*in_EDX + 0x28))();
      *in_ECX = &PTR_vftable_00c7ed40;
      *(undefined8 *)(in_ECX + 2) = uVar6;
      break;
    case 7:
      local_24 = &PTR_vftable_00c7ed38;
      local_8 = 2;
      FUN_00628bc0();
      iVar3 = (**(code **)(*in_EDX + 0x40))();
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        do {
          uVar4 = FUN_00628870();
          FUN_00458e80(uVar4);
          (**(code **)(*local_34 + 0x54))(local_2c);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        in_ECX = local_40._4_4_;
      }
      *in_ECX = local_24;
      in_ECX[2] = local_1c;
      in_ECX[3] = local_18;
      local_24 = &PTR_vftable_00c7ed38;
      (**(code **)(PTR_vftable_00c7ed38 + 0x54))(&local_1c);
      break;
    case 8:
      iVar3 = iVar3 + -1;
      _Memory = (void *)0x0;
      if (iVar3 == 0) {
        local_40 = 0.0;
      }
      else {
        local_40._0_4_ = (void *)0x0;
        local_40._4_4_ = (undefined4 *)iVar3;
        FID_conflict__free((void *)0x0);
        _Memory = (void *)FUN_004c554b(iVar3);
        local_40 = (double)CONCAT44(local_40._4_4_,_Memory);
      }
      local_8 = 1;
      if (1 < local_44) {
        uVar4 = (**(code **)(*in_EDX + 0xc))(_Memory,local_44 + -1);
        FUN_0062bdf0(uVar4,0);
        _Memory = (void *)local_40;
      }
      FUN_00629240(&local_40);
      FID_conflict__free(_Memory);
      break;
    default:
      (**(code **)(*in_EDX + 0x5c))(local_44 + -1,local_44 + -1 >> 0x1f);
      goto LAB_00628aaf;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

