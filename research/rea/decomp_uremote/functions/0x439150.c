// rea decompile_all
// name: FUN_00439150
// address: 0x439150
// body: available
// range: 0x439150-0x439369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00439150(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_EDX;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  uint local_3c;
  undefined1 local_34 [4];
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [12];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  iVar5 = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 1;
  if (0 < *(int *)(in_EDX + 0x10)) {
    do {
      FUN_00439506();
      local_8 = 1;
      FUN_0049f744();
      cVar2 = FUN_00465948();
      if ((cVar2 != '\0') && (uVar3 = FUN_0049f894(), local_3c == (uVar3 & 3))) {
        fVar6 = (float10)FUN_0049fa3d();
        if (((float10)local_30 < fVar6 == ((float10)local_30 == fVar6)) ||
           (fVar6 = (float10)FUN_0049fa3d(), (float10)local_2c < fVar6)) {
          bVar1 = false;
          local_1c = FUN_005af82d(0x164);
          local_8._0_1_ = 3;
          if (local_1c != 0) {
            FUN_00438691(local_1c,local_30,local_2c,local_24,local_20);
            bVar1 = false;
          }
        }
        else {
          bVar1 = true;
          local_1c = FUN_005af82d(0x168);
          local_8._0_1_ = 2;
          if (local_1c != 0) {
            uVar7 = CONCAT44(local_24,local_28);
            fVar6 = (float10)FUN_0049fa3d(local_28,local_24,local_20);
            FUN_00438e14(local_1c,(float)fVar6,uVar7,local_20);
            bVar1 = true;
          }
        }
        local_8._0_1_ = 1;
        FUN_004a4d78();
        FUN_0046537e(local_14);
        local_8._0_1_ = 4;
        uVar4 = thunk_FUN_00465ac3(local_34);
        thunk_FUN_00465aae(uVar4);
        if (bVar1) {
          uVar4 = 2;
          fVar6 = (float10)FUN_0049fa3d(2);
          uVar4 = FUN_004658f7((double)fVar6,uVar4);
          local_8._0_1_ = 5;
          thunk_FUN_00465aae();
          thunk_FUN_00465ac3(uVar4);
          local_8._0_1_ = 4;
          FUN_004652d6();
        }
        uVar3 = FUN_0049f894();
        uVar3 = uVar3 & 3;
        if (uVar3 != 0) {
          if (((uVar3 == 3) || (uVar3 == 1)) || (uVar3 == 2)) {
            thunk_FUN_00465aae(local_14);
          }
          else {
            uVar4 = FUN_00465858(uVar3);
            local_8._0_1_ = 6;
            thunk_FUN_00465aae();
            thunk_FUN_00465ac3(uVar4);
            local_8._0_1_ = 4;
            FUN_004652d6();
          }
        }
        FUN_0046d22e(local_14);
        FUN_004652d6();
        FUN_004652d6();
        FUN_004652d6();
        return param_1;
      }
      local_8 = local_8 & 0xffffff00;
      FUN_004652d6();
      FUN_004652d6();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_EDX + 0x10));
  }
  return param_1;
}

