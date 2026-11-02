// rea decompile_all
// name: FUN_0001bca0
// address: 0x1bca0
// body: available
// range: 0x1bca0-0x1bd84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001bca0(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char local_res20 [8];
  int local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  lVar3 = KsGetFilterFromIrp();
  if (lVar3 == 0) {
    return 0xc00000bb;
  }
  plVar1 = *(longlong **)(lVar3 + 0x10);
  uVar4 = (**(code **)(*plVar1 + 0x10))
                    (plVar1,*(undefined4 *)(param_2 + 0x18),local_10,&local_14,&local_18,local_res20
                    );
  if ((int)uVar4 == 0) {
    if (*(int *)(param_2 + 0x20) < local_18) {
      if (((local_res20[0] == '\0') || (*(char *)((longlong)plVar1 + 0x89) != '\0')) ||
         (iVar2 = (**(code **)(**(longlong **)(plVar1[8] + 0x18) + 0x58))
                            (*(longlong **)(plVar1[8] + 0x18),local_10[0],local_14,plVar1 + 0x11),
         -1 < iVar2)) {
        *(undefined1 *)((longlong)plVar1 + 0x89) = 1;
        *param_3 = (uint)*(byte *)(plVar1 + 0x11);
        *(undefined8 *)(param_1 + 0x38) = 4;
      }
      return 0;
    }
    return 0xc000000d;
  }
  return uVar4;
}

