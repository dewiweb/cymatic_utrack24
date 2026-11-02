// rea decompile_all
// name: FUN_004d8e0c
// address: 0x4d8e0c
// body: available
// range: 0x4d8e0c-0x4d9303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8e0c(undefined4 param_1,int param_2,int param_3,undefined1 **param_4,uint *param_5)

{
  undefined1 **ppuVar1;
  float fVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined1 *local_90;
  float local_8c;
  undefined1 **local_88;
  uint uStack_84;
  undefined8 local_68;
  float local_60;
  undefined1 *local_5c;
  float local_58;
  undefined1 **local_54;
  double local_50;
  double local_48;
  undefined1 local_38 [32];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e1913;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_88 = (undefined1 **)0x41700000;
  local_8c = 7.122381e-39;
  FUN_0049f51e();
  local_c = 0;
  local_88 = (undefined1 **)0x4d8e5a;
  FUN_0047888f();
  local_c = CONCAT31(local_c._1_3_,1);
  local_88 = (undefined1 **)0x4d8e66;
  fVar9 = (float10)FUN_0049fa03();
  ppuVar1 = (undefined1 **)(float)(fVar9 - (float10)3.0);
  local_88 = (undefined1 **)((float)param_2 - 6.0);
  local_8c = 0.0;
  local_90 = (undefined1 *)0x4d8e91;
  local_54 = local_88;
  fVar9 = (float10)FUN_0043bcfe();
  local_68 = (double)CONCAT44(local_68._4_4_,(float)fVar9);
  local_88 = (undefined1 **)(((float)param_3 - (float)ppuVar1) - 3.0);
  local_8c = 0.0;
  local_90 = (undefined1 *)0x4d8eb8;
  local_54 = local_88;
  fVar9 = (float10)FUN_0043bcfe();
  local_54 = (undefined1 **)(float)fVar9;
  local_88 = (undefined1 **)((float)local_54 * 0.5);
  local_8c = (float)(undefined1 ***)local_68 * 0.5;
  local_90 = (undefined1 *)0x40a00000;
  local_58 = local_8c;
  fVar9 = (float10)FUN_0044dd00();
  fVar2 = (float)fVar9;
  puVar3 = (undefined1 *)(fVar2 + fVar2);
  if (**param_4 == '\0') {
    fVar9 = (float10)0;
  }
  else {
    local_88 = param_4;
    local_8c = 7.122671e-39;
    iVar5 = FUN_0049fa60();
    local_88 = (undefined1 **)((float)iVar5 + 8.0);
    local_8c = ((float)(undefined1 ***)local_68 - (float)puVar3) - 8.0;
    local_90 = (undefined1 *)0x0;
    local_58 = local_8c;
    fVar9 = (float10)FUN_0043bcfe();
    local_8c = (float)fVar9;
    local_90 = (undefined1 *)0x0;
    fVar9 = (float10)FUN_004a8e90();
  }
  local_60 = (float)fVar9;
  local_58 = fVar2 + 4.0;
  if ((*param_5 >> 2 & 1) == 0) {
    if ((*param_5 >> 1 & 1) != 0) {
      local_58 = (((float)(undefined1 ***)local_68 - fVar2) - local_60) - 4.0;
    }
  }
  else {
    local_58 = (((float)(undefined1 ***)local_68 - (float)puVar3) - local_60) * 0.5 + fVar2;
  }
  local_48 = (double)(local_58 + 3.0);
  local_8c = local_60 + local_58 + 3.0;
  local_90 = (undefined1 *)0x4d8ffd;
  local_88 = ppuVar1;
  local_58 = local_8c;
  FUN_00478b0d();
  local_8c = (float)(undefined1 ***)local_68 + 3.0;
  local_68 = (double)local_8c;
  local_8c = local_8c - fVar2;
  local_90 = (undefined1 *)0x4d902f;
  local_88 = ppuVar1;
  local_58 = local_8c;
  FUN_00478ba1();
  local_58 = (float)local_68 - (float)puVar3;
  local_88 = (undefined1 **)0x3fc90fdb;
  local_8c = 0.0;
  local_90 = puVar3;
  FUN_00479614(local_38,local_58,ppuVar1,puVar3);
  local_50 = (double)((float)local_54 + (float)ppuVar1);
  local_88 = (undefined1 **)(((float)local_54 + (float)ppuVar1) - fVar2);
  local_8c = (float)local_68;
  local_90 = (undefined1 *)0x4d90ad;
  local_54 = (undefined1 **)local_8c;
  FUN_00478ba1();
  local_54 = (undefined1 **)((float)local_50 - (float)puVar3);
  local_88 = (undefined1 **)0x40490fdb;
  local_8c = 1.5707964;
  local_90 = puVar3;
  FUN_00479614(local_38,local_58,local_54,puVar3);
  local_88 = (undefined1 **)(float)local_50;
  local_8c = fVar2 + 3.0;
  local_90 = (undefined1 *)0x4d9125;
  local_58 = local_8c;
  FUN_00478ba1();
  local_88 = (undefined1 **)0x4096cbe4;
  local_8c = 3.1415927;
  local_90 = puVar3;
  FUN_00479614(local_38,0x40400000,local_54,puVar3);
  local_88 = (undefined1 **)((float)ppuVar1 + fVar2);
  local_8c = 3.0;
  local_90 = (undefined1 *)0x4d918b;
  local_54 = local_88;
  FUN_00478ba1();
  local_88 = (undefined1 **)0x40c90fdb;
  local_8c = 4.712389;
  local_90 = puVar3;
  FUN_00479614(local_38,0x40400000,ppuVar1,puVar3);
  local_8c = (float)local_48;
  local_90 = (undefined1 *)0x4d91eb;
  local_88 = ppuVar1;
  local_54 = (undefined1 **)local_8c;
  FUN_00478ba1();
  local_88 = (undefined1 **)0x4d91f3;
  cVar4 = FUN_004c3153();
  if (cVar4 == '\0') {
    local_8c = 0.5;
  }
  else {
    local_8c = 1.0;
  }
  local_90 = (undefined1 *)&local_88;
  local_58 = local_8c;
  local_68._0_4_ = &local_88;
  FUN_004c1e29(&local_68,0x1005400,0);
  FUN_00476237();
  local_8c = 7.123785e-39;
  FUN_0047cda7();
  local_88 = (undefined1 **)&DAT_0095d798;
  local_8c = 2.0;
  local_90 = (undefined1 *)0x4d924f;
  local_8c = (float)FUN_0047badf();
  local_90 = local_38;
  FUN_0047d2d0();
  local_68._0_4_ = &local_88;
  local_90 = (undefined1 *)&local_88;
  local_8c = local_58;
  FUN_004c1e29(&local_58,0x1005410,0);
  FUN_00476237();
  local_8c = 7.123903e-39;
  FUN_0047cda7();
  local_88 = &local_5c;
  local_8c = 7.123917e-39;
  FUN_0047ceaa();
  local_8c = 1.4013e-45;
  local_5c = (undefined1 *)&local_90;
  local_90 = (undefined1 *)0x24;
  uVar6 = FUN_004a8e4a(0x41700000);
  uVar7 = FUN_004a8e4a(local_68._4_4_,uVar6);
  uVar10 = 0;
  uVar8 = FUN_004a8e4a(local_58,0,uVar7);
  FUN_0047d02d(param_1,param_4,uVar8,uVar10,uVar7,uVar6);
  local_8c = 7.12403e-39;
  FUN_004f7994();
  local_8c = 7.124043e-39;
  FUN_004c4d7a();
  ExceptionList = pvStack_18;
  return;
}

