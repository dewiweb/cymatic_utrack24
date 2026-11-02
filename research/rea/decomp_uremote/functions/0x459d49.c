// rea decompile_all
// name: FUN_00459d49
// address: 0x459d49
// body: available
// range: 0x459d49-0x45a178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00459d49(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float *pfStack_50;
  float *pfStack_4c;
  undefined1 *local_38;
  float local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  float local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x459d55;
  pfStack_4c = (float *)local_14;
  pfStack_50 = (float *)0x459d65;
  FUN_0046537e();
  pfStack_4c = &local_18;
  local_8 = 0;
  pfStack_50 = (float *)0x459d78;
  FUN_0046537e();
  pfStack_4c = &local_18;
  local_8._0_1_ = 1;
  pfStack_50 = (float *)0x459d8d;
  fVar3 = (float10)FUN_0049fa7b();
  *(float *)(in_ECX + 0x118) = (float)fVar3;
  local_8._0_1_ = 0;
  pfStack_4c = (float *)0x459d9e;
  FUN_004652d6();
  pfStack_4c = &local_18;
  pfStack_50 = (float *)0x459dac;
  FUN_0046537e();
  pfStack_4c = &local_18;
  local_8._0_1_ = 2;
  pfStack_50 = (float *)0x459dbb;
  fVar3 = (float10)FUN_0049fa7b();
  *(float *)(in_ECX + 0x11c) = (float)fVar3;
  local_8._0_1_ = 0;
  pfStack_4c = (float *)0x459dcc;
  FUN_004652d6();
  local_18 = *(float *)(in_ECX + 0x1c);
  puVar1 = (undefined4 *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 0x120) = (float)(int)local_18 * 0.6;
  pfStack_50 = (float *)0x459df2;
  pfStack_4c = (float *)puVar1;
  FUN_00465317();
  iVar2 = *(int *)(in_ECX + 0xcc);
  if (iVar2 < 1) {
LAB_0045a04b:
    *(undefined4 *)(in_ECX + 0x124) = 0;
    goto LAB_0045a051;
  }
  if (iVar2 < 3) {
    pfStack_50 = (float *)0x459f70;
    pfStack_4c = (float *)puVar1;
    FUN_00465317();
    pfStack_4c = (float *)(in_ECX + 0xa0);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_2c);
      local_8._0_1_ = 3;
      pfStack_50 = (float *)0x459fa7;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459fb2;
      FUN_004652d6();
    }
    pfStack_4c = (float *)(in_ECX + 0xa4);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_30);
      local_8._0_1_ = 4;
      pfStack_50 = (float *)0x459fe9;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459ff4;
      FUN_004652d6();
    }
    pfStack_4c = (float *)(in_ECX + 0xa8);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(&local_34);
      local_8._0_1_ = 5;
      pfStack_50 = (float *)0x45a02b;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      goto LAB_0045a031;
    }
LAB_0045a036:
    iVar2 = (*(char *)(in_ECX + 0x115) != '\0') + 2;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 4) goto LAB_0045a04b;
      pfStack_4c = (float *)(in_ECX + 0xbc);
      pfStack_50 = &local_18;
      FUN_00465bec();
      pfStack_50 = (float *)0x459e34;
      pfStack_4c = (float *)puVar1;
      FUN_00465317();
