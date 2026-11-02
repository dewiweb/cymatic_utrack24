// rea decompile_all
// name: FUN_0001954c
// address: 0x1954c
// body: available
// range: 0x1954c-0x1962f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001954c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int extraout_EAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res8;
  longlong local_res18;
  
  lVar4 = 0;
  plVar1 = (longlong *)(param_1 + 0x1448);
  do {
    if (lVar4 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1458) + lVar4);
      if (plVar2 != plVar1) {
        lVar4 = (longlong)plVar2 - *(longlong *)(param_1 + 0x1458);
        goto LAB_0001958d;
      }
LAB_0001959c:
      lVar4 = 0;
      break;
    }
    if ((longlong *)*plVar1 == plVar1) goto LAB_0001959c;
    lVar4 = *plVar1 - *(longlong *)(param_1 + 0x1458);
LAB_0001958d:
    if (lVar4 == 0) goto LAB_0001959c;
  } while (*(char *)(lVar4 + 0x38) != *(char *)(param_2 + 8));
  if (lVar4 == 0) {
    uVar3 = 0xe0000030;
  }
  else {
    uVar3 = FUN_0001d928((longlong *)(param_1 + 0x1408),*(byte *)(lVar4 + 0x48));
    uVar3 = uVar3 & 0xff;
    local_res18 = 0;
    local_res8 = 0;
    *(uint *)(param_1 + 0x19a0) = (uint)*(byte *)(lVar4 + 0x48);
    FUN_00016e98(&local_res18,&local_res8,param_1);
    if (-1 < extraout_EAX) {
      FUN_0001151c(&local_res8,L"ClockSourceIndex",*(undefined4 *)(param_1 + 0x19a0));
    }
    if (local_res8 != 0) {
      ZwClose();
    }
    FUN_00016db0(&local_res18);
  }
  return uVar3;
}

