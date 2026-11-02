// rea decompile_all
// name: FUN_004cc661
// address: 0x4cc661
// body: available
// range: 0x4cc661-0x4cc9b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cc661(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  undefined1 local_24 [28];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4cc66d;
  cVar1 = FUN_00474f26();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return;
      }
      FUN_004616ae();
      local_8 = 0xf;
      FUN_004723a7(local_24,0);
      local_8 = 0xffffffff;
      FUN_004615f7();
      if (param_2 != (int *)0x0) {
        uVar2 = (**(code **)(*param_2 + 8))(local_24,param_1 + 8);
        local_8 = 0x10;
        FUN_004723a7(uVar2,0);
        local_8 = 0xffffffff;
        FUN_004615f7();
      }
      fVar5 = (float10)FUN_00476367();
      if (fVar5 < (float10)1.0) {
        fVar5 = (float10)FUN_00476367();
        uVar2 = FUN_00461644((double)(float)fVar5);
        local_8 = 0x11;
        FUN_004723a7(uVar2,0);
        FUN_004615f7();
        return;
      }
      FUN_004723c1();
      return;
    }
    FUN_004616ae();
    local_8 = 3;
    FUN_004723a7(local_24,0);
    local_8 = 0xffffffff;
    FUN_004615f7();
    FUN_004e3af1();
    local_8 = 4;
    FUN_00461693();
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_004723a7(local_24,0);
    FUN_004615f7();
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_004e3af1();
    local_8 = 6;
    FUN_00461693();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004723a7(local_24,0);
    FUN_004615f7();
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_004e3af1();
    local_8 = 8;
    FUN_00461693();
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004723a7(local_24,0);
    FUN_004615f7();
    FUN_004652d6();
    uVar2 = FUN_0046163a();
    local_8 = 10;
    FUN_004723a7(uVar2,0);
    FUN_004615f7();
    FUN_004652cd();
    local_8 = 0xb;
    iVar4 = 0;
    iVar3 = FUN_00476a1b();
    if (0 < iVar3) {
      do {
        FUN_00476a31();
        uVar2 = FUN_004761f9();
        FUN_00466987();
        local_8._0_1_ = 0xc;
        fVar5 = (float10)FUN_00476a1f(uVar2);
        dVar6 = (double)fVar5;
        uVar2 = thunk_FUN_00465b22(&param_2);
        uVar2 = FUN_00465cb8(uVar2,dVar6);
        thunk_FUN_00465b22(uVar2);
        thunk_FUN_00465ac3();
        local_8 = CONCAT31(local_8._1_3_,0xb);
        FUN_004652d6();
        iVar4 = iVar4 + 1;
        iVar3 = FUN_00476a1b();
      } while (iVar4 < iVar3);
    }
    FUN_0046670a();
    FUN_00461693();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_004723a7(local_24,0);
    FUN_004615f7();
    FUN_004652d6();
  }
  else {
    FUN_004616ae();
    local_8 = 0;
    FUN_004723a7(local_24,0);
    local_8 = 0xffffffff;
    FUN_004615f7();
    FUN_004761f9();
    FUN_00466987();
    local_8 = 1;
    FUN_00461693();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004723a7(local_24,0);
    FUN_004615f7();
  }
  FUN_004652d6();
  return;
}

