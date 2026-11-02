// rea decompile_all
// name: FUN_004dc42b
// address: 0x4dc42b
// body: available
// range: 0x4dc42b-0x4dcaaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dc42b(float param_1,float param_2,float param_3,double *param_4,undefined4 param_5,
                 float param_6,float param_7,char param_8,char param_9,char param_10,char param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  float *extraout_ECX_01;
  uint3 uVar10;
  undefined4 unaff_EBX;
  float10 fVar11;
  undefined8 uVar12;
  double *local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 in_stack_ffffff30;
  double local_d0;
  float *pfStack_cc;
  uint local_bc;
  float local_ac;
  uint local_a8;
  double local_a0 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  float local_68 [2];
  float local_60;
  undefined1 local_48 [32];
  undefined1 local_28 [36];
  
  if (param_3 <= param_6) {
    return;
  }
  if ((float)param_4 <= param_6) {
    return;
  }
  local_d0 = (double)CONCAT44(0x4dc467,in_stack_ffffff30);
  local_a8 = FUN_005b3fb0();
  local_d0 = (double)CONCAT44(0x4dc473,in_stack_ffffff30);
  uVar5 = FUN_005b3fb0();
  local_d0 = (double)CONCAT44(0x4dc47f,in_stack_ffffff30);
  FUN_005b3fb0();
  local_d0 = (double)CONCAT44(0x4dc48b,in_stack_ffffff30);
  local_8c = FUN_005b3fb0();
  if (0.0 <= param_7) {
    fVar11 = (float10)param_7;
  }
  else {
    local_d0 = (double)CONCAT44((float)param_4 * 0.5,param_3 * 0.5);
    local_d8 = CONCAT44(0x4dc4c7,(undefined4)local_d8);
    fVar11 = (float10)FUN_0043d2e1();
  }
  fVar1 = (float)fVar11;
  fVar2 = (float)param_4 * 0.75 + ((float)param_4 - (fVar1 + fVar1));
  local_d0 = (double)CONCAT44(0x4dc4f7,in_stack_ffffff30);
  iVar6 = FUN_005b3fb0();
  local_d0 = (double)CONCAT44(0x4dc507,in_stack_ffffff30);
  uVar12 = FUN_0047888f();
  uVar10 = (uint3)((ulonglong)uVar12 >> 0x28);
  if ((param_9 == '\0') && (param_11 == '\0')) {
    iVar9 = CONCAT31(uVar10,1);
  }
  else {
    iVar9 = (uint)uVar10 << 8;
  }
  if (param_8 == '\0') {
    local_bc = CONCAT31(local_bc._1_3_,1);
    if (param_11 != '\0') goto LAB_004dc52a;
  }
  else {
LAB_004dc52a:
    local_bc = local_bc & 0xffffff00;
  }
  uVar10 = (uint3)((uint)extraout_ECX >> 8);
  if ((param_9 == '\0') && (param_10 == '\0')) {
    iVar8 = CONCAT31(uVar10,1);
  }
  else {
    iVar8 = (uint)uVar10 << 8;
  }
  uVar10 = (uint3)((ulonglong)uVar12 >> 8);
  if ((param_8 == '\0') && (param_10 == '\0')) {
    iVar7 = CONCAT31(uVar10,1);
  }
  else {
    iVar7 = (uint)uVar10 << 8;
  }
  local_d0 = (double)CONCAT44(iVar9,local_bc);
  local_d8 = CONCAT44(iVar8,iVar7);
  local_e0 = CONCAT44(fVar1,fVar1);
  local_e4 = param_4;
  FUN_0047909d(param_1,param_2,param_3);
  local_d0 = (double)(ulonglong)(uint)(param_2 + (float)param_4);
  local_d8 = local_d8 & 0xffffffff;
  local_e0 = CONCAT44(0x3e4ccccd,&local_d8);
  local_e4 = (double *)0x4dc5cc;
  FUN_00476535();
  local_e0 = (ulonglong)(uint)param_2 << 0x20;
  FUN_00476535(&local_e4,0x3e4ccccd);
  FUN_00476850(local_88);
  local_d0 = 0.03;
  local_d8._4_4_ = (float **)(local_d8 >> 0x20);
  local_d8._0_4_ = 0x3e99999a;
  local_e0 = CONCAT44((int)&local_d8 + 4,0x4dc621);
  FUN_00476237();
  local_d8._0_4_ = 0x4dc62a;
  FUN_00476966();
  local_d0 = 0.4;
  local_d8._0_4_ = 0x4dc644;
  FUN_004d076d();
  local_d8._0_4_ = 0x4dc649;
  FUN_00476966();
  local_d0 = 0.97;
  local_d8._0_4_ = 0x3e99999a;
  local_e0 = CONCAT44((int)&local_d8 + 4,0x4dc66e);
  FUN_00476237();
  local_d8 = CONCAT44(local_d8._4_4_,0x4dc673);
  FUN_00476966();
  local_d0 = (double)CONCAT44(local_88,unaff_EBX);
  local_d8 = CONCAT44(0x4dc67c,(undefined4)local_d8);
  FUN_0047ce07();
  local_d0 = (double)CONCAT44(&DAT_0095d798,local_48);
  local_d8 = CONCAT44(0x4dc691,(undefined4)local_d8);
  FUN_0047d2ae();
  local_d0 = (double)CONCAT44(0x4dc69a,in_stack_ffffff30);
  FUN_004768de();
  local_a0[0]._0_4_ = (double **)&local_d8;
  fVar3 = (float)param_4 * 0.5 + param_2;
  local_d0 = (double)CONCAT44(1,fVar3);
  local_d8 = CONCAT44(param_1,(undefined4)local_d8);
  local_e0 = CONCAT44(0x3e4ccccd,&local_d8);
  local_e4 = (double *)0x4dc6d7;
  FUN_00476535();
  local_a0[0]._0_4_ = &local_e4;
  local_e0 = CONCAT44(fVar3,fVar2 + param_1);
  FUN_004d076d();
  FUN_00476850(local_68);
  local_d0 = (double)(1.0 - (fVar1 * 0.5) / fVar2);
  local_d8 = 0x3ff0000000000000;
  local_e0 = 0;
  local_e4 = (double *)0x4dc73c;
  fVar11 = (float10)FUN_0047065b();
  local_d0 = (double)fVar11;
  local_a0[0]._0_4_ = (double **)((int)&local_d8 + 4);
  local_d8._0_4_ = 0x4dc750;
  FUN_004d076d();
  local_d8 = CONCAT44(local_d8._4_4_,0x4dc759);
  FUN_00476966();
  local_d0 = (double)(1.0 - (fVar1 * 0.25) / fVar2);
  local_d8 = 0x3ff0000000000000;
  local_e0 = 0;
  local_e4 = (double *)0x4dc784;
  fVar11 = (float10)FUN_0047065b();
  local_d0 = (double)fVar11;
  local_a0[0] = (double)CONCAT44(local_a0[0]._4_4_,(int)&local_d8 + 4);
  local_d8._4_4_ = (float **)(local_d8 >> 0x20);
  local_d8._0_4_ = 0x3e99999a;
  local_e4 = local_a0;
  local_e0._0_4_ = 0x3e4ccccd;
  local_e0._4_4_ = (undefined1 *)((int)&local_d8 + 4);
  FUN_00476535();
  local_e0 = CONCAT44(local_e0._4_4_,0x4dc7b8);
  FUN_00476237();
  local_d8 = CONCAT44(local_d8._4_4_,0x4dc7c1);
  FUN_00476966();
  if (((param_8 == '\0') && (param_10 == '\0')) && (param_11 == '\0')) {
    local_d0 = (double)CONCAT44(0x4dc7da,in_stack_ffffff30);
    FUN_0047cd0e();
    local_d0 = (double)CONCAT44(local_68,unaff_EBX);
    local_d8 = CONCAT44(0x4dc7e5,(undefined4)local_d8);
    FUN_0047ce07();
    local_d0 = (double)CONCAT44(local_8c,iVar6);
    local_d8 = CONCAT44(uVar5,0x4dc7fa);
    FUN_0047ccbf();
    local_d0 = (double)CONCAT44(&DAT_0095d798,local_48);
    local_d8 = CONCAT44(0x4dc808,(undefined4)local_d8);
    FUN_0047d2ae();
    local_d0 = (double)CONCAT44(0x4dc80f,in_stack_ffffff30);
    FUN_0047cd1a();
  }
  if (param_9 == '\0') {
    if (param_10 == '\0') {
      if (param_11 == '\0') {
        local_60 = param_1 + param_3;
        local_68[0] = local_60 - fVar2;
        local_d0 = (double)CONCAT44(0x4dc83e,in_stack_ffffff30);
        FUN_0047cd0e();
        local_d0 = (double)CONCAT44(local_68,unaff_EBX);
        local_d8 = CONCAT44(0x4dc849,(undefined4)local_d8);
        FUN_0047ce07();
        local_d0 = (double)CONCAT44(local_8c,iVar6 + 2);
        local_d8 = CONCAT44(uVar5,0x4dc868);
        FUN_0047ccbf();
        local_d0 = (double)CONCAT44(&DAT_0095d798,local_48);
        local_d8 = CONCAT44(0x4dc876,(undefined4)local_d8);
        FUN_0047d2ae();
        local_d0 = (double)CONCAT44(0x4dc87d,in_stack_ffffff30);
        FUN_0047cd1a();
        goto LAB_004dc87d;
      }
      goto LAB_004dc883;
    }
LAB_004dc899:
    local_ac = 0.0;
    if (param_10 == '\0') goto LAB_004dc8a5;
LAB_004dc8b7:
    fVar2 = 0.0;
  }
  else {
LAB_004dc87d:
    if (param_10 != '\0') goto LAB_004dc899;
LAB_004dc883:
    if (param_8 != '\0') goto LAB_004dc899;
    local_ac = fVar1 * 0.4;
LAB_004dc8a5:
    if (param_9 != '\0') goto LAB_004dc8b7;
    fVar2 = fVar1 * 0.4;
  }
  local_d0 = (double)CONCAT44(0x4dc8c6,in_stack_ffffff30);
  uVar12 = FUN_0047888f();
  uVar10 = (uint3)((ulonglong)uVar12 >> 0x28);
  if ((param_9 == '\0') && (param_11 == '\0')) {
    iVar6 = CONCAT31(uVar10,1);
  }
  else {
    iVar6 = (uint)uVar10 << 8;
  }
  if (param_8 == '\0') {
    uVar4 = local_a8 >> 8;
    local_a8 = CONCAT31((int3)uVar4,1);
    if (param_11 == '\0') goto LAB_004dc8ee;
  }
  local_a8 = local_a8 & 0xffffff00;
