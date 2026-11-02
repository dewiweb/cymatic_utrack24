// rea decompile_all
// name: FUN_00015180
// address: 0x15180
// body: available
// range: 0x15180-0x152d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00015180(longlong *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char local_res8 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  int local_68 [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = *param_4;
  lVar2 = param_1[0x11];
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  uVar4 = (**(code **)(*param_1 + 0x10))
                    (param_1,*(undefined4 *)(param_3 + 0x18),local_res20,local_res18,local_68,
                     local_res8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (local_68[0] <= *(int *)(param_3 + 0x20)) {
    return 0xc000000d;
  }
  if (local_res8[0] == '\0') {
    if ((char)param_1[0x11] == (char)lVar2) goto LAB_000152bb;
    if ((char)param_1[0x11] == '\0') {
      iVar3 = (**(code **)(**(longlong **)(param_1[8] + 0x18) + 0x50))
                        (*(longlong **)(param_1[8] + 0x18),local_res20[0],local_res18[0],
                         (int)param_1[4],param_1 + 9);
    }
    else {
      local_58 = 0x8000000080000000;
      local_50 = 0x8000000080000000;
      local_48 = 0x8000000080000000;
      local_40 = 0x8000000080000000;
      local_38 = 0x8000000080000000;
      local_30 = 0x8000000080000000;
      local_28 = 0x8000000080000000;
      local_20 = 0x8000000080000000;
      iVar3 = (**(code **)(**(longlong **)(param_1[8] + 0x18) + 0x50))
                        (*(longlong **)(param_1[8] + 0x18),local_res20[0],local_res18[0],
                         (int)param_1[4],&local_58);
    }
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1[8] + 0x18) + 0x60))
                      (*(longlong **)(param_1[8] + 0x18),local_res20[0],local_res18[0],
                       (char)param_1[0x11]);
  }
  if (iVar3 < 0) {
    return 0;
  }
LAB_000152bb:
  *(undefined8 *)(param_2 + 0x38) = 4;
  return 0;
}

