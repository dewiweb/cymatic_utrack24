// rea decompile_all
// name: FUN_0049b400
// address: 0x49b400
// body: available
// range: 0x49b400-0x49b643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b400(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int *_Memory;
  float10 fVar6;
  double in_XMM0_Qa;
  double dVar7;
  double *pdStack_88;
  double *pdStack_84;
  double *pdStack_80;
  undefined ***pppuVar8;
  int local_5c;
  int *local_58 [2];
  double local_50;
  int *local_48 [2];
  double local_40;
  int *local_38 [2];
  double local_30;
  undefined **local_28 [2];
  double local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702ac0;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _pdStack_80 = (double)CONCAT44(0x49b438,pdStack_80);
  local_5c = in_ECX;
  FUN_0049c2c0();
  if ((*(int *)(in_ECX + 0x18) == 0xb) || (dVar7 = in_XMM0_Qa, *(int *)(in_ECX + 0x18) == 0xc)) {
    _pdStack_80 = (double)CONCAT44(local_58,0x49b45a);
    puVar3 = (undefined4 *)FUN_0063bf80();
    local_8 = 0;
    _pdStack_80 = (double)CONCAT44(local_48,0x49b472);
    puVar4 = (undefined4 *)FUN_0063bf80();
    pppuVar8 = (undefined ***)(puVar3 + 2);
    pdStack_80 = (double *)0x49b481;
    fVar6 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
    _pdStack_80 = (double)CONCAT44(pppuVar8,puVar4 + 2);
    local_20 = (double)fVar6;
    pdStack_84 = (double *)0x49b491;
    fVar6 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))();
    local_30 = (double)fVar6;
    dVar7 = local_30;
    if ((local_30 <= in_XMM0_Qa) && (dVar7 = local_20, in_XMM0_Qa <= local_20)) {
      dVar7 = in_XMM0_Qa;
    }
    pdStack_84 = &local_40;
    pdStack_88 = (double *)0x49b4be;
    (**(code **)(*local_48[0] + 0x54))();
    local_8 = 0xffffffff;
    pdStack_88 = &local_50;
    (**(code **)(*local_58[0] + 0x54))();
    in_ECX = local_5c;
  }
  if (dVar7 != *(double *)(in_ECX + 0x58)) {
    if (*(int *)(in_ECX + 0x140) != 0) {
      _pdStack_80 = 2.12438235382269e-314;
      FUN_006e0e10();
    }
    *(double *)(in_ECX + 0x58) = dVar7;
    local_28[0] = &PTR_vftable_00c7ed2c;
    local_8 = 1;
    _pdStack_80 = (double)CONCAT44(local_38,0x49b522);
    local_20 = dVar7;
    FUN_0063ae80();
    _pdStack_80 = (double)CONCAT44(local_28[0],&local_20);
    pdStack_84 = &local_30;
    pdStack_88 = (double *)0x49b537;
    cVar2 = (**(code **)(*local_38[0] + 0x5c))();
    pdStack_88 = &local_30;
    (**(code **)(*local_38[0] + 0x54))();
    local_8 = 0xffffffff;
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    if (cVar2 == '\0') {
      local_28[0] = &PTR_vftable_00c7ed2c;
      local_8 = 2;
      pppuVar8 = local_28;
      pdStack_80 = (double *)0x49b583;
      local_20 = dVar7;
      (**(code **)(**(int **)(in_ECX + 0x28) + 8))();
      local_8 = 0xffffffff;
      _pdStack_80 = (double)CONCAT44(pppuVar8,&local_20);
      pdStack_84 = (double *)0x49b596;
      (**(code **)(*local_28[0] + 0x54))();
    }
    _pdStack_80 = (double)CONCAT44(0x49b59d,pdStack_80);
    FUN_0049c180();
    FUN_006e6400(&pdStack_88);
    FUN_006ce9f0(1);
    if (*(int *)(in_ECX + 0x14c) != 0) {
      pdStack_84 = (double *)&local_5c;
      pdStack_88 = (double *)0x49b5d9;
      _pdStack_80 = dVar7;
      uVar5 = (**(code **)(**(int **)(in_ECX + 0x14) + 0xc0))();
      local_8 = 3;
      _pdStack_80 = (double)CONCAT44(uVar5,0x49b5ec);
      FUN_0049efb0();
      local_8 = 0xffffffff;
      _Memory = (int *)(local_5c + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          _pdStack_80 = (double)CONCAT44(_Memory,0x49b614);
          FID_conflict__free(_Memory);
        }
      }
    }
    if (param_1 != 0) {
      _pdStack_80 = (double)CONCAT44(param_1,0x49b626);
      FUN_0049bb60();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

