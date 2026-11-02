// rea decompile_all
// name: FUN_00470ad0
// address: 0x470ad0
// body: available
// range: 0x470ad0-0x470e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470ad0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_5c [16];
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701920;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00464550(&local_74,param_2);
  local_18 = (undefined4 *)(uint)*(byte *)((int)in_ECX + 0x2b);
  fVar6 = local_70;
  FUN_00411660(uVar1);
  dVar7 = 0.002;
  fVar8 = local_64;
  fVar9 = local_68;
  if ((fVar6 < 0.002) && (FUN_00411660(uVar1), (double)local_68 < dVar7)) {
    fVar10 = 1.0;
    fVar6 = local_74 - 1.0;
    FUN_00411660(uVar1);
    if ((double)fVar6 < dVar7) {
      fVar10 = fVar8 - fVar10;
      FUN_00411660(uVar1);
      if ((double)fVar10 < dVar7) {
        if ((in_ECX[0x13] == 0) ||
           ((((int)(local_60 * 256.0) | (int)(local_6c * 256.0)) & 0xe0U) == 0)) {
          local_2c = (int)((int)(local_6c * 256.0) + 0x80U) >> 8;
          local_28 = (int)((int)(local_60 * 256.0) + 0x80U) >> 8;
          local_14 = local_28;
          if (param_3 != (int *)0x0) {
            (**(code **)(*param_3 + 0x44))();
            ExceptionList = local_10;
            return;
          }
          iVar5 = *param_1;
          if (iVar5 == 0) {
            local_20 = 0;
            local_24 = 0;
          }
          else {
            local_20 = *(undefined4 *)(iVar5 + 0x10);
            local_24 = *(undefined4 *)(iVar5 + 0xc);
          }
          uVar2 = FUN_00465770(&uStack_3c);
          piVar3 = (int *)FUN_0044db90(local_5c,uVar2);
          local_2c = *piVar3;
          local_28 = piVar3[1];
          local_24 = piVar3[2];
          local_20 = piVar3[3];
          if (local_24 < 1) {
            ExceptionList = local_10;
            return;
          }
          if (local_20 < 1) {
            ExceptionList = local_10;
            return;
          }
          puVar4 = operator_new(0x28);
          puVar4[1] = 0;
          *puVar4 = juce::RenderingHelpers::
                    ClipRegions<juce::RenderingHelpers::SoftwareRendererSavedState>::EdgeTableRegion
                    ::vftable;
          local_1c = puVar4;
          FUN_0067d950(&local_2c);
          puVar4[1] = puVar4[1] + 1;
          local_8 = 0;
          param_3 = puVar4;
          (**(code **)(*(int *)*in_ECX + 8))(&param_2,&param_3);
          local_8 = CONCAT31(local_8._1_3_,2);
          if (param_3 != (undefined4 *)0x0) {
            piVar3 = param_3 + 1;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)*param_3)(1);
            }
          }
          if (param_2 == (int *)0x0) {
            ExceptionList = local_10;
            return;
          }
          (**(code **)(*param_2 + 0x44))();
          if (param_2 == (int *)0x0) {
            ExceptionList = local_10;
            return;
          }
          piVar3 = param_2 + 1;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 != 0) {
            ExceptionList = local_10;
            return;
          }
          (**(code **)*param_2)(1);
          ExceptionList = local_10;
          return;
        }
      }
    }
  }
  if (fVar8 * local_74 - fVar9 * local_70 != (float)(undefined *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x40))();
      ExceptionList = local_10;
      return;
    }
    local_4c = (void *)0x0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 1;
    local_8 = 3;
    iVar5 = FUN_00673860(local_5c);
    FUN_00682020((float)*(int *)(iVar5 + 0xc));
    (**(code **)(*(int *)*in_ECX + 4))(&param_1);
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x18))(&local_18,&local_4c,&local_74);
    piVar3 = (int *)*puVar4;
    *puVar4 = param_1;
    param_1 = piVar3;
    if (local_18 != (undefined4 *)0x0) {
      piVar3 = local_18 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*local_18)(1);
      }
    }
    if ((param_1 != (int *)0x0) && ((**(code **)(*param_1 + 0x40))(), param_1 != (int *)0x0)) {
      piVar3 = param_1 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*param_1)(1);
      }
    }
    FID_conflict__free(local_4c);
  }
  ExceptionList = local_10;
  return;
}

