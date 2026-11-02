// rea decompile_all
// name: FUN_0001eb88
// address: 0x1eb88
// body: available
// range: 0x1eb88-0x1ec47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001eb88(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  short *psVar4;
  short sVar5;
  short *psVar6;
  
  lVar2 = DAT_00029268;
  *param_2 = 32000;
  param_2[1] = 0x2ee00;
  param_2[2] = *(undefined4 *)(lVar2 + 0x6fc);
  param_2[3] = *(undefined4 *)(lVar2 + 0x700);
  uVar1 = *(undefined4 *)(lVar2 + 0x710);
  psVar4 = (short *)(param_2 + 5);
  *psVar4 = 0;
  param_2[4] = uVar1;
  psVar6 = *(short **)(param_1 + 0x38);
  if (psVar6 != (short *)0x0) {
    sVar5 = *psVar6;
    if (sVar5 != 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (0x4f < uVar3) break;
        psVar6 = psVar6 + 1;
        *psVar4 = sVar5;
        sVar5 = *psVar6;
        psVar4 = psVar4 + 1;
      } while (sVar5 != 0);
    }
    *psVar4 = 0;
  }
  psVar4 = (short *)(param_2 + 0x2d);
  *psVar4 = 0;
  psVar6 = *(short **)(param_1 + 0x40);
  if (psVar6 != (short *)0x0) {
    sVar5 = *psVar6;
    if (sVar5 != 0) {
      uVar3 = 1;
      do {
        if (0x77 < uVar3) break;
        psVar6 = psVar6 + 1;
        *psVar4 = sVar5;
        uVar3 = uVar3 + 1;
        sVar5 = *psVar6;
        psVar4 = psVar4 + 1;
      } while (sVar5 != 0);
    }
    *psVar4 = 0;
  }
  return;
}

