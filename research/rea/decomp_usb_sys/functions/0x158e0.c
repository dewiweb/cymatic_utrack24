// rea decompile_all
// name: FUN_000158e0
// address: 0x158e0
// body: available
// range: 0x158e0-0x15a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000158e0(undefined4 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = DAT_00029268;
  plVar1 = (longlong *)(DAT_00029268 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    return 0xe0000001;
  }
  uVar4 = 0;
  lVar5 = DAT_00029268;
  while( true ) {
    if (uVar4 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
        return param_1;
      }
      uVar4 = *plVar1 - *(longlong *)(lVar3 + 0xe0);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0xe0) + uVar4);
      if (plVar2 == plVar1) {
        return param_1;
      }
      uVar4 = (longlong)plVar2 - *(longlong *)(lVar3 + 0xe0);
    }
    if (uVar4 == 0) break;
    if ((*(char *)(uVar4 + 0x1b14) == '\0') && (*(char *)(uVar4 + 0x1b12) != '\0')) {
      if (*(char *)(uVar4 + 0x1c) == '\0') {
        param_1 = 0xe0000050;
        FUN_000118cc(*(undefined8 *)(lVar5 + 0x10),0xe0070003,"CreateAllBoundles device removed.");
        lVar5 = DAT_00029268;
      }
      else {
        if (*(longlong *)(uVar4 + 0x1410) != 0) {
          FUN_0001b09c(uVar4,*(longlong *)(uVar4 + 0x1410));
        }
        if (*(longlong *)(uVar4 + 0x1418) != 0) {
          FUN_0001b09c(uVar4,*(longlong *)(uVar4 + 0x1418));
        }
        if (*(longlong **)(uVar4 + 0x1420) != (longlong *)0x0) {
          FUN_0001b1c8(uVar4,*(longlong **)(uVar4 + 0x1420));
        }
        if (*(longlong **)(uVar4 + 0x1428) != (longlong *)0x0) {
          FUN_0001b1c8(uVar4,*(longlong **)(uVar4 + 0x1428));
        }
        param_1 = 0;
        FUN_00023948((longlong *)(lVar3 + 0x120),uVar4);
        lVar5 = DAT_00029268;
        FUN_000240cc((longlong *)(DAT_00029268 + 0x120),uVar4,(uint *)(DAT_00029268 + 0x1f8));
      }
    }
  }
  return param_1;
}

