// rea decompile_all
// name: FUN_0049fef3
// address: 0x49fef3
// body: available
// range: 0x49fef3-0x4a0057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049fef3(undefined4 param_1,float param_2,undefined4 param_3,float param_4,char param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int unaff_ESI;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  void *local_40;
  undefined4 local_3c;
  int local_38;
  double local_34;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  if (*(char *)*in_ECX != '\0') {
    local_40 = (void *)0x0;
    local_3c = 0;
    local_38 = 0;
    local_8 = 1;
    FUN_0049facf(in_ECX,&local_40);
    local_18 = local_38;
    FUN_004a6f3f();
    local_24 = *in_ECX;
    local_14 = 0;
    if (0 < local_18) {
      local_34 = (double)(param_4 + 1.0);
      do {
        pfVar4 = (float *)(local_14 * 4);
        local_1c = pfVar4[1];
        if ((float)local_34 < local_1c) {
          if (((param_5 != '\0') && (3 < local_18)) && (2 < *(int *)(unaff_ESI + 8))) {
            FUN_004a0058(param_1,param_2 + param_4,0,*(int *)(unaff_ESI + 8));
          }
          break;
        }
        local_20 = *pfVar4;
        uVar1 = FUN_0046095c();
        local_28 = CONCAT31(local_28._1_3_,uVar1);
        fVar7 = local_1c - local_20;
        uVar3 = *(undefined4 *)((int)pfVar4 + (int)local_40);
        fVar5 = local_20 + param_2;
        uVar6 = param_3;
        uVar8 = local_28;
        local_20 = fVar5;
        local_1c = fVar7;
        uVar2 = FUN_0044eba8(uVar3,fVar5,param_3,fVar7,local_28);
        uVar3 = FUN_0049fd4b(uVar2,uVar3,fVar5,uVar6,fVar7,uVar8);
        local_8._0_1_ = 2;
        FUN_004a5292(uVar3);
        local_8 = CONCAT31(local_8._1_3_,1);
        thunk_FUN_004c4d7a();
        local_14 = local_14 + 1;
      } while (local_14 < local_18);
    }
    local_8 = local_8 & 0xffffff00;
    _free((void *)0x0);
    local_8 = 0xffffffff;
    _free(local_40);
  }
  return;
}

