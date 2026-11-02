// rea decompile_all
// name: FUN_004cc9b6
// address: 0x4cc9b6
// body: available
// range: 0x4cc9b6-0x4cccfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 FUN_004cc9b6(char *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined1 uVar4;
  float10 fVar5;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined8 local_6c;
  undefined1 local_54 [16];
  undefined1 local_44;
  undefined1 local_30 [8];
  int local_28;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  int local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4cc9c2;
  local_1c = (undefined1 *)0x0;
  local_6c._4_4_ = (undefined4 *)local_14;
  local_6c._0_4_ = (undefined4 *)0x4cc9dc;
  FUN_00472339();
  local_6c = (double)CONCAT44(local_6c._4_4_,0x4cc9e1);
  FUN_00461769();
  local_8 = 0;
  local_6c = (double)CONCAT44(local_14,0x4cc9f2);
  cVar2 = FUN_0046595f();
  if (cVar2 == '\0') {
    local_6c = (double)CONCAT44(local_14,0x4cca6f);
    cVar2 = FUN_0046595f();
    if (cVar2 == '\0') {
      local_6c = (double)CONCAT44(local_14,0x4ccc4d);
      cVar2 = FUN_0046595f();
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        local_6c = (double)CONCAT44(0x4ccc5d,(undefined4 *)local_6c);
        FUN_004c6ae2();
        local_8._0_1_ = 7;
        if (param_2 != (int *)0x0) {
          iVar1 = *param_2;
          local_6c = (double)CONCAT44(0x4ccc79,(undefined4 *)local_6c);
          uVar3 = FUN_00472339();
          local_6c = (double)CONCAT44(uVar3,&local_1c);
          puStack_70 = (undefined1 *)0x4ccc83;
          (**(code **)(iVar1 + 4))();
          puStack_70 = (undefined1 *)0x4ccc8b;
          FUN_0049f5e8();
          puStack_70 = (undefined1 *)0x4ccc93;
          FUN_004c4d7a();
        }
        local_6c = (double)CONCAT44(&local_18,0x4ccc9e);
        FUN_00476f08();
        local_6c = 1.0;
        puStack_70 = (undefined1 *)0x4cccad;
        uVar3 = FUN_00461644();
        local_8 = CONCAT31(local_8._1_3_,8);
        local_6c = (double)CONCAT44(uVar3,param_1);
        puStack_70 = (undefined1 *)0x4cccc2;
        FUN_0047234d();
        local_6c = (double)CONCAT44(0x4cccc7,(undefined4 *)local_6c);
        fVar5 = (float10)FUN_00461752();
        local_6c = (double)CONCAT44((float)fVar5,in_ECX);
        puStack_70 = (undefined1 *)0x4cccd1;
        FUN_00476f3c();
        local_6c = (double)CONCAT44(0x4cccd9,(undefined4 *)local_6c);
        FUN_004615f7();
        local_6c = (double)CONCAT44(0x4ccce1,(undefined4 *)local_6c);
        FUN_004615f7();
        local_6c = (double)CONCAT44(0x4ccce9,(undefined4 *)local_6c);
        FUN_004c4d7a();
        uVar4 = 1;
      }
      local_6c = (double)CONCAT44(0x4cccf3,(undefined4 *)local_6c);
      FUN_004652d6();
      return uVar4;
    }
    local_6c = (double)CONCAT44(0x4cca7f,(undefined4 *)local_6c);
    FUN_00476837();
    local_6c = (double)CONCAT44(0x4cca8b,(undefined4 *)local_6c);
    FUN_00472339();
    local_6c = (double)CONCAT44(0x4cca90,(undefined4 *)local_6c);
    local_44 = FUN_00461746();
    local_6c = (double)CONCAT44(0x4cca9b,(undefined4 *)local_6c);
    FUN_0040954d();
    local_6c._4_4_ = &param_2;
    local_8._0_1_ = 2;
    local_6c._0_4_ = (undefined4 *)0x4ccaaf;
    FUN_00472339();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4ccab4);
    FUN_00461769();
    local_1c = (undefined1 *)&local_6c;
    local_6c = (double)(ulonglong)extraout_ECX_00;
    local_8._0_1_ = 3;
    puStack_70 = (undefined1 *)0x4ccac6;
    FUN_004d076d();
    puStack_70 = local_30;
    uStack_74 = 0x4ccacf;
    FUN_0046720d();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_6c = (double)CONCAT44(0x4ccadb,(undefined4 *)local_6c);
    FUN_004652d6();
    local_18 = local_28 / 2;
    param_2 = (int *)0x0;
    if (0 < local_18) {
      do {
        local_6c = (double)CONCAT44(0x4ccafc,(undefined4 *)local_6c);
        FUN_00467165();
        local_6c = (double)CONCAT44(0x4ccb01,(undefined4 *)local_6c);
        fVar5 = (float10)FUN_00466972();
        local_6c = (double)fVar5;
        puStack_70 = (undefined1 *)0x4ccb11;
        FUN_00467165();
        local_1c = (undefined1 *)&uStack_74;
        puStack_70 = extraout_ECX_01;
        FUN_004d076d();
        FUN_00476816(extraout_EDX);
        uStack_74 = 0x4ccb34;
        FUN_00476966();
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < local_18);
    }
    local_6c = (double)CONCAT44(local_54,0x4ccb48);
    FUN_00476e24();
    local_6c._4_4_ = &param_2;
    local_6c._0_4_ = (undefined4 *)0x4ccb58;
    FUN_00472339();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4ccb5d);
    FUN_00461769();
    local_6c = (double)CONCAT44(&param_2,local_20);
    local_8._0_1_ = 4;
    puStack_70 = (undefined1 *)0x4ccb6e;
    FUN_004e39ab();
    local_6c = (double)CONCAT44(0x4ccb78,(undefined4 *)local_6c);
    FUN_004c96de();
    local_6c = (double)CONCAT44(0x4ccb80,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_6c = (double)CONCAT44(0x4ccb88,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_8._0_1_ = 2;
    local_6c = (double)CONCAT44(0x4ccb94,(undefined4 *)local_6c);
    FUN_004652d6();
    local_6c._4_4_ = &param_2;
    local_6c._0_4_ = (undefined4 *)0x4ccba5;
    FUN_00472339();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4ccbaa);
    FUN_00461769();
    local_6c = (double)CONCAT44(&param_2,local_20);
    local_8._0_1_ = 5;
    puStack_70 = (undefined1 *)0x4ccbbb;
    FUN_004e39ab();
    local_6c = (double)CONCAT44(0x4ccbc5,(undefined4 *)local_6c);
    FUN_004c96de();
    local_6c = (double)CONCAT44(0x4ccbcd,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_6c = (double)CONCAT44(0x4ccbd5,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_8._0_1_ = 2;
    local_6c = (double)CONCAT44(0x4ccbe1,(undefined4 *)local_6c);
    FUN_004652d6();
    local_6c._4_4_ = &param_1;
    local_6c._0_4_ = (undefined4 *)0x4ccbf2;
    FUN_00472339();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4ccbf7);
    FUN_00461769();
    local_6c = (double)CONCAT44(&param_1,local_20);
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_70 = (undefined1 *)0x4ccc08;
    FUN_004e39ab();
    local_6c = (double)CONCAT44(0x4ccc12,(undefined4 *)local_6c);
    FUN_004c96de();
    local_6c = (double)CONCAT44(0x4ccc1a,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_6c = (double)CONCAT44(0x4ccc22,(undefined4 *)local_6c);
    FUN_004e2f64();
    local_6c = (double)CONCAT44(0x4ccc2a,(undefined4 *)local_6c);
    FUN_004652d6();
    local_6c = (double)CONCAT44(0x4ccc32,(undefined4 *)local_6c);
    FUN_004670ed();
    local_6c = (double)CONCAT44(0x4ccc3a,(undefined4 *)local_6c);
    FUN_004768de();
  }
  else {
    local_6c._4_4_ = &param_1;
    local_6c._0_4_ = (undefined4 *)0x4cca06;
    FUN_00472339();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4cca0b);
    FUN_00461769();
    local_6c._4_4_ = (undefined4 *)extraout_ECX;
    if (*param_1 != '\0') {
      local_6c._0_4_ = (undefined4 *)0x4cca28;
      param_2 = (int *)((int)&local_6c + 4);
      FUN_004d076d();
      local_6c._0_4_ = &param_2;
      puStack_70 = (undefined1 *)0x4cca31;
      FUN_00476816();
    }
    local_1c = (undefined1 *)((int)&local_6c + 4);
    local_6c._0_4_ = (undefined4 *)0x4cca40;
    FUN_004d076d();
    local_6c = (double)CONCAT44(local_6c._4_4_,0x4cca47);
    FUN_00476dfd();
    local_6c = (double)CONCAT44(0x4cca4f,(undefined4 *)local_6c);
    FUN_004652d6();
  }
  local_6c = (double)CONCAT44(0x4cca57,(undefined4 *)local_6c);
  FUN_004652d6();
  return 1;
}

