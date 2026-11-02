// rea decompile_all
// name: FUN_004424ff
// address: 0x4424ff
// body: available
// range: 0x4424ff-0x442901 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004424ff(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x44250b;
  iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x7c);
  iVar2 = iVar1 + 0x1e0;
  if ((*(int *)(iVar1 + 0x224) == *(int *)(in_ECX + 0xc)) &&
     (*(int *)(iVar1 + 0x230) == *(int *)(in_ECX + 0x10))) {
    return;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(iVar1 + 0x224);
  local_18 = in_ECX + 0x4f8;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(iVar1 + 0x230);
  local_20 = iVar2;
  FUN_00440831();
  local_1c = in_ECX + 0x698;
  FUN_00440831();
  local_11 = FUN_0045f710();
  iVar1 = *(int *)(iVar1 + 0x224);
  if (iVar1 < 0) goto LAB_00442817;
  if (iVar1 < 2) {
    FUN_0043ffa6();
    FUN_0043ffa6();
    bVar3 = local_11 == '\0';
    FUN_004401d8(in_ECX + 0x18,bVar3);
    FUN_004401d8(in_ECX + 0x1b8,bVar3);
    FUN_004401d8(in_ECX + 0x358,0);
    FUN_004401d8(local_18,1);
  }
  else {
    if (iVar1 == 2) {
      FUN_004401d8(in_ECX + 0x18,0);
      FUN_004401d8(in_ECX + 0x1b8,0);
      FUN_004401d8(in_ECX + 0x358,0);
      FUN_004401d8(local_18,1);
      FUN_0043ffa6();
      FUN_0046537e(&local_24);
      local_8 = 0;
LAB_0044268b:
      FUN_00440831();
      local_8 = 0xffffffff;
      FUN_004652d6();
    }
    else {
      if (iVar1 == 3) {
        FUN_004401d8(in_ECX + 0x18,0);
        FUN_004401d8(in_ECX + 0x1b8,0);
        FUN_004401d8(in_ECX + 0x358,0);
        FUN_004401d8(local_18,0);
        FUN_004401d8(local_1c,1);
        FUN_0043ffa6();
        FUN_0046537e(&local_24);
        local_8 = 1;
        FUN_00440831();
        local_8 = 0xffffffff;
        FUN_004652d6();
        iVar2 = local_20;
        goto LAB_00442817;
      }
      if (iVar1 != 4) {
        if (iVar1 != 5) {
          if (iVar1 == 6) {
            FUN_004401d8(in_ECX + 0x18,1);
            FUN_004401d8(in_ECX + 0x1b8,1);
            FUN_004401d8(in_ECX + 0x358,1);
            FUN_004401f3(*(int *)(in_ECX + 8) + 0x605c);
            FUN_004401d8(local_18,1);
            FUN_004401d8(local_1c,1);
            FUN_0043ffa6();
            iVar2 = local_20;
          }
          goto LAB_00442817;
        }
        local_24 = CONCAT31(local_24._1_3_,local_11 == '\0');
        FUN_004401d8(in_ECX + 0x18,local_24);
        FUN_004401d8(in_ECX + 0x1b8,local_24);
        FUN_004401d8(in_ECX + 0x358,1);
        iVar1 = *(int *)(in_ECX + 8) + 0x605c;
        FUN_0045f710(iVar1);
        FUN_004401f3(iVar1);
        FUN_004401d8(local_18,1);
        FUN_0043ffa6();
        FUN_0046537e(&local_24);
        local_8 = 2;
        goto LAB_0044268b;
      }
      uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),local_11 == '\0');
      FUN_004401d8(in_ECX + 0x18,uVar4);
      FUN_004401d8(in_ECX + 0x1b8,uVar4);
      FUN_004401d8(in_ECX + 0x358,1);
      FUN_004401f3(*(int *)(in_ECX + 8) + 0x605c);
      FUN_004401d8(local_18,1);
      FUN_0043ffa6();
    }
    bVar3 = false;
  }
  FUN_004401d8(local_1c,bVar3);
  iVar2 = local_20;
LAB_00442817:
  iVar1 = local_18;
  if (*(int *)(iVar2 + 0x50) == 3) {
    FUN_0043ffa6();
    FUN_0046537e(&local_24);
    local_8 = 3;
    FUN_00440831();
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_004401d8(in_ECX + 0x18,0);
    FUN_004401d8(in_ECX + 0x1b8,0);
    FUN_004401d8(in_ECX + 0x358,0);
    FUN_004401d8(local_18,0);
    uVar4 = 1;
  }
  else {
    if (*(int *)(iVar2 + 0x50) != 4) {
      return;
    }
    FUN_0043ffa6();
    FUN_0046537e(&local_24);
    local_8 = 4;
    FUN_00440831();
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_004401d8(in_ECX + 0x18,0);
    FUN_004401d8(in_ECX + 0x1b8,0);
    FUN_004401d8(in_ECX + 0x358,0);
    FUN_004401d8(iVar1,1);
    uVar4 = 0;
  }
  FUN_004401d8(local_1c,uVar4);
  return;
}

