// rea decompile_all
// name: FUN_004d6be5
// address: 0x4d6be5
// body: available
// range: 0x4d6be5-0x4d703c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d6be5(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,float param_6,
                 float param_7,float param_8,int param_9,undefined4 param_10)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint3 uVar5;
  float10 fVar6;
  undefined8 uVar7;
  float fVar8;
  float fStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_34 [4];
  float fStack_30;
  float fStack_2c;
  undefined1 *puStack_28;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  
  uStack_4c = param_10;
  iStack_50 = 0x4d6bfa;
  iVar4 = (**(code **)(*in_ECX + 0x10))();
  fStack_2c = (float)(iVar4 + -2);
  fVar1 = (float)(int)fStack_2c;
  iStack_50 = param_10;
  puStack_54 = (undefined1 *)0x4d6c0e;
  cVar3 = FUN_004c32c9();
  uVar5 = (uint3)((uint)unaff_EBX >> 8);
  if (cVar3 == '\0') {
LAB_004d6c21:
    iVar4 = (uint)uVar5 << 8;
  }
  else {
    iStack_50 = 0x4d6c19;
    cVar3 = FUN_004c3153();
    if (cVar3 == '\0') goto LAB_004d6c21;
    iVar4 = CONCAT31(uVar5,1);
  }
  iStack_50 = param_10;
  puStack_54 = (undefined1 *)0x4d6c29;
  cVar3 = FUN_004c3305();
  if (cVar3 != '\0') {
    iStack_50 = 0x4d6c34;
    FUN_004c3153();
  }
  iStack_50 = 0;
  puStack_54 = (undefined1 *)param_10;
  puStack_58 = (undefined1 *)0x4d6c46;
  uVar7 = FUN_004c30fb();
  if ((char)uVar7 == '\0') {
LAB_004d6c59:
    puStack_54 = (undefined1 *)((ulonglong)uVar7 >> 0x20);
    puStack_58 = (undefined1 *)((uint)uVar7 & 0xffffff00);
  }
  else {
    iStack_50 = 0x4d6c51;
    uVar7 = FUN_004c3153();
    puStack_54 = (undefined1 *)((ulonglong)uVar7 >> 0x20);
    if ((char)uVar7 == '\0') goto LAB_004d6c59;
    puStack_58 = (undefined1 *)CONCAT31((int3)((ulonglong)uVar7 >> 8),1);
  }
  puStack_28 = (undefined1 *)&fStack_5c;
  iStack_50 = iVar4;
  FUN_004c1e29(&fStack_5c,0x1001300,0);
  FUN_004d3245();
  iStack_50 = 0x4d6c87;
  cVar3 = FUN_004c3153();
  if (cVar3 == '\0') {
    uVar2 = 0x3e99999a;
  }
  else {
    uVar2 = 0x3f4ccccd;
  }
  iStack_50 = uVar2;
  if (param_9 == 0) {
    fStack_30 = param_6;
    param_6 = (float)param_5 * 0.5 + (float)param_3;
LAB_004d6fdc:
    puStack_54 = auStack_34;
    puStack_58 = (undefined1 *)(fVar1 + fVar1);
    fStack_5c = param_6 - fVar1;
    puStack_28 = (undefined1 *)(fStack_30 - fVar1);
    fStack_2c = param_6;
    FUN_004dbdca(puStack_28);
    return;
  }
  if (param_9 == 1) {
    fStack_30 = (float)param_4 * 0.5 + (float)param_2;
    goto LAB_004d6fdc;
  }
  if (param_9 == 0xc) {
    puStack_54 = auStack_34;
    puStack_58 = (undefined1 *)(fVar1 + fVar1);
    fStack_5c = param_6 - fVar1;
    fStack_2c = ((float)param_4 * 0.5 + (float)param_2) - fVar1;
    FUN_004dbdca(fStack_2c);
  }
  else {
    if (param_9 == 0xb) {
      puStack_54 = auStack_34;
      puStack_58 = (undefined1 *)(fVar1 + fVar1);
      fStack_5c = ((float)param_5 * 0.5 + (float)param_3) - fVar1;
      fStack_2c = param_6 - fVar1;
      FUN_004dbdca(fStack_2c);
    }
    if (param_9 != 10) {
      if ((param_9 != 9) && (param_9 != 0xb)) {
        return;
      }
      iStack_50 = 2;
      fStack_5c = fVar1 + fVar1;
      puStack_58 = auStack_34;
      dStack_24 = (double)fStack_5c;
      fStack_2c = (float)param_5;
      fVar8 = fStack_2c * 0.5 + (float)param_3;
      dStack_1c = (double)fVar8;
      puStack_28 = (undefined1 *)(fVar8 - fStack_5c);
      puStack_54 = (undefined1 *)uVar2;
      fStack_30 = fStack_5c;
      fVar6 = (float10)FUN_0043bcfe(0,puStack_28);
      dStack_14 = (double)param_7;
      puStack_28 = (undefined1 *)(fStack_2c * 0.4);
      fVar6 = (float10)FUN_0043d2e1(fVar1,puStack_28,(float)fVar6);
      puStack_28 = (undefined1 *)(float)((float10)dStack_14 - fVar6);
      FUN_004dc110(param_1,puStack_28);
      iStack_50 = 4;
      puStack_58 = auStack_34;
      fStack_5c = fStack_30;
      puStack_28 = (undefined1 *)((float)(param_3 + param_5) - (float)dStack_24);
      puStack_54 = (undefined1 *)uVar2;
      fVar6 = (float10)FUN_0043d2e1(puStack_28,(float)dStack_1c);
      fVar8 = (float)fVar6;
      puStack_28 = (undefined1 *)(param_8 - fVar1);
      fVar6 = (float10)(float)puStack_28;
      goto LAB_004d6e1f;
    }
  }
  iStack_50 = 1;
  fStack_5c = fVar1 + fVar1;
  puStack_58 = auStack_34;
  dStack_24 = (double)fStack_5c;
  fStack_2c = (float)param_4;
  fVar8 = fStack_2c * 0.5 + (float)param_2;
  dStack_1c = (double)fVar8;
  puStack_28 = (undefined1 *)(fVar8 - fStack_5c);
  puStack_54 = (undefined1 *)uVar2;
  fStack_30 = fStack_5c;
  fVar6 = (float10)FUN_0043bcfe(0,puStack_28,param_7 - fVar1);
  FUN_004dc110(param_1,(float)fVar6);
  iStack_50 = 3;
  puStack_58 = auStack_34;
  fStack_5c = fStack_30;
  dStack_14 = (double)param_8;
  puStack_28 = (undefined1 *)(fStack_2c * 0.4);
  puStack_54 = (undefined1 *)uVar2;
  fVar6 = (float10)FUN_0043d2e1(fVar1,puStack_28);
  fVar8 = (float)((float10)dStack_14 - fVar6);
  puStack_28 = (undefined1 *)((float)(param_2 + param_4) - (float)dStack_24);
  fVar6 = (float10)FUN_0043d2e1(puStack_28,(float)dStack_1c,fVar8);
LAB_004d6e1f:
  FUN_004dc110(param_1,(float)fVar6,fVar8);
  return;
}

