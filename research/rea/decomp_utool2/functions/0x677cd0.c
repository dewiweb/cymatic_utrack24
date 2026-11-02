// rea decompile_all
// name: FUN_00677cd0
// address: 0x677cd0
// body: available
// range: 0x677cd0-0x678197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00677cd0(void **param_1,void **param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  void *_Memory;
  float *pfVar7;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 in_EDX;
  uint uVar8;
  float in_XMM0_Da;
  float fVar9;
  float fVar10;
  void *local_e0;
  uint local_dc;
  int local_d8;
  float local_c0;
  float fStack_bc;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  void *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  char local_58;
  int local_54;
  int local_50;
  int local_34;
  void *local_20;
  void *local_1c;
  uint local_18;
  
  if (in_XMM0_Da <= 0.0) {
    param_1[2] = (void *)0x0;
    param_1[4] = (void *)0x0;
    param_1[6] = (void *)0x0;
    param_1[5] = (void *)0x0;
    param_1[3] = (void *)0x0;
    return;
  }
  local_88 = (void *)0x0;
  local_84 = 0;
  local_80 = 0;
  local_6c = 1;
  local_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  if (param_2 == param_1) {
    FUN_0067c360(&local_88);
    param_2 = &local_88;
  }
  else {
    param_1[2] = (void *)0x0;
    param_1[4] = (void *)0x0;
    param_1[6] = (void *)0x0;
    param_1[5] = (void *)0x0;
    param_1[3] = (void *)0x0;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  fVar9 = in_XMM0_Da * 9.0 * in_XMM0_Da;
  FUN_00679e40(param_2,param_3);
  local_e0 = (void *)0x0;
  local_dc = 0;
  local_d8 = 0;
  FUN_00472240(0x308);
  local_c0 = 0.0;
  fStack_bc = 0.0;
  cVar5 = FUN_00679520();
  _Memory = (void *)0x0;
  uVar2 = extraout_ECX;
  while (cVar5 != '\0') {
    if (local_54 == 0) {
      if (0 < local_d8) {
        FUN_006781a0(0,fVar9,in_ECX,in_EDX,uVar2);
        local_d8 = 0;
        _Memory = local_e0;
      }
      local_c0 = local_68;
      fStack_bc = local_64;
    }
    fVar4 = local_5c;
    fVar3 = local_60;
    fVar10 = local_60 - local_c0;
    local_a0 = local_5c - fStack_bc;
    fStack_9c = local_a0 * local_a0 + fVar10 * fVar10;
    if (((local_58 != '\0') || (0.0001 < fStack_9c)) ||
       ((local_1c == local_20 &&
        ((*(uint *)(local_50 + 8) <= local_18 || (*(float *)(local_34 + local_18 * 4) == 100002.0)))
        ))) {
      FUN_00423c70();
      if (fStack_9c == (float)(undefined *)0x0) {
        fStack_a8 = local_c0;
        local_b0 = local_c0;
        fStack_98 = local_c0;
        local_a0 = local_c0;
        fStack_a4 = fStack_bc;
        fStack_ac = fStack_bc;
        fStack_94 = fStack_bc;
        fStack_9c = fStack_bc;
      }
      else {
        fStack_9c = (in_XMM0_Da * 0.5) / fStack_9c;
        local_a0 = fStack_9c * local_a0;
        fStack_9c = fStack_9c * fVar10;
        fStack_98 = local_c0 - local_a0;
        fStack_94 = fStack_9c + fStack_bc;
        local_b0 = local_a0 + local_c0;
        fStack_ac = fStack_bc - fStack_9c;
        fStack_a8 = local_a0 + local_60;
        fStack_a4 = local_5c - fStack_9c;
        fStack_9c = fStack_9c + local_5c;
        local_a0 = local_60 - local_a0;
      }
      iVar1 = local_d8 + 1;
      if ((int)local_dc < iVar1) {
        iVar6 = iVar1;
        if (iVar1 < 0) {
          iVar6 = local_d8 + 2;
        }
        uVar8 = local_d8 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (local_dc != uVar8) {
          local_dc = uVar8;
          if ((int)uVar8 < 1) {
            FID_conflict__free(_Memory);
            _Memory = (void *)0x0;
            local_e0 = _Memory;
          }
          else if (_Memory == (void *)0x0) {
            _Memory = (void *)FUN_004c554b();
            local_e0 = _Memory;
          }
          else {
            _Memory = (void *)FUN_004c553b(_Memory,uVar8 * 0x30);
            local_e0 = _Memory;
          }
        }
      }
      pfVar7 = (float *)(local_d8 * 0x30 + (int)_Memory);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_c0;
        pfVar7[1] = fStack_bc;
        pfVar7[2] = fVar3;
        pfVar7[3] = fVar4;
        pfVar7[4] = local_b0;
        pfVar7[5] = fStack_ac;
        pfVar7[6] = fStack_a8;
        pfVar7[7] = fStack_a4;
        pfVar7[8] = local_a0;
        pfVar7[9] = fStack_9c;
        pfVar7[10] = fStack_98;
        pfVar7[0xb] = fStack_94;
      }
      if (local_58 == '\0') {
        local_c0 = local_60;
        fStack_bc = local_5c;
        local_d8 = iVar1;
      }
      else {
        FUN_006781a0(1,fVar9,in_ECX,in_EDX,local_d8);
        local_d8 = 0;
        _Memory = local_e0;
      }
    }
    cVar5 = FUN_00679520();
    uVar2 = extraout_ECX_00;
  }
  if (0 < local_d8) {
    FUN_006781a0(0,fVar9,in_ECX,in_EDX,uVar2);
    _Memory = local_e0;
  }
  FID_conflict__free(_Memory);
  FID_conflict__free(local_20);
  FID_conflict__free(local_88);
  return;
}

