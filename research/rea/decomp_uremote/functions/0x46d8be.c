// rea decompile_all
// name: FUN_0046d8be
// address: 0x46d8be
// body: available
// range: 0x46d8be-0x46da5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0046d8be(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x46d8ca;
  FUN_004652e4();
  local_8 = 0;
  FUN_004fa582();
  FUN_0040954d();
  FUN_0040954d();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = thunk_FUN_00460947();
  if (-1 < iVar1) {
    do {
      iVar1 = iVar1 + 1;
      local_14 = FUN_00465d28(iVar1);
      iVar2 = FUN_00465d28(iVar1);
      if (iVar1 < iVar2) {
        if (local_14 < 0) {
          FUN_004664c4();
          local_8._0_1_ = 5;
          local_18 = FUN_0046dbd8();
          local_8._0_1_ = 6;
          FUN_0046642b(param_1,local_20);
          local_8._0_1_ = 7;
          uVar3 = FUN_0046dbd8();
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_0046db4f(uVar3);
          FUN_004652d6();
          FUN_004652d6();
          FUN_004652d6();
        }
        else {
          if ((local_14 < 1) || (local_14 <= iVar2)) goto LAB_0046da23;
          FUN_0046642b(param_1,local_38);
          local_8._0_1_ = 9;
          local_18 = FUN_0046dbd8();
          local_8._0_1_ = 10;
          FUN_0046642b(param_1,local_30);
          local_8._0_1_ = 0xb;
          uVar3 = FUN_0046dbd8();
          local_8 = CONCAT31(local_8._1_3_,0xc);
          FUN_0046db4f(uVar3);
          FUN_004652d6();
          FUN_004652d6();
          FUN_004652d6();
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_004652d6();
      }
LAB_0046da23:
      iVar1 = local_14;
    } while (-1 < local_14);
    FUN_004c751a();
    FUN_004665aa(param_1);
    FUN_00465317();
    FUN_004652d6();
  }
  return param_1;
}

