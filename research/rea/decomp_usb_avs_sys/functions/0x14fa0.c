// rea decompile_all
// name: FUN_00014fa0
// address: 0x14fa0
// body: available
// range: 0x14fa0-0x1507c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00014fa0(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char local_res8 [16];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  iVar1 = *(int *)(param_3 + 0x20);
  if (iVar1 < 0) {
    lVar4 = 0x10;
    plVar3 = param_1 + 9;
    do {
      lVar4 = lVar4 + -1;
      *(undefined4 *)plVar3 = *param_4;
      plVar3 = (longlong *)((longlong)plVar3 + 4);
    } while (lVar4 != 0);
  }
  else if (iVar1 < 0x10) {
    *(undefined4 *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x48) = *param_4;
  }
  uVar2 = (**(code **)(*param_1 + 8))
                    (param_1,*(undefined4 *)(param_3 + 0x18),local_28,local_res20,local_res18,
                     local_res8);
  if ((int)uVar2 == 0) {
    if (local_res18[0] <= *(int *)(param_3 + 0x20)) {
      return 0xc000000d;
    }
    if (((local_res8[0] == '\0') && ((char)param_1[0x11] != '\0')) ||
       (uVar2 = (**(code **)(**(longlong **)(param_1[8] + 0x18) + 0x50))
                          (*(longlong **)(param_1[8] + 0x18),local_28[0],local_res20[0],
                           local_res18[0],param_1 + 9), -1 < (int)uVar2)) {
      *(undefined8 *)(param_2 + 0x38) = 4;
    }
  }
  return uVar2;
}

