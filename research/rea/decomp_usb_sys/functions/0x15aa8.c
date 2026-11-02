// rea decompile_all
// name: FUN_00015aa8
// address: 0x15aa8
// body: available
// range: 0x15aa8-0x15b50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00015aa8(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar3 = DAT_00029268;
  iVar4 = 0;
  plVar6 = (longlong *)(DAT_00029268 + 0xd0);
  if ((longlong *)*plVar6 == plVar6) {
    return -0x1fffffff;
  }
  uVar5 = 0;
  while( true ) {
    if (uVar5 == 0) {
      if ((longlong *)*plVar6 == plVar6) {
        return iVar4;
      }
      uVar5 = *plVar6 - *(longlong *)(lVar3 + 0xe0);
    }
    else {
      lVar1 = *(longlong *)(lVar3 + 0xe0);
      plVar2 = *(longlong **)(lVar1 + uVar5);
      if (plVar2 == plVar6) {
        return iVar4;
      }
      uVar5 = (longlong)plVar2 - lVar1;
    }
    if (uVar5 == 0) break;
    if (*(char *)(uVar5 + 0x1b15) == '\0') {
      if (*(char *)(uVar5 + 0x1c) == '\0') {
        iVar4 = -0x1fffffb0;
      }
      else {
        iVar4 = FUN_0001984c(uVar5);
        if (-1 < iVar4) {
          *(undefined1 *)(uVar5 + 0x1b15) = 1;
          *(undefined4 *)(uVar5 + 0xe8) = 2;
          FUN_00012380(uVar5);
        }
      }
    }
  }
  return iVar4;
}

