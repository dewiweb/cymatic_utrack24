// rea decompile_all
// name: FUN_00449631
// address: 0x449631
// body: available
// range: 0x449631-0x4499a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00449835) */
/* WARNING: Removing unreachable block (ram,0x0044983c) */

undefined4 * FUN_00449631(undefined4 *param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *extraout_EDX;
  uint uVar4;
  undefined1 local_9c [32];
  undefined1 local_7c [32];
  undefined1 local_5c [32];
  undefined1 local_3c [32];
  undefined1 local_1c [20];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x449640;
  FUN_004bfd7b();
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00474777();
  *puVar1 = FilePanel::ViewItemElement::vftable;
  *param_1 = FilePanel::ViewItemElement::vftable;
  param_1[0x21] = param_2;
  FUN_004652cd();
  FUN_0047888f();
  local_8._0_1_ = 3;
  param_1[0x26] = extraout_EDX;
  *(char *)((int)param_1 + 0x91) = (char)extraout_EDX;
  *(char *)(param_1 + 0x24) = (char)extraout_EDX;
  param_1[0x25] = extraout_EDX;
  if (in_ECX == extraout_EDX) {
    param_1[0x22] = 0xffffffff;
  }
  else {
    param_1[0x22] = *in_ECX;
    FUN_00448837(&param_2);
    FUN_00465317(param_1 + 0x23);
    FUN_004652d6();
    uVar2 = FUN_0044884b(&param_2);
    local_8._0_1_ = 4;
    FUN_004bffc5(uVar2);
    local_8._0_1_ = 3;
    FUN_004652d6();
    uVar4 = in_ECX[1] & 0xf000;
    param_1[0x25] = uVar4;
    if (uVar4 == 0) {
      FUN_0046537e(&param_2);
      local_8._0_1_ = 5;
      uVar2 = FUN_004cefd8(local_9c,&param_2);
      local_8._0_1_ = 6;
      FUN_00478907(uVar2);
      FUN_004f7994();
      local_8._0_1_ = 3;
      FUN_004652d6();
      FUN_00478a11(param_1 + 0x27,0x3dcccccd,0x3dcccccd,0x3f4ccccd,0x3f4ccccd);
      FUN_0046537e(local_1c);
      local_8._0_1_ = 7;
      FUN_004bffc5(local_1c);
      local_8._0_1_ = 3;
      FUN_004652d6();
    }
    else {
      if (uVar4 == 0x1000) {
        FUN_0046537e(&param_2);
        local_8._0_1_ = 9;
        uVar2 = FUN_004cefd8(local_5c,&param_2);
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_00478907(uVar2);
      }
      else if (uVar4 == 0x2000) {
        FUN_0046537e(&param_2);
        local_8._0_1_ = 0xb;
        uVar2 = FUN_004cefd8(local_7c,&param_2);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FUN_00478907(uVar2);
      }
      else {
        if (uVar4 != 0x3000) {
          if (uVar4 != 0x4000) {
            if (uVar4 == 0x5000) {
              iVar3 = FUN_0044bfc5();
              FUN_00478907(iVar3 + 0xdc);
              goto LAB_00449983;
            }
            if (uVar4 != 0x7000) goto LAB_00449983;
          }
          FUN_00478990();
          goto LAB_00449983;
        }
        FUN_0046537e(&param_2);
        local_8._0_1_ = 0xd;
        uVar2 = FUN_004cefd8(local_3c,&param_2);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_00478907(uVar2);
      }
      FUN_004f7994();
      local_8._0_1_ = 3;
      FUN_004652d6();
      FUN_00478a11(param_1 + 0x27,0x3dcccccd,0x3dcccccd,0x3f4ccccd,0x3f4ccccd);
    }
  }
LAB_00449983:
  iVar3 = FUN_0044bfc5();
  param_2 = (float)*(int *)(iVar3 + 8);
  uVar2 = FUN_005b3fb0();
  FUN_004c0be5(uVar2);
  return param_1;
}

