// rea decompile_all
// name: FUN_00015fb0
// address: 0x15fb0
// body: available
// range: 0x15fb0-0x160a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00015fb0(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = DAT_00029268;
  *param_2 = *(undefined4 *)(DAT_00029268 + 0x6fc);
  uVar3 = FUN_00014794(lVar6);
  param_2[1] = 0;
  piVar4 = &DAT_000275b0;
  do {
    if (((piVar4[4] & uVar3) != 0) && ((uint)param_2[1] < 8)) {
      param_2[(ulonglong)(uint)param_2[1] + 2] = *piVar4;
      param_2[1] = param_2[1] + 1;
    }
    piVar4 = piVar4 + 5;
  } while (*piVar4 != 0);
  param_2[10] = *(undefined4 *)(lVar6 + 0x700);
  param_2[0xb] = *(undefined4 *)(lVar6 + 0x704);
  param_2[0xc] = *(undefined4 *)(lVar6 + 0x70c);
  plVar1 = *(longlong **)(lVar6 + 0xd0);
  if ((plVar1 == (longlong *)(lVar6 + 0xd0)) ||
     (lVar6 = (longlong)plVar1 - *(longlong *)(lVar6 + 0xe0), lVar6 == 0)) {
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  else {
    lVar5 = 0;
    plVar1 = (longlong *)(lVar6 + 0x1448);
    do {
      if (lVar5 != 0) {
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x1458) + lVar5);
        if (plVar2 != plVar1) {
          lVar5 = (longlong)plVar2 - *(longlong *)(lVar6 + 0x1458);
          goto LAB_00016063;
        }
LAB_00016079:
        lVar5 = 0;
        break;
      }
      if ((longlong *)*plVar1 == plVar1) goto LAB_00016079;
      lVar5 = *plVar1 - *(longlong *)(lVar6 + 0x1458);
LAB_00016063:
      if (lVar5 == 0) goto LAB_00016079;
    } while (*(char *)(lVar5 + 0x38) != *(char *)(*(longlong *)(lVar6 + 0x1468) + 3));
    strncpy((char *)(param_2 + 0xd),(char *)(lVar5 + 0x10),0x28);
    *(undefined1 *)((longlong)param_2 + 0x5b) = 0;
  }
  return 0;
}

