// rea decompile_all
// name: FUN_004caf68
// address: 0x4caf68
// body: available
// range: 0x4caf68-0x4cb159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004caf68(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x4caf74;
  uVar1 = FUN_004cae84();
  *(undefined1 *)(param_2 + 0xc) = uVar1;
  _eh_vector_constructor_iterator_(local_6c,8,3,FUN_004e3907,FUN_004c924c);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_00472404(local_44);
  local_1c = FUN_004723d5();
  param_1 = 0;
  if (0 < local_1c) {
    do {
      FUN_004723e0(local_54,param_1);
      thunk_FUN_00472232();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004722b6();
      local_18 = FUN_004cb15a(local_34);
      iVar2 = 0;
      if (0 < local_18) {
        do {
          FUN_004cb1bc(local_34,local_24,iVar2);
          FUN_004c96de();
          FUN_004e2f64();
          FUN_004e2f64();
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_18);
      }
      uVar3 = 0;
      FUN_004bf508(local_14);
      local_8._0_1_ = 3;
      if (local_14[0] == DAT_0095da40) {
        iVar2 = FUN_005af82d(0x10);
        if (iVar2 == 0) {
LAB_004cb065:
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004e401b();
        }
      }
      else if (local_14[0] == DAT_0095db2c) {
        iVar2 = FUN_005af82d(8);
        if (iVar2 == 0) goto LAB_004cb065;
        uVar3 = FUN_004e40e9();
      }
      else if (local_14[0] == DAT_0095dac0) {
        iVar2 = FUN_005af82d(0x10);
        if (iVar2 == 0) goto LAB_004cb065;
        uVar3 = FUN_004e4160();
      }
      else {
        if (local_14[0] == DAT_0095dafc) {
          local_18 = FUN_005af82d(0x18);
          local_8 = CONCAT31(local_8._1_3_,4);
          if (local_18 == 0) {
LAB_004cb104:
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_004e4261(local_18,local_6c,local_64);
          }
        }
        else {
          if (local_14[0] != DAT_0095da08) goto LAB_004cb10c;
          local_18 = FUN_005af82d(0x20);
          local_8 = CONCAT31(local_8._1_3_,5);
          if (local_18 == 0) goto LAB_004cb104;
          uVar3 = FUN_004e4431(local_18,local_6c,local_64,local_5c);
        }
        local_8._0_1_ = 3;
      }
LAB_004cb10c:
      FUN_004e3faa(uVar3);
      thunk_FUN_004652d6();
      thunk_FUN_004722b6();
      param_1 = param_1 + 1;
    } while (param_1 < local_1c);
  }
  FUN_004722b6();
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_6c,8,3,FUN_004c924c);
  return;
}

