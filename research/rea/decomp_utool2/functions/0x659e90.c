// rea decompile_all
// name: FUN_00659e90
// address: 0x659e90
// body: available
// range: 0x659e90-0x65a32c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659e90(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar12;
  char *pcVar13;
  int local_2bc;
  int local_2b4;
  int local_2b0;
  undefined4 *local_2a4;
  int local_298;
  int *local_294;
  void *local_290;
  int local_288;
  uint local_280;
  int local_260;
  char local_25a;
  char local_259;
  code **local_258;
  undefined4 *local_254;
  char *local_24c;
  int *local_240;
  undefined4 local_22c;
  int local_1fc;
  int local_1f8;
  code *local_a8;
  undefined *local_a4;
  undefined *local_a0;
  undefined *local_9c;
  undefined *local_98;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007201f8;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar6;
  FUN_0062cb00(0x100);
  local_8 = 1;
  FUN_0061ff80(uVar6);
  *param_1 = 0;
  if (0x10 < local_280) {
    _memset(&local_a8,0,0x84);
    local_a8 = FUN_0065a520;
    local_258 = &local_a8;
    local_a4 = &DAT_0065a500;
    local_a0 = &DAT_0065a510;
    local_9c = &DAT_0065a4f0;
    local_98 = &DAT_0065a510;
    FUN_00669c50();
    local_240 = (int *)(*(code *)*local_254)(&local_258,0,0x1c);
    local_24c = &local_259;
    local_259 = '\0';
    local_240[2] = (int)&DAT_0065a4a0;
    local_240[3] = (int)&LAB_0065a470;
    local_240[4] = (int)FUN_0065a480;
    local_240[5] = (int)FUN_00664580;
    local_240[6] = (int)&DAT_0065a4a0;
    iVar11 = local_288;
    if (local_294 != (int *)0x0) {
      if (local_280 < (uint)local_294[1]) {
        *(undefined1 *)(local_280 + *local_294) = 0;
      }
      iVar11 = *local_294;
    }
    *local_240 = iVar11;
    local_240[1] = local_280;
    FUN_006699a0();
    if ((local_259 == '\0') && (FUN_00664180(), local_259 == '\0')) {
      local_22c = 2;
      puVar7 = (undefined4 *)(*(code *)local_254[2])(&local_258,1,local_1fc * 3,1);
      cVar5 = FUN_00669ed0();
      if ((cVar5 != '\0') && (local_259 == '\0')) {
        puVar8 = (undefined4 *)FUN_006838f0(1,local_1fc,local_1f8,0);
        uVar3 = *param_1;
        *param_1 = *puVar8;
        *puVar8 = uVar3;
        FUN_006838d0();
        local_24[0] = &PTR_vftable_00c7ed34;
        local_1c[0] = 0;
        piVar10 = &local_260;
        local_8._0_1_ = 2;
        pcVar13 = "originalImageHadAlpha";
        FUN_0061f730(piVar10,"originalImageHadAlpha");
        FUN_0061fa00(piVar10,pcVar13);
        local_8._0_1_ = 3;
        FUN_00637060(&local_260,local_24);
        FUN_00637000();
        local_8._0_1_ = 1;
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_25a = FUN_006737f0();
        FUN_00673170(param_1,1);
        local_8 = CONCAT31(local_8._1_3_,4);
        local_260 = 0;
        uVar6 = extraout_ECX;
        if (0 < local_1f8) {
          do {
            iVar11 = local_260;
            FUN_00669d60(uVar6);
            if (local_259 != '\0') goto LAB_0065a242;
            pbVar4 = (byte *)*puVar7;
            iVar12 = local_1fc + -1;
            pbVar9 = (byte *)(local_2b4 * iVar11 + local_2bc);
            uVar6 = extraout_ECX_00;
            if (local_25a == '\0') {
              for (; -1 < iVar12; iVar12 = iVar12 + -1) {
                bVar1 = pbVar4[2];
                bVar2 = pbVar4[1];
                uVar6 = (uint)*pbVar4;
                pbVar9[2] = *pbVar4;
                pbVar9[1] = bVar2;
                *pbVar9 = bVar1;
                pbVar9 = pbVar9 + local_2b0;
                pbVar4 = pbVar4 + 3;
              }
            }
            else {
              for (; -1 < iVar12; iVar12 = iVar12 + -1) {
                uVar6 = (uint)pbVar4[2];
                bVar1 = pbVar4[1];
                bVar2 = *pbVar4;
                *pbVar9 = pbVar4[2];
                pbVar9[1] = bVar1;
                pbVar9[2] = bVar2;
                pbVar9[3] = 0xff;
                pbVar9 = pbVar9 + local_2b0;
                pbVar4 = pbVar4 + 3;
              }
            }
            local_260 = local_260 + 1;
          } while (local_260 < local_1f8);
        }
        if (local_259 == '\0') {
          FUN_006697e0();
        }
LAB_0065a242:
        if (local_294 != (int *)0x0) {
          if (local_280 < (uint)local_294[1]) {
            *(undefined1 *)(local_280 + *local_294) = 0;
          }
          local_288 = *local_294;
        }
        (**(code **)(*param_2 + 0x58))(*local_240 - local_288,*local_240 - local_288 >> 0x1f);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_2a4 != (undefined4 *)0x0) {
          (**(code **)*local_2a4)(1);
        }
      }
    }
    if (local_254 != (undefined4 *)0x0) {
      (*(code *)local_254[10])(&local_258);
    }
  }
  FUN_00622b80();
  FID_conflict__free(local_290);
  piVar10 = (int *)(local_298 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar11 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

