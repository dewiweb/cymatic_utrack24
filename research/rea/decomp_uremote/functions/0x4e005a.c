// rea decompile_all
// name: FUN_004e005a
// address: 0x4e005a
// body: available
// range: 0x4e005a-0x4e01f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004e005a(int *param_1,int param_2,undefined4 param_3,char *param_4,undefined1 param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined4 *puVar5;
  void *local_1c;
  int local_14;
  
  *param_1 = param_2;
  FUN_004652e4(param_3);
  FUN_004d076d();
  *(undefined1 *)(param_1 + 3) = param_4._0_1_;
  *(undefined1 *)((int)param_1 + 0xe) = param_5;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = (undefined1)param_7;
  param_1[4] = 0;
  param_1[5] = in_ECX;
  if (in_ECX != 0) {
    *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + 1;
  }
  iVar1 = FUN_004f8acd(param_8);
  param_1[6] = iVar1;
  param_1[7] = param_9;
  if ((param_9 != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    FUN_004652cd();
    FUN_004f0349(iVar1);
    param_7 = 0;
    if (0 < local_14) {
      do {
        FUN_004c7503(&param_5);
        if (*param_4 != '\0') {
          thunk_FUN_00465aae(&param_4);
        }
        iVar1 = thunk_FUN_0046087d();
        if ((iVar1 == 1) && (uVar2 = thunk_FUN_0046085c(0), uVar2 < 0x80)) {
          puVar4 = &param_5;
          thunk_FUN_00465aae(&param_4);
          uVar3 = thunk_FUN_00465ac3(puVar4);
          thunk_FUN_00465b22(uVar3);
        }
        else {
          thunk_FUN_00465ac3(&param_5);
        }
        FUN_004652d6();
        param_7 = param_7 + 1;
      } while (param_7 < local_14);
    }
    FUN_00466678(&param_4,&param_5);
    FUN_00465317(&param_4);
    FUN_004652d6();
    if (*param_4 != '\0') {
      puVar5 = &param_4;
      thunk_FUN_00465aae(param_1 + 1);
      thunk_FUN_00465ac3(puVar5);
    }
    _free(local_1c);
    FUN_004652d6();
  }
  return param_1;
}

