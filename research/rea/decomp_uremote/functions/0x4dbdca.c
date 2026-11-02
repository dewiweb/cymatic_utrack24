// rea decompile_all
// name: FUN_004dbdca
// address: 0x4dbdca
// body: available
// range: 0x4dbdca-0x4dc10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dbdca(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
                 float param_5)

{
  undefined4 uVar1;
  undefined1 *extraout_ECX;
  undefined1 *extraout_EDX;
  undefined4 unaff_EBX;
  float10 fVar2;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 in_stack_ffffff78;
  ulonglong local_88;
  undefined1 *puStack_84;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  double local_18;
  undefined1 *local_10;
  undefined1 *local_c;
  
  if (param_5 < (float)param_3) {
    local_88 = CONCAT44(0x4dbded,in_stack_ffffff78);
    FUN_0047888f();
    local_88 = CONCAT44(param_3,param_3);
    local_8c = param_2;
    local_90 = param_1;
    FUN_00479464();
    local_c = (undefined1 *)((float)param_2 + (float)param_3);
    local_88 = ZEXT48(local_c);
    local_8c = (undefined1 *)0x0;
    local_10 = (undefined1 *)&local_94;
    puStack_9c = (undefined1 *)&local_94;
    puStack_a0 = (undefined1 *)0x4dbe4c;
    FUN_00476237();
    puStack_9c = (undefined1 *)0x4dbe59;
    FUN_0047627a();
    local_94 = param_2;
    local_10 = (undefined1 *)&puStack_a0;
    FUN_00476237(&puStack_a0,0x3e99999a);
    FUN_0047627a(&puStack_9c);
    puStack_a0 = local_78;
    FUN_00476850();
    local_88 = 0x3fd999999999999a;
    local_10 = (undefined1 *)&local_90;
    local_94 = (undefined1 *)0x4dbeb8;
    FUN_004d076d();
    local_94 = extraout_EDX;
    FUN_0047627a();
    local_90 = (undefined1 *)0x4dbec6;
    FUN_00476966();
    local_88 = CONCAT44(local_78,unaff_EBX);
    local_8c = (undefined1 *)0x4dbecf;
    FUN_0047ce07();
    local_88 = CONCAT44(&DAT_0095d798,local_58);
    local_8c = (undefined1 *)0x4dbedf;
    FUN_0047d2ae();
    local_88 = CONCAT44(0x4dbee7,in_stack_ffffff78);
    FUN_004768de();
    local_10 = (undefined1 *)&local_90;
    local_c = (undefined1 *)((float)param_3 * 0.3 + (float)param_2);
    local_88 = ZEXT48(local_c);
    local_8c = (undefined1 *)0x0;
    local_94 = (undefined1 *)0x4dbf17;
    FUN_004d076d();
    local_10 = (undefined1 *)&puStack_9c;
    local_94 = (undefined1 *)((float)param_3 * 0.06 + (float)param_2);
    puStack_a0 = (undefined1 *)0x4dbf40;
    local_c = local_94;
    FUN_004d076d();
    puStack_a0 = local_78;
    uVar1 = FUN_00476850();
    local_88 = CONCAT44(uVar1,unaff_EBX);
    local_8c = (undefined1 *)0x4dbf50;
    FUN_0047ce07();
    local_88 = CONCAT44(0x4dbf58,in_stack_ffffff78);
    FUN_004768de();
    local_88 = CONCAT44((float)param_3 * 0.4,(float)param_3 * 0.6);
    local_8c = (undefined1 *)((float)param_3 * 0.05 + (float)param_2);
    local_90 = (undefined1 *)((float)param_3 * 0.2 + (float)param_1);
    local_94 = (undefined1 *)0x4dbfae;
    local_c = local_90;
    FUN_0047d49c();
    local_18 = (double)((float)param_3 * 0.5);
    local_c = (undefined1 *)((float)param_2 + (float)param_3 * 0.5);
    local_88 = CONCAT44(1,local_c);
    local_8c = param_1;
    local_90 = (undefined1 *)0x4dbfdc;
    fVar2 = (float10)FUN_00476367();
    local_94 = (undefined1 *)(float)((float10)param_5 * (float10)0.5 * fVar2);
    local_10 = (undefined1 *)&local_90;
    puStack_9c = (undefined1 *)0x4dc004;
    FUN_0047620f();
    local_10 = (undefined1 *)&puStack_9c;
    local_94 = local_c;
    puStack_a0 = (undefined1 *)0x4dc02f;
    FUN_004d076d();
    puStack_a0 = local_38;
    FUN_00476850();
    local_10 = (undefined1 *)&local_8c;
    local_88 = 0x3fe6666666666666;
    local_90 = (undefined1 *)0x4dc051;
    FUN_004d076d();
    local_90 = (undefined1 *)0x4dc059;
    FUN_00476966();
    local_88 = 0x3fe999999999999a;
    local_90 = (undefined1 *)(param_5 * 0.1);
    local_94 = (undefined1 *)&local_8c;
    local_10 = (undefined1 *)&local_8c;
    FUN_0047620f();
    local_90 = (undefined1 *)0x4dc08b;
    FUN_00476966();
    local_88 = CONCAT44(local_38,unaff_EBX);
    local_8c = (undefined1 *)0x4dc094;
    FUN_0047ce07();
    local_88 = CONCAT44(&DAT_0095d798,local_58);
    local_8c = (undefined1 *)0x4dc0a4;
    FUN_0047d2ae();
    local_88 = CONCAT44(0x4dc0ac,in_stack_ffffff78);
    FUN_00476367();
    local_10 = (undefined1 *)&puStack_84;
    local_8c = (undefined1 *)&puStack_84;
    local_90 = (undefined1 *)0x4dc0ca;
    puStack_84 = extraout_ECX;
    FUN_0047620f();
    local_88 = CONCAT44(puStack_84,0x4dc0d1);
    FUN_0047cda7();
    local_88 = CONCAT44(param_5,param_3);
    local_8c = param_3;
    local_90 = param_2;
    local_94 = param_1;
    puStack_9c = (undefined1 *)0x4dc0fc;
    FUN_0047d4c6();
    local_88 = CONCAT44(0x4dc104,in_stack_ffffff78);
    FUN_004768de();
    local_88 = CONCAT44(0x4dc10c,in_stack_ffffff78);
    FUN_004f7994();
  }
  return;
}

