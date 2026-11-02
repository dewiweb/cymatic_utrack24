// rea decompile_all
// name: FUN_006a7fe0
// address: 0x6a7fe0
// body: available
// range: 0x6a7fe0-0x6a81dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a7fe0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,float param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar5;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  float fVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 local_24;
  int iStack_20;
  uint uStack_1c;
  
  uVar3 = param_10;
  uVar1 = param_1;
  iStack_20 = 0;
  local_24 = 0x1001200;
  FUN_006e8e70(&uStack_1c);
  iStack_20 = 0x6a800b;
  FUN_00684a80();
  iVar2 = param_9;
  if ((param_9 != 2) && (param_9 != 3)) {
    uStack_1c = uVar3;
    iStack_20 = param_9;
    local_24 = param_8;
    (**(code **)(*in_ECX + 8))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_006db800(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    return;
  }
  iStack_20 = 0x6a80aa;
  cVar4 = FUN_006cbfa0();
  if ((cVar4 == '\0') || ((*(byte *)(uVar3 + 0x69) & 0x10) != 0)) {
LAB_006a80ea:
    param_1 = (uint)param_1._1_3_ << 8;
    uStack_1c = 0x6a80f5;
    cVar4 = FUN_006e2bd0();
    uVar9 = extraout_ECX_01;
    uVar5 = extraout_EDX_02;
    if (cVar4 != '\0') goto LAB_006a80c8;
    uStack_1c = extraout_EDX_02 & 0xffffff00;
  }
  else {
    uVar9 = 0;
    uVar5 = extraout_EDX;
    if (*(int *)(uVar3 + 0xc) != 0) {
      uStack_1c = 0x6a80c0;
      cVar4 = FUN_006e6320();
      uVar9 = extraout_ECX;
      uVar5 = extraout_EDX_00;
      if (cVar4 == '\0') goto LAB_006a80ea;
    }
    param_1 = CONCAT31(param_1._1_3_,1);
LAB_006a80c8:
    uStack_1c = CONCAT31((int3)(uVar5 >> 8),1);
  }
  if ((*(byte *)(uVar3 + 0x69) & 0x10) == 0) {
    uVar9 = 0;
    if (*(int *)(uVar3 + 0xc) != 0) {
      uStack_1c = 0x6a80dc;
      cVar4 = FUN_006e6320();
      uVar9 = extraout_ECX_00;
      uStack_1c = extraout_EDX_01;
      if (cVar4 == '\0') goto LAB_006a80fd;
    }
    param_10 = 0x3f800000;
  }
  else {
LAB_006a80fd:
    param_10 = 0x3f000000;
  }
  iStack_20 = param_1;
  puVar8 = &local_24;
  local_24 = uVar9;
  FUN_006e8e70(&param_7,0x1001300,0);
  FUN_0067f460(puVar8);
  uVar9 = 0x6a813d;
  FUN_006ab370();
  if ((*(byte *)(uVar3 + 0x69) & 0x10) == 0) {
    if (*(int *)(uVar3 + 0xc) != 0) {
      uStack_1c = 0x6a8152;
      cVar4 = FUN_006e6320();
      if (cVar4 == '\0') goto LAB_006a8160;
    }
    uVar7 = 0x3f666666;
  }
  else {
LAB_006a8160:
    uVar7 = 0x3e99999a;
  }
  fVar6 = (float)param_5;
  if (iVar2 == 3) {
    fVar6 = fVar6 - param_6;
    param_6 = (float)param_4;
  }
  else {
    param_6 = param_6 - (float)param_2;
  }
  FUN_006a6860(uVar1,param_6,fVar6,0,&param_9,uVar7,uVar9);
  return;
}

