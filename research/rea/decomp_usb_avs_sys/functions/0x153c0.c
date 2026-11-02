// rea decompile_all
// name: FUN_000153c0
// address: 0x153c0
// body: available
// range: 0x153c0-0x15513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000153c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  FUN_0001cf40((ulonglong *)(param_1 + 0x20),0,0x68);
  uVar5 = *(uint *)(param_1 + 0xb0);
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = 0x88;
  if (uVar5 != 0) {
    lVar3 = ExAllocatePoolWithTag(0,(ulonglong)uVar5 * 0x88,0x42737661);
    *(longlong *)(param_1 + 0x88) = lVar3;
    if (lVar3 == 0) {
      return 0xc000009a;
    }
    plVar1 = (longlong *)(param_1 + 0x90);
    uVar4 = uVar8;
    if ((longlong *)*plVar1 != plVar1) {
      uVar4 = *plVar1 - *(longlong *)(param_1 + 0xa0);
    }
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0xb0) != 0) {
      do {
        memcpy((void *)(*(longlong *)(param_1 + 0x88) + uVar7),(void *)(uVar4 + 0x138),0x88);
        if (uVar4 == 0) {
          uVar4 = uVar8;
          if ((longlong *)*plVar1 != plVar1) {
            uVar4 = *plVar1 - *(longlong *)(param_1 + 0xa0);
          }
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + uVar4);
          uVar4 = uVar8;
          if (plVar2 != plVar1) {
            uVar4 = (longlong)plVar2 - *(longlong *)(param_1 + 0xa0);
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 0x88;
      } while (uVar5 < *(uint *)(param_1 + 0xb0));
    }
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x88);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x18;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return 0;
}

