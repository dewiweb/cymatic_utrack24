// rea decompile_all
// name: FUN_00024920
// address: 0x24920
// body: available
// range: 0x24920-0x24a2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024920(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  uVar5 = 0;
  param_1[1] = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (uVar6 = uVar5, *param_1 != 0)) {
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar3 = *(longlong *)(uVar6 + 0x40 + lVar2);
      if (lVar3 != 0) {
        ExFreePoolWithTag(lVar3,0);
        *(undefined8 *)(uVar6 + 0x40 + lVar2) = 0;
      }
      if (*(longlong *)(uVar6 + 0x48 + lVar2) != 0) {
        ExFreePoolWithTag();
        *(undefined8 *)(uVar6 + 0x48 + lVar2) = 0;
      }
      if (*(longlong *)(uVar6 + 0x60 + lVar2) != 0) {
        IoFreeIrp();
        *(undefined8 *)(uVar6 + 0x60 + lVar2) = 0;
      }
      if (*(longlong *)(uVar6 + 0x58 + lVar2) != 0) {
        *(undefined8 *)(uVar6 + 0x58 + lVar2) = 0;
        IoFreeMdl();
      }
      *(undefined8 *)(uVar6 + 0x18 + lVar2) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x70;
    } while (uVar4 < *param_1);
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 4),0);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 8),0);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  puVar1 = param_1 + 10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint **)(param_1 + 0xc) = puVar1;
  *(uint **)puVar1 = puVar1;
  return;
}

