// rea decompile_all
// name: FUN_000172e0
// address: 0x172e0
// body: available
// range: 0x172e0-0x17529 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000172e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_00020100 ^ (ulonglong)auStack_68;
  iVar10 = 1000;
  local_44 = 0;
  local_48 = 1000;
  local_40 = 0;
  FUN_0001cf40((ulonglong *)&local_3c,CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),0x10);
  lVar4 = DAT_000201c0;
  local_40 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x20);
  local_44 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20);
  local_3c = 0xffffffff;
  uVar6 = 0;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_30 = 0xffffffff;
  if (local_40 != 0) {
    do {
      local_3c = CONCAT31(local_3c._1_3_,(char)uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_40);
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = DAT_000201c0 + 0x20;
    uVar5 = KeAcquireSpinLockRaiseToDpc(lVar1);
    lVar9 = 0;
    plVar8 = (longlong *)(lVar4 + 8);
    *(undefined1 *)(lVar4 + 0x28) = uVar5;
    do {
      if (lVar9 != 0) {
        plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x18) + lVar9);
        if (plVar3 != plVar8) {
          lVar9 = (longlong)plVar3 - *(longlong *)(lVar4 + 0x18);
          goto LAB_000173dd;
        }
LAB_00017429:
        KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar4 + 0x28));
        goto LAB_00017438;
      }
      if ((longlong *)*plVar8 == plVar8) goto LAB_00017429;
      lVar9 = *plVar8 - *(longlong *)(lVar4 + 0x18);
LAB_000173dd:
      if (lVar9 == 0) goto LAB_00017429;
    } while (*(longlong *)(lVar9 + 0x18) != lVar2);
    KeReleaseSpinLock(lVar1,*(undefined1 *)(lVar4 + 0x28));
    iVar10 = *(int *)(lVar9 + 0x20);
    local_44 = *(undefined4 *)(lVar9 + 0x24);
    local_40 = *(uint *)(lVar9 + 0x28);
    local_3c = *(undefined4 *)(lVar9 + 0x2c);
    local_38 = *(undefined4 *)(lVar9 + 0x30);
    local_34 = *(undefined4 *)(lVar9 + 0x34);
    local_30 = *(undefined4 *)(lVar9 + 0x38);
LAB_00017438:
    if (iVar10 == 0) {
      *(uint *)(param_1 + 0x90) = local_40 << 2;
    }
    else if (iVar10 == 1) {
      *(uint *)(param_1 + 0x90) = local_40 * 2;
    }
    else if (iVar10 == 2) {
      *(uint *)(param_1 + 0x90) = local_40 * 3;
    }
    else if ((iVar10 == 3) || (iVar10 == 1000)) {
      *(undefined4 *)(param_1 + 0x90) = 4;
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
    local_48 = iVar10;
    (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined8 *)(param_1 + 0x78),&local_48);
    uVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40))();
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x28) - 1U < 2) {
      KeSetTimer(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x120),param_1 + 0xe0);
    }
  }
  FUN_0001cb90(local_28 ^ (ulonglong)auStack_68);
  return;
}