LAB_004dc8ee:
  uVar10 = (uint3)((uint)extraout_ECX_00 >> 8);
  if ((param_9 == '\0') && (param_10 == '\0')) {
    iVar9 = CONCAT31(uVar10,1);
  }
  else {
    iVar9 = (uint)uVar10 << 8;
  }
  uVar10 = (uint3)((ulonglong)uVar12 >> 8);
  if ((param_8 == '\0') && (param_10 == '\0')) {
    iVar8 = CONCAT31(uVar10,1);
  }
  else {
    iVar8 = (uint)uVar10 << 8;
  }
  local_d0 = (double)CONCAT44(iVar6,local_a8);
  local_d8 = CONCAT44(iVar9,iVar8);
  local_e4 = (double *)((float)param_4 * 0.4);
  local_a0[0] = (double)(float)local_e4;
  local_e0 = CONCAT44(fVar1 * 0.4,fVar1 * 0.4);
  FUN_0047909d(local_ac + param_1,fVar1 * 0.1 + param_2,param_3 - (fVar2 + local_ac));
  local_d0 = (double)(ulonglong)(uint)(param_2 + (float)local_a0[0]);
  local_d8 = local_d8 & 0xffffffff;
  local_e0 = CONCAT44(0x4dc9cc,(undefined4)local_e0);
  local_a0[0]._0_4_ = (double **)&local_d8;
  fVar11 = (float10)FUN_004d076d();
  local_a0[0]._0_4_ = &local_e4;
  local_e0 = CONCAT44((float)param_4 * 0.06 + param_2,(float)fVar11);
  FUN_004764ae(&local_e4,0x41200000);
  uVar5 = FUN_00476850(local_28);
  local_d0 = (double)CONCAT44(uVar5,unaff_EBX);
  local_d8 = CONCAT44(0x4dca18,(undefined4)local_d8);
  FUN_0047ce07();
  local_d0 = (double)CONCAT44(0x4dca24,in_stack_ffffff30);
  FUN_004768de();
  local_d0 = (double)CONCAT44(&DAT_0095d798,local_88);
  local_d8 = CONCAT44(0x4dca31,(undefined4)local_d8);
  FUN_0047d2ae();
  local_d0 = (double)CONCAT44(0x4dca3a,in_stack_ffffff30);
  FUN_004f7994();
  local_d8._4_4_ = &pfStack_cc;
  local_a0[0] = (double)CONCAT44(local_a0[0]._4_4_,&pfStack_cc);
  local_d8._0_4_ = 0x3ecccccd;
  local_e0 = CONCAT44(local_a0,0x4dca63);
  pfStack_cc = extraout_ECX_01;
  FUN_00476535();
  local_d8 = CONCAT44(local_d8._4_4_,0x4dca68);
  FUN_00476237();
  local_d0 = (double)CONCAT44(pfStack_cc,0x4dca6f);
  FUN_0047cda7();
  pfStack_cc = (float *)&DAT_0095d798;
  local_d8 = CONCAT44(0x4dca80,(undefined4)local_d8);
  uVar5 = FUN_0047badf();
  local_d0 = (double)CONCAT44(pfStack_cc,uVar5);
  local_d8 = CONCAT44(local_48,0x4dca90);
  FUN_0047d2d0();
  local_d0 = (double)CONCAT44(0x4dca99,in_stack_ffffff30);
  FUN_004768de();
  local_d0 = (double)CONCAT44(0x4dcaa5,in_stack_ffffff30);
  FUN_004f7994();
  return;
}

