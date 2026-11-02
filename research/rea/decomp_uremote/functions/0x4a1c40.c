// rea decompile_all
// name: FUN_004a1c40
// address: 0x4a1c40
// body: available
// range: 0x4a1c40-0x4a1dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a1c40(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_ESI;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 *local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4a1c4c;
  puStack_44 = (undefined4 *)param_5;
  puStack_48 = &local_20;
  FUN_0046642b(param_1);
  local_8 = 0;
  local_18 = local_20;
  puStack_44 = (undefined4 *)0x4a1c71;
  FUN_004652cd();
  local_8._0_1_ = 1;
  iVar5 = 0;
LAB_004a1d5e:
  puStack_44 = (undefined4 *)0x4a1d66;
  local_1c = FUN_0044eba8();
  if (local_1c == 0) {
    if (*param_1 != '\0') {
      puStack_44 = (undefined4 *)0x28;
      puStack_48 = (undefined4 *)0x4a1d80;
      local_28 = FUN_005af82d();
      local_8._0_1_ = 3;
      if (local_28 == 0) {
        uVar4 = 0;
      }
      else {
        local_2c = (undefined1 *)&puStack_48;
        puStack_48 = puStack_44;
        puStack_44 = (undefined4 *)(uint)(iVar5 == 2);
        FUN_004d076d();
        uVar4 = FUN_004a171a(local_28,param_2);
      }
      local_8._0_1_ = 1;
      puStack_44 = (undefined4 *)0x4a1dc7;
      FUN_004a6f5e();
      iVar5 = unaff_ESI[2];
      unaff_ESI[2] = iVar5 + 1;
      *(undefined4 *)(*unaff_ESI + iVar5 * 4) = uVar4;
    }
    puStack_44 = (undefined4 *)0x4a1ddd;
    FUN_004652d6();
    puStack_44 = (undefined4 *)0x4a1de5;
    FUN_004652d6();
    return;
  }
  if ((local_1c == 0xd) || (local_1c == 10)) {
    local_14 = 0;
  }
  else {
    puStack_48 = (undefined4 *)0x4a1c8d;
    puStack_44 = (undefined4 *)local_1c;
    cVar1 = FUN_00464f6b();
    local_14 = (cVar1 != '\0') + 1;
  }
  if ((local_14 == 0) || (local_14 != iVar5)) goto LAB_004a1cb1;
  goto LAB_004a1d53;
LAB_004a1cb1:
  if (*param_1 != '\0') {
    puStack_44 = (undefined4 *)0x28;
    puStack_48 = (undefined4 *)0x4a1cc0;
    local_24 = FUN_005af82d();
    local_8._0_1_ = 2;
    if (local_24 == 0) {
      uVar4 = 0;
    }
    else {
      if ((iVar5 == 2) || (iVar5 == 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = local_24 & 0xffffff00;
      }
      local_2c = (undefined1 *)&puStack_48;
      puStack_48 = puStack_44;
      puStack_44 = (undefined4 *)uVar2;
      FUN_004d076d();
      uVar4 = FUN_004a171a(local_24,param_2);
    }
    local_8._0_1_ = 1;
    puStack_44 = (undefined4 *)0x4a1d0e;
    FUN_004a6f5e();
    iVar5 = unaff_ESI[2];
    unaff_ESI[2] = iVar5 + 1;
    *(undefined4 *)(*unaff_ESI + iVar5 * 4) = uVar4;
  }
  iVar3 = local_1c;
  puStack_44 = (undefined4 *)0x4a1d27;
  FUN_00465544();
  puStack_44 = &param_1;
  puStack_48 = (undefined4 *)0x4a1d32;
  FUN_00465317();
  puStack_44 = (undefined4 *)0x4a1d39;
  FUN_004652d6();
  iVar5 = local_14;
  if (iVar3 == 0xd) {
    puStack_44 = (undefined4 *)0x4a1d46;
    iVar3 = FUN_00460791();
    iVar5 = local_14;
    if (iVar3 == 10) {
      puStack_44 = (undefined4 *)0x4a1d53;
      FUN_0044eba8();
LAB_004a1d53:
      puStack_44 = (undefined4 *)0x4a1d5b;
      FUN_00465b3c();
      iVar5 = local_14;
    }
  }
  goto LAB_004a1d5e;
}

