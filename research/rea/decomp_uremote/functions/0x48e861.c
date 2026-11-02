// rea decompile_all
// name: FUN_0048e861
// address: 0x48e861
// body: available
// range: 0x48e861-0x48eb66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_0048e861(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 local_2bc [16];
  undefined1 local_2ac [28];
  uint local_290;
  int local_288 [2];
  int local_280;
  int local_27c;
  int *local_26c;
  undefined4 local_268;
  undefined4 *local_264;
  int local_260;
  undefined4 local_25c;
  char local_255;
  int local_254;
  undefined1 local_250;
  char local_249;
  void *local_248;
  uint local_240;
  undefined4 local_23c [33];
  undefined1 *local_1b8;
  undefined4 *local_1b4;
  char *local_1ac;
  int *local_1a0;
  undefined4 local_18c;
  int local_15c;
  int local_158;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_23c;
  local_23c[0] = 0x74;
  local_240 = 0;
  local_268 = 0;
  local_25c = param_1;
  local_26c = param_2;
  FUN_00464c3f(local_2ac);
  local_240 = 1;
  FUN_00467023(param_2);
  FUN_004c6ae2();
  local_268 = 1;
  if (0x10 < local_290) {
    FUN_0048e73f();
    local_1b8 = (undefined1 *)local_23c;
    FUN_004848cb();
    local_1a0 = (int *)(*(code *)*local_1b4)(&local_1b8,0,0x1c);
    local_249 = '\0';
    local_1ac = &local_249;
    local_1a0[2] = (int)FUN_0041f3a2;
    local_1a0[3] = (int)FUN_00460cf2;
    local_1a0[4] = (int)&LAB_0048e76f;
    local_1a0[5] = (int)FUN_00488983;
    local_1a0[6] = (int)FUN_0041f3a2;
    iVar3 = FUN_00464e11();
    *local_1a0 = iVar3;
    local_1a0[1] = local_290;
    FUN_00484ab9();
    if (local_249 == '\0') {
      FUN_00488b4d();
      if (local_249 == '\0') {
        local_260 = local_15c;
        local_18c = 2;
        local_264 = (undefined4 *)(*(code *)local_1b4[2])(&local_1b8,1,local_15c * 3,1);
        cVar2 = FUN_004846e8();
        if ((cVar2 != '\0') && (local_249 == '\0')) {
          FUN_0047e303(&local_254,1,local_260,local_158,0);
          FUN_0049f5e8();
          FUN_004c4d7a();
          FUN_0046163a();
          local_240._0_1_ = 2;
          FUN_00465075(&local_254);
          puVar7 = local_2bc;
          piVar8 = &local_254;
          local_240._0_1_ = 3;
          uVar4 = FUN_0047e74f(piVar8,puVar7);
          FUN_00460bc4(uVar4,piVar8,puVar7);
          thunk_FUN_004652d6();
          local_240._0_1_ = 1;
          FUN_004615f7();
          local_255 = FUN_0047e3d7();
          FUN_0047e7d7(local_288,1);
          local_240 = CONCAT31(local_240._1_3_,4);
          local_254 = 0;
          if (0 < local_158) {
            do {
              FUN_0048484c(local_264);
              if (local_249 != '\0') goto LAB_0048eaf8;
              puVar7 = (undefined1 *)*local_264;
              puVar5 = (undefined1 *)(local_280 * local_254 + local_288[0]);
              iVar3 = local_260;
              if (local_255 == '\0') {
                while (iVar3 = iVar3 + -1, -1 < iVar3) {
                  local_250 = puVar7[1];
                  uVar1 = puVar7[2];
                  puVar5[2] = *puVar7;
                  puVar5[1] = local_250;
                  *puVar5 = uVar1;
                  puVar5 = puVar5 + local_27c;
                  puVar7 = puVar7 + 3;
                }
              }
              else {
                while (-1 < iVar3 + -1) {
                  local_250 = puVar7[1];
                  uVar1 = *puVar7;
                  *puVar5 = puVar7[2];
                  puVar5[1] = local_250;
                  puVar5[2] = uVar1;
                  puVar5[3] = 0xff;
                  puVar5 = puVar5 + local_27c;
                  puVar7 = puVar7 + 3;
                  iVar3 = iVar3 + -1;
                }
              }
              local_254 = local_254 + 1;
            } while (local_254 < local_158);
          }
          if (local_249 == '\0') {
            FUN_00484ba9();
          }
LAB_0048eaf8:
          iVar3 = *local_26c;
          iVar6 = FUN_00464e11();
          (**(code **)(iVar3 + 0x58))(*local_1a0 - iVar6,*local_1a0 - iVar6 >> 0x1f);
          local_240 = CONCAT31(local_240._1_3_,1);
          FUN_0047e819();
        }
      }
    }
    thunk_FUN_00482a7e();
  }
  local_240 = local_240 & 0xffffff00;
  FUN_00464cd9(local_2ac);
  ExceptionList = local_248;
  __security_check_cookie(local_8 ^ (uint)local_23c);
  return;
}

