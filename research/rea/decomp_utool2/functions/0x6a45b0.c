// rea decompile_all
// name: FUN_006a45b0
// address: 0x6a45b0
// body: available
// range: 0x6a45b0-0x6a49bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a45b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,char param_7,float ***param_8,float ***param_9,float ***param_10,
                 float ***param_11)

{
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar1;
  float ***pppfVar2;
  float fVar3;
  float ***pppfVar4;
  undefined4 uStack_70;
  undefined4 ***pppuStack_6c;
  float ***pppfStack_68;
  float ***pppfStack_64;
  float ***pppfStack_60;
  int iStack_5c;
  undefined1 *local_58;
  undefined4 uStack_54;
  undefined4 ***local_44;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  undefined4 ***pppuStack_38;
  undefined4 ***local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined8 uStack_1c;
  undefined4 ***local_14;
  float local_10;
  undefined8 local_c;
  
  pppfStack_60 = (float ***)&uStack_54;
  local_58 = (undefined1 *)0x0;
  iStack_5c = 0x1000300;
  pppfStack_64 = (float ***)0x6a45ce;
  FUN_006e8e70();
  local_58 = (undefined1 *)0x6a45d8;
  FUN_00684a80();
  local_58 = (undefined1 *)&uStack_54;
  iStack_5c = 0;
  pppfStack_60 = (float ***)0x1000400;
  pppfStack_64 = (float ***)((int)&local_c + 4);
  pppfStack_68 = (float ***)0x6a460d;
  FUN_006e8e70();
  iStack_5c = 0x6a4619;
  FUN_006842b0();
  local_58 = (undefined1 *)0x6a4620;
  FUN_00684c50();
  pppfVar2 = param_9;
  if (0.0 < (float)(int)param_9) {
    uStack_54 = 0;
    if (param_7 == '\0') {
      fVar3 = (float)(param_6 + -2);
      iVar1 = *(int *)*param_1;
      uStack_1c = (double)(fVar3 * 0.3) + 6755399441055744.0;
      local_58 = (undefined1 *)(float ***)uStack_1c;
      iStack_5c = param_5;
      local_c = (double)(fVar3 * 0.35) + 6755399441055744.0;
      pppfStack_60 = (float ***)((int)local_c + param_4);
      pppfStack_64 = (float ***)0x6a4733;
      local_58 = (undefined1 *)FUN_00472d90();
      iStack_5c = 0x6a473c;
      (**(code **)(iVar1 + 0x54))();
      pppfVar4 = (float ***)(param_4 + 1);
      local_24 = param_8;
      uStack_1c._4_4_ = (float ***)(param_6 + -4);
      uStack_1c._0_4_ = param_9;
      iStack_5c = extraout_ECX;
      pppfVar2 = param_9;
      param_6 = param_6 + -2;
    }
    else {
      fVar3 = (float)(param_5 + -2);
      iVar1 = *(int *)*param_1;
      local_58 = (undefined1 *)param_6;
      local_c = (double)(fVar3 * 0.3) + 6755399441055744.0;
      iStack_5c = (int)local_c;
      pppfStack_60 = (float ***)param_4;
      uStack_1c = (double)(fVar3 * 0.35) + 6755399441055744.0;
      pppfStack_64 = (float ***)0x6a46a8;
      local_58 = (undefined1 *)FUN_00472d90();
      iStack_5c = 0x6a46b1;
      (**(code **)(iVar1 + 0x54))();
      local_24 = (undefined4 ***)(param_3 + 1);
      uStack_1c._0_4_ = (float ***)(param_5 + -4);
      uStack_1c._4_4_ = pppfVar2;
      iStack_5c = param_3;
      pppfVar4 = param_8;
      param_5 = param_5 + -2;
    }
    pppfStack_60 = (float ***)&iStack_5c;
    pppuStack_6c = &param_9;
    pppfStack_64 = (float ***)0x0;
    pppfStack_68 = (float ***)0x1000400;
    uStack_70 = 0x6a478d;
    pppuStack_20 = pppfVar4;
    FUN_006e8e70();
    pppfStack_64 = (float ***)0x6a4799;
    FUN_006842b0();
    pppfStack_60 = (float ***)0x6a47a0;
    FUN_00684c50();
    pppfStack_60 = (float ***)&local_44;
    iStack_5c = 0;
    local_44 = local_24;
    pppuStack_40 = pppuStack_20;
    pppuStack_3c = (float ***)uStack_1c;
    pppuStack_38 = uStack_1c._4_4_;
    pppfStack_64 = (float ***)0x6a47b5;
    (**(code **)(*(int *)*param_1 + 0x54))();
    pppfStack_68 = (float ***)&pppfStack_64;
    pppuStack_6c = (undefined4 ***)0x6a47df;
    FUN_006842b0();
    pppfStack_68 = (float ***)0x6a47e6;
    FUN_00684c50();
    pppfStack_64 = uStack_1c._4_4_;
    pppfStack_68 = (float ***)uStack_1c;
    uStack_70 = 0x6a47f8;
    pppuStack_6c = pppfVar4;
    FUN_00472d90();
    uStack_70 = extraout_ECX_00;
    FUN_0040e4d0(&uStack_70);
    FUN_00677150();
    if (0x10 < (int)pppfVar2) {
      iVar1 = 2;
      do {
        iVar1 = iVar1 + -1;
        pppfStack_68 = (float ***)&pppfStack_64;
        param_10 = (float ***)((float)iVar1 * 4.0 + (float)((int)pppfVar2 / 2 + (int)param_8));
        pppuStack_6c = (undefined4 ***)0x6a485f;
        FUN_006842b0();
        pppfStack_68 = (float ***)0x6a4866;
        FUN_00684c50();
        if (param_7 == '\0') {
          pppfStack_64 = (float ***)&local_34;
          local_34 = param_10;
          local_2c = param_10;
          param_11 = (float ***)((float)param_6 * 0.2);
          pppfVar4 = (float ***)((float)param_6 * 0.8);
          pppfStack_68 = (float ***)0x6a4955;
          local_30 = param_11;
          local_28 = pppfVar4;
          (**(code **)(*(int *)*param_1 + 100))();
          pppuStack_6c = &pppfStack_68;
          uStack_70 = 0x6a4969;
          FUN_006842b0();
          pppuStack_6c = (undefined4 ***)0x6a4970;
          FUN_00684c50();
          pppfStack_68 = (float ***)&local_44;
          local_44 = (undefined4 ***)((float)param_10 - 1.0);
          pppuStack_40 = param_11;
          pppuStack_3c = local_44;
          pppuStack_38 = pppfVar4;
        }
        else {
          pppfStack_64 = (float ***)&local_24;
          pppuStack_20 = param_10;
          param_11 = (float ***)((float)param_5 * 0.2);
          pppfVar4 = (float ***)((float)param_5 * 0.8);
          local_24 = (undefined4 ***)((float)param_3 + (float)param_11);
          uStack_1c._4_4_ = param_10;
          pppfStack_68 = (float ***)0x6a48c5;
          uStack_1c._0_4_ = pppfVar4;
          (**(code **)(*(int *)*param_1 + 100))();
          pppuStack_6c = &pppfStack_68;
          uStack_70 = 0x6a48d9;
          FUN_006842b0();
          pppuStack_6c = (undefined4 ***)0x6a48e0;
          FUN_00684c50();
          pppfStack_68 = (float ***)&local_14;
          local_10 = (float)param_10 - 1.0;
          local_14 = param_11;
          local_c = (double)CONCAT44(local_10,pppfVar4);
        }
        pppuStack_6c = (undefined4 ***)0x6a49a6;
        (**(code **)(*(int *)*param_1 + 100))();
      } while (-1 < iVar1);
    }
  }
  return;
}

