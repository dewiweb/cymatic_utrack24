// rea decompile_all
// name: FUN_0045ac57
// address: 0x45ac57
// body: available
// range: 0x45ac57-0x45aec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045ac57(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int iVar5;
  int unaff_ESI;
  float *unaff_EDI;
  float10 fVar6;
  undefined4 uStack_50;
  float fStack_4c;
  undefined1 **appuStack_48 [6];
  undefined1 local_30 [8];
  int local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  float local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x45ac63;
  iVar5 = 0;
  local_14 = 0.0;
  local_18 = 0.0;
  if (0 < *(int *)(unaff_ESI + 8)) {
    do {
      appuStack_48[0] = (undefined1 **)0x45ac80;
      FUN_0040954d();
      local_8 = 0;
      local_1c = appuStack_48;
      fStack_4c = 6.398559e-39;
      FUN_004d076d();
      local_1c = &fStack_4c;
      uStack_50 = (undefined1 *)0x45aca4;
      fStack_4c = (float)extraout_ECX;
      FUN_004c751a();
      uStack_50 = (undefined1 *)0x45acad;
      FUN_00467165();
      local_1c = &uStack_50;
      uStack_50 = extraout_ECX_00;
      FUN_004d076d();
      FUN_00467248(local_30);
      if (0 < local_28) {
        appuStack_48[0] = (undefined1 **)&local_20;
        fStack_4c = 6.398655e-39;
        FUN_0047cef9();
        local_8._0_1_ = 1;
        appuStack_48[0] = (undefined1 **)0x45ace9;
        appuStack_48[0] = (undefined1 **)FUN_00467165();
        fStack_4c = 6.398689e-39;
        FUN_0049fa7b();
        local_8._0_1_ = 0;
        appuStack_48[0] = (undefined1 **)0x45acff;
        FUN_004c4d7a();
        if (local_28 < 2) {
          fVar6 = (float10)0;
        }
        else {
          appuStack_48[0] = &local_24;
          fStack_4c = 6.398734e-39;
          FUN_0047cef9();
          local_8._0_1_ = 2;
          local_14 = (float)((uint)local_14 | 1);
          appuStack_48[0] = (undefined1 **)0x45ad25;
          appuStack_48[0] = (undefined1 **)FUN_00467165();
          fStack_4c = 6.398773e-39;
          fVar6 = (float10)FUN_0049fa7b();
        }
        local_1c = (undefined4 *)(float)fVar6;
        if (((uint)local_14 & 1) != 0) {
          local_14 = (float)((uint)local_14 & 0xfffffffe);
          appuStack_48[0] = (undefined1 **)0x45ad46;
          FUN_004c4d7a();
        }
        appuStack_48[0] = (undefined1 **)local_1c;
        fStack_4c = local_18;
        uStack_50 = (undefined1 *)0x45ad5a;
        fVar6 = (float10)FUN_0043bcfe();
        local_18 = (float)fVar6;
      }
      local_8 = 0xffffffff;
      appuStack_48[0] = (undefined1 **)0x45ad6b;
      FUN_004670ed();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_ESI + 8));
  }
  appuStack_48[0] = (undefined1 **)&local_1c;
  fStack_4c = 6.398894e-39;
  FUN_0046537e();
  appuStack_48[0] = &local_24;
  local_8 = 3;
  fStack_4c = 6.39892e-39;
  FUN_0047cef9();
  appuStack_48[0] = (undefined1 **)&local_1c;
  local_8 = CONCAT31(local_8._1_3_,4);
  fStack_4c = 6.398938e-39;
  fVar6 = (float10)FUN_0049fa7b();
  local_14 = (float)fVar6;
  appuStack_48[0] = (undefined1 **)0x45adae;
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  appuStack_48[0] = (undefined1 **)0x45adba;
  FUN_004652d6();
  iVar5 = 0;
  if (0 < *(int *)(unaff_ESI + 8)) {
    do {
      appuStack_48[0] = (undefined1 **)0x45adcd;
      FUN_0040954d();
      local_24 = (undefined1 *)appuStack_48;
      local_8 = 5;
      fStack_4c = 6.39903e-39;
      FUN_004d076d();
      local_24 = (undefined1 *)&fStack_4c;
      uStack_50 = (undefined1 *)0x45adf4;
      fStack_4c = (float)extraout_ECX_01;
      FUN_004c751a();
      uStack_50 = (undefined1 *)0x45adfd;
      FUN_00467165();
      local_24 = (undefined1 *)&uStack_50;
      uStack_50 = extraout_ECX_02;
      FUN_004d076d();
      FUN_00467248(local_30);
      if (0 < local_28) {
        appuStack_48[0] = (undefined1 **)&local_20;
        fStack_4c = 6.399126e-39;
        FUN_0047cef9();
        local_8._0_1_ = 6;
        appuStack_48[0] = (undefined1 **)0x45ae39;
        appuStack_48[0] = (undefined1 **)FUN_00467165();
        fStack_4c = 6.39916e-39;
        fVar6 = (float10)FUN_0049fa7b();
        local_24 = (undefined1 *)(float)fVar6;
        local_8 = CONCAT31(local_8._1_3_,5);
        appuStack_48[0] = (undefined1 **)0x45ae50;
        FUN_004c4d7a();
        appuStack_48[0] = (undefined1 **)0x0;
        local_1c = &fStack_4c;
        fStack_4c = 1.4013e-45;
        uStack_50 = (undefined1 *)0x45ae66;
        uStack_50 = (undefined1 *)FUN_005b3fb0();
        uVar1 = FUN_005b3fb0();
        uVar2 = FUN_005b3fb0(uVar1);
        uVar3 = FUN_005b3fb0(uVar2);
        uVar4 = FUN_00467165(uVar3);
        FUN_0047d02d(param_1,uVar4,uVar3,uVar2,uVar1);
        *unaff_EDI = *unaff_EDI + param_4;
      }
      local_8 = 0xffffffff;
      appuStack_48[0] = (undefined1 **)0x45aeb2;
      FUN_004670ed();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_ESI + 8));
  }
  return;
}

