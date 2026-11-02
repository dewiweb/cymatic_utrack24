// rea decompile_all
// name: FUN_0049b650
// address: 0x49b650
// body: available
// range: 0x49b650-0x49b868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b650(uint param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int *_Memory;
  float10 fVar5;
  double in_XMM0_Qa;
  undefined4 uStack_60;
  uint *puStack_5c;
  double *pdStack_58;
  undefined ***pppuVar6;
  double local_40;
  uint local_38;
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702b00;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  _pdStack_58 = (double)CONCAT44(0x49b689,pdStack_58);
  FUN_0049c2c0();
  if ((*(int *)(in_ECX + 0x18) != 9) && (*(int *)(in_ECX + 0x18) != 10)) {
    if ((param_2 != '\0') &&
       (*(double *)(in_ECX + 0x58) <= in_XMM0_Qa && in_XMM0_Qa != *(double *)(in_ECX + 0x58))) {
      _pdStack_58 = (double)CONCAT44(param_1,0x49b6b9);
      FUN_0049b400();
    }
    local_40 = in_XMM0_Qa;
    if (*(double *)(in_ECX + 0x58) <= in_XMM0_Qa) {
      local_40 = *(double *)(in_ECX + 0x58);
    }
    goto LAB_0049b77b;
  }
  if (param_2 == '\0') {
LAB_0049b713:
    bVar2 = false;
  }
  else {
    _pdStack_58 = (double)CONCAT44(local_34,0x49b6ec);
    puVar3 = (undefined4 *)FUN_0063bf80();
    local_38 = 1;
    _pdStack_58 = (double)CONCAT44(puVar3 + 2,0x49b700);
    fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
    local_1c = (double)fVar5;
    if (in_XMM0_Qa <= local_1c) goto LAB_0049b713;
    bVar2 = true;
  }
  if ((local_38 & 1) != 0) {
    _pdStack_58 = (double)CONCAT44(local_2c,0x49b727);
    (**(code **)(*local_34[0] + 0x54))();
  }
  if (bVar2) {
    _pdStack_58 = (double)(ulonglong)param_1;
    puStack_5c = (uint *)0x49b73d;
    FUN_0049b870();
  }
  _pdStack_58 = (double)CONCAT44(local_34,0x49b749);
  puVar3 = (undefined4 *)FUN_0063bf80();
  pppuVar6 = (undefined ***)(puVar3 + 2);
  pdStack_58 = (double *)0x49b756;
  fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
  local_1c = (double)fVar5;
  local_40 = in_XMM0_Qa;
  if (local_1c <= in_XMM0_Qa) {
    local_40 = local_1c;
  }
  _pdStack_58 = (double)CONCAT44(pppuVar6,local_2c);
  puStack_5c = (uint *)0x49b776;
  (**(code **)(*local_34[0] + 0x54))();
LAB_0049b77b:
  if (*(double *)(in_ECX + 0x60) != local_40) {
    *(double *)(in_ECX + 0x60) = local_40;
    local_24[0] = &PTR_vftable_00c7ed2c;
    local_8 = 0;
    pppuVar6 = local_24;
    pdStack_58 = (double *)0x49b7b2;
    local_1c = local_40;
    (**(code **)(**(int **)(in_ECX + 0x38) + 8))();
    local_8 = 0xffffffff;
    _pdStack_58 = (double)CONCAT44(pppuVar6,&local_1c);
    puStack_5c = (uint *)0x49b7c5;
    (**(code **)(*local_24[0] + 0x54))();
    FUN_006e6400(&uStack_60);
    FUN_006ce9f0(1);
    if (*(int *)(in_ECX + 0x14c) != 0) {
      puStack_5c = &local_38;
      _pdStack_58 = local_40;
      uStack_60 = 0x49b801;
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x14) + 0xc0))();
      local_8 = 1;
      _pdStack_58 = (double)CONCAT44(uVar4,0x49b814);
      FUN_0049efb0();
      local_8 = 0xffffffff;
      _Memory = (int *)(local_38 - 8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          _pdStack_58 = (double)CONCAT44(_Memory,0x49b83c);
          FID_conflict__free(_Memory);
        }
      }
    }
    if (param_1 != 0) {
      _pdStack_58 = (double)CONCAT44(param_1,0x49b84b);
      FUN_0049bb60();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