LAB_0045a031:
      pfStack_4c = (float *)0x45a036;
      FUN_004652d6();
      goto LAB_0045a036;
    }
    pfStack_50 = (float *)0x459e48;
    pfStack_4c = (float *)puVar1;
    FUN_00465317();
    pfStack_4c = (float *)(in_ECX + 0xb4);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_1c);
      local_8._0_1_ = 6;
      pfStack_50 = (float *)0x459e7f;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459e8a;
      FUN_004652d6();
    }
    pfStack_4c = (float *)(in_ECX + 0xb8);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_20);
      local_8._0_1_ = 7;
      pfStack_50 = (float *)0x459ec1;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459ecc;
      FUN_004652d6();
    }
    pfStack_4c = (float *)(in_ECX + 0xa8);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_24);
      local_8._0_1_ = 8;
      pfStack_50 = (float *)0x459f03;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459f0e;
      FUN_004652d6();
    }
    pfStack_4c = (float *)(in_ECX + 0xbc);
    if ((*(char *)*pfStack_4c != '\0') &&
       (pfStack_50 = (float *)*puVar1, *(char *)pfStack_50 != '\0')) {
      local_38 = (undefined1 *)&pfStack_50;
      FUN_004652e4(local_14);
      pfStack_4c = (float *)FUN_00465c30(local_28);
      local_8._0_1_ = 9;
      pfStack_50 = (float *)0x459f45;
      FUN_00465ac3();
      local_8._0_1_ = 0;
      pfStack_4c = (float *)0x459f50;
      FUN_004652d6();
    }
    iVar2 = (uint)(*(char *)(in_ECX + 0x115) != '\0') * 2 + 1;
  }
  *(int *)(in_ECX + 0x124) = iVar2;
LAB_0045a051:
  pfStack_50 = (float *)0x45a05d;
  pfStack_4c = (float *)puVar1;
  iVar2 = FUN_0049fa60();
  local_34 = (float)iVar2 + *(float *)(in_ECX + 0x120) + *(float *)(in_ECX + 0x118) +
             *(float *)(in_ECX + 0x11c);
  if (local_34 <= (float)*(int *)(in_ECX + 0x18)) {
    *(undefined1 *)(in_ECX + 0x114) = *(undefined1 *)(in_ECX + 0x115);
    if ((*(byte *)(in_ECX + 400) & 2) != 0) {
      pfStack_4c = (float *)0x0;
      pfStack_50 = (float *)0x45a0f1;
      (**(code **)(*(int *)(in_ECX + 0x128) + 0x28))();
    }
  }
  else {
    if (*(int *)(in_ECX + 0xcc) == 4) {
      pfStack_50 = (float *)0x45a09c;
      pfStack_4c = (float *)puVar1;
      FUN_00465317();
    }
    else {
      pfStack_4c = &local_18;
      pfStack_50 = (float *)0x45a0ac;
      FUN_0046537e();
      pfStack_50 = (float *)0x45a0b5;
      pfStack_4c = (float *)puVar1;
      FUN_00465317();
      pfStack_4c = (float *)0x45a0bd;
      FUN_004652d6();
    }
    *(undefined1 *)(in_ECX + 0x114) = 1;
    *(undefined4 *)(in_ECX + 0x124) = 3;
  }
  pfStack_4c = (float *)0x45a0f6;
  iVar2 = FUN_0044bfc5();
  local_18 = (float)*(int *)(iVar2 + 4);
  local_34 = (float)(((*(int *)(in_ECX + 0x124) == 3) + 1) * 3);
  pfStack_4c = (float *)0x45a11a;
  local_34 = (float)FUN_005b3fb0();
  pfStack_4c = (float *)0x45a131;
  pfStack_4c = (float *)FUN_005b3fb0();
  pfStack_50 = (float *)(*(int *)(in_ECX + 0x1c) + 4 + *(int *)(in_ECX + 0x14));
  FUN_004c09cc((*(int *)(in_ECX + 0x18) - (int)local_34) + *(int *)(in_ECX + 0x10));
  pfStack_4c = (float *)0x0;
  pfStack_50 = (float *)0x45a156;
  FUN_004c052f();
  if ((*(byte *)(in_ECX + 400) & 2) != 0) {
    pfStack_50 = (float *)0x45a165;
    pfStack_4c = (float *)(in_ECX + 0x128);
    FUN_004c1613();
  }
  pfStack_50 = (float *)0x45a16b;
  FUN_004c1613();
  pfStack_4c = (float *)0x45a173;
  FUN_004652d6();
  return;
}

