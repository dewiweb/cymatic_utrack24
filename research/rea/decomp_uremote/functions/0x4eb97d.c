// rea decompile_all
// name: FUN_004eb97d
// address: 0x4eb97d
// body: available
// range: 0x4eb97d-0x4ebbdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004eb97d(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_34;
  undefined4 *local_30;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4eb989;
  if (*(char *)*param_1 != '\0') {
    if (param_5 == 0) {
      local_30 = (undefined4 *)0x4eba22;
      FUN_004ec153();
      local_34 = param_2;
      local_30 = (undefined4 *)FUN_00439b5a(param_2);
      FUN_004e9d4f();
      local_18 = 0;
      param_5 = 0;
      if (0 < *(int *)(in_ECX + 0x104)) {
        local_14 = *(int *)(in_ECX + 0xfc);
        do {
          iVar1 = local_18;
          local_30 = (undefined4 *)0x4eba68;
          local_18 = FUN_004e8382();
          local_18 = local_18 + iVar1;
          if (param_2 == iVar1) {
            local_30 = (undefined4 *)0x14;
            local_34 = 0x4eba97;
            local_14 = FUN_005af82d();
            uVar3 = 0;
            local_8 = 0;
            if (local_14 != 0) {
              local_1c = (undefined1 *)&local_34;
              local_34 = (int)local_30;
              local_30 = (undefined4 *)*(undefined4 *)(in_ECX + 0x110);
              FUN_004d076d();
              uVar3 = FUN_004e7f09(local_14,param_1);
            }
            local_8 = 0xffffffff;
            local_34 = 0x4ebada;
            local_30 = (undefined4 *)uVar3;
            FUN_004f66a2();
            break;
          }
          if ((iVar1 < param_2) && (param_2 < local_18)) {
            local_30 = (undefined4 *)(param_2 - iVar1);
            local_34 = 0x4ebae9;
            FUN_004ec4bd();
            local_30 = (undefined4 *)0x14;
            local_34 = 0x4ebaf0;
            iVar1 = FUN_005af82d();
            local_8 = 1;
            if (iVar1 == 0) {
              local_30 = (undefined4 *)0x0;
            }
            else {
              local_1c = (undefined1 *)&local_34;
              local_34 = (int)local_30;
              local_30 = (undefined4 *)*(undefined4 *)(in_ECX + 0x110);
              FUN_004d076d();
              local_30 = (undefined4 *)FUN_004e7f09(iVar1,param_1);
            }
            local_8 = 0xffffffff;
            local_34 = 0x4ebb38;
            FUN_004f66a2();
            break;
          }
          param_5 = param_5 + 1;
          local_14 = local_14 + 4;
        } while (param_5 < *(int *)(in_ECX + 0x104));
      }
      if (local_18 == param_2) {
        local_30 = (undefined4 *)0x14;
        local_34 = 0x4ebb47;
        iVar1 = FUN_005af82d();
        local_8 = 2;
        if (iVar1 != 0) {
          local_1c = (undefined1 *)&local_34;
          local_34 = (int)local_30;
          local_30 = (undefined4 *)*(undefined4 *)(in_ECX + 0x110);
          FUN_004d076d();
          FUN_004e7f09(iVar1,param_1);
        }
        local_8 = 0xffffffff;
        local_30 = (undefined4 *)0x4ebb8d;
        FUN_004f7022();
      }
      local_34 = 0x4ebb96;
      FUN_004ec4ea();
      *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
      *(byte *)(in_ECX + 0x95) = *(byte *)(in_ECX + 0x95) | 8;
      local_30 = (undefined4 *)0x4ebbab;
      FUN_004e9f79();
      local_30 = (undefined4 *)0x0;
      local_34 = param_6;
      FUN_004ea237();
      local_30 = (undefined4 *)0x4ebbbc;
      FUN_004ec153();
      local_34 = param_2;
      local_30 = (undefined4 *)FUN_00439b5a(param_2);
      FUN_004e9d4f();
    }
    else {
      local_30 = (undefined4 *)0x4eb9a5;
      iVar1 = FUN_00472b6d();
      if (100 < iVar1) {
        local_30 = (undefined4 *)0x4eb9b1;
        FUN_004e9764();
      }
      local_30 = (undefined4 *)0x20;
      local_34 = 0x4eb9b8;
      puVar2 = (undefined4 *)FUN_005af82d();
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        local_30 = (undefined4 *)0x4eb9ca;
        FUN_004d076d();
        uVar3 = *(undefined4 *)(in_ECX + 0xf8);
        local_30 = param_1;
        *puVar2 = juce::TextEditor::InsertAction::vftable;
        puVar2[1] = in_ECX;
        local_34 = 0x4eb9e4;
        FUN_004652e4();
        puVar2[3] = param_2;
        puVar2[5] = param_6;
        puVar2[4] = uVar3;
        local_30 = (undefined4 *)0x4eb9fe;
        FUN_0049f50b();
        local_30 = (undefined4 *)0x4eba09;
        FUN_004d076d();
      }
      local_34 = 0x4eba16;
      local_30 = puVar2;
      FUN_004727fe();
    }
  }
  return;
}

