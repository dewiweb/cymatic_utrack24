// rea decompile_all
// name: FUN_004dc110
// address: 0x4dc110
// body: available
// range: 0x4dc110-0x4dc42a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dc110(undefined4 param_1,float param_2,undefined1 *param_3,float param_4,
                 undefined4 param_5,float param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 *extraout_EDX;
  float10 fVar2;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined8 local_90;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  double local_20;
  undefined1 *local_18;
  float local_14;
  undefined1 *local_10;
  float local_c;
  
  if (param_6 < param_4) {
    local_90 = CONCAT44(0x4dc134,(float)local_90);
    FUN_0047888f();
    local_20 = (double)(param_4 * 0.5);
    local_14 = param_2 + param_4 * 0.5;
    local_90 = CONCAT44(param_3,local_14);
    local_94 = (undefined1 *)0x4dc15f;
    FUN_00478b0d();
    local_18 = (undefined1 *)(param_4 * 0.6 + (float)param_3);
    local_10 = (undefined1 *)(param_2 + param_4);
    local_90 = CONCAT44(local_18,local_10);
    local_94 = (undefined1 *)0x4dc18d;
    FUN_00478ba1();
    local_c = (float)param_3 + param_4;
    local_90 = CONCAT44(local_c,local_10);
    local_94 = (undefined1 *)0x4dc1ac;
    FUN_00478ba1();
    local_90 = CONCAT44(local_c,param_2);
    local_94 = (undefined1 *)0x4dc1c2;
    FUN_00478ba1();
    local_90 = CONCAT44(local_18,param_2);
    local_94 = (undefined1 *)0x4dc1d8;
    FUN_00478ba1();
    local_90 = CONCAT44(0x4dc1df,(float)local_90);
    FUN_00478e1f();
    local_10 = (undefined1 *)((float)param_3 + (float)local_20);
    local_98 = local_30;
    local_90 = CONCAT44(local_10,local_14);
    local_94 = (undefined1 *)((float)param_7 * 1.5707964);
    local_9c = (undefined1 *)0x4dc214;
    local_18 = local_94;
    uVar1 = FUN_004772cf();
    local_90 = CONCAT44(uVar1,0x4dc21f);
    FUN_0047a42b();
    local_90 = (ulonglong)(uint)local_c;
    local_94 = (undefined1 *)0x0;
    local_18 = (undefined1 *)&local_9c;
    puStack_a4 = (undefined1 *)&local_9c;
    local_a0 = (undefined1 *)0x3e99999a;
    puStack_a8 = (undefined1 *)0x4dc251;
    FUN_00476237();
    puStack_a4 = (undefined1 *)0x4dc25c;
    local_a0 = (undefined1 *)&local_98;
    FUN_0047627a();
    local_9c = param_3;
    local_a0 = (undefined1 *)0x0;
    local_18 = (undefined1 *)&puStack_a8;
    FUN_00476237(&puStack_a8,0x3e99999a);
    FUN_0047627a(&puStack_a4);
    puStack_a8 = local_38;
    FUN_00476850();
    local_90 = 0x3fd999999999999a;
    local_18 = (undefined1 *)&local_98;
    local_9c = (undefined1 *)0x4dc2b7;
    FUN_004d076d();
    local_a0 = (undefined1 *)0x4dc2bd;
    local_9c = extraout_EDX;
    FUN_0047627a();
    local_98 = (undefined1 *)0x4dc2c5;
    FUN_00476966();
    local_90 = CONCAT44(local_38,param_1);
    local_94 = (undefined1 *)0x4dc2d1;
    FUN_0047ce07();
    local_90 = CONCAT44(&DAT_0095d798,local_58);
    local_94 = (undefined1 *)0x4dc2e0;
    FUN_0047d2ae();
    local_90 = CONCAT44(0x4dc2e8,(float)local_90);
    FUN_004768de();
    local_90 = CONCAT44(1,local_10);
    local_94 = (undefined1 *)(param_2 - param_4 * 0.2);
    local_98 = (undefined1 *)0x4dc311;
    fVar2 = (float10)FUN_00476367();
    local_a0 = (undefined1 *)&local_98;
    local_9c = (undefined1 *)(float)((float10)param_6 * (float10)0.5 * fVar2);
    puStack_a4 = (undefined1 *)0x4dc339;
    FUN_0047620f();
    local_9c = local_10;
    local_a0 = (undefined1 *)local_14;
    puStack_a8 = (undefined1 *)0x4dc35b;
    FUN_004d076d();
    puStack_a8 = local_78;
    FUN_00476850();
    local_90 = 0x3fe0000000000000;
    local_98 = (undefined1 *)0x4dc37d;
    FUN_004d076d();
    local_98 = (undefined1 *)0x4dc385;
    FUN_00476966();
    local_90 = 0x3fe6666666666666;
    local_98 = (undefined1 *)(param_6 * 0.07);
    local_a0 = (undefined1 *)0x4dc3b2;
    local_9c = (undefined1 *)&local_94;
    FUN_0047620f();
    local_98 = (undefined1 *)0x4dc3b7;
    FUN_00476966();
    local_90 = CONCAT44(local_78,param_1);
    local_94 = (undefined1 *)0x4dc3c3;
    FUN_0047ce07();
    local_90 = CONCAT44(&DAT_0095d798,local_58);
    local_94 = (undefined1 *)0x4dc3cd;
    FUN_0047d2ae();
    local_90 = CONCAT44(0x4dc3d5,(float)local_90);
    fVar2 = (float10)FUN_00476367();
    local_94 = (undefined1 *)((int)&local_90 + 4);
    local_90._0_4_ = (float)(fVar2 * (float10)0.5);
    local_98 = (undefined1 *)0x4dc3f3;
    local_90._4_4_ = (undefined *)extraout_ECX;
    FUN_0047620f();
    local_90 = CONCAT44(local_90._4_4_,0x4dc3fa);
    FUN_0047cda7();
    local_90._4_4_ = &DAT_0095d798;
    local_90._0_4_ = param_6;
    local_94 = (undefined1 *)0x4dc40a;
    uVar1 = FUN_0047badf();
    local_90 = CONCAT44(local_90._4_4_,uVar1);
    local_94 = local_58;
    local_98 = (undefined1 *)0x4dc416;
    FUN_0047d2d0();
    local_90 = CONCAT44(0x4dc41e,(float)local_90);
    FUN_004768de();
    local_90 = CONCAT44(0x4dc426,(float)local_90);
    FUN_004f7994();
  }
  return;
}

