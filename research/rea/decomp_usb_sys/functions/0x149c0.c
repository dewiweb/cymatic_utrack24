// rea decompile_all
// name: FUN_000149c0
// address: 0x149c0
// body: available
// range: 0x149c0-0x14b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000149c0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar5 = (ulonglong)param_2;
  puVar7 = &DAT_000275b0;
  uVar1 = 32000;
  do {
    if (uVar1 == param_2) goto LAB_000149ef;
    puVar7 = puVar7 + 5;
    uVar1 = *puVar7;
  } while (uVar1 != 0);
  puVar7 = (uint *)0x0;
LAB_000149ef:
  if (puVar7 == (uint *)0x0) {
    uVar2 = 0xe0000034;
  }
  else {
    *(uint *)(param_1 + 0x6fc) = param_2;
    uVar1 = (*(int *)(param_1 + 0x738) * 1000 + 0x7cU) / 0x7d;
    *(uint *)(param_1 + 0x6f8) = uVar1;
    if (uVar1 < 8) {
      *(undefined4 *)(param_1 + 0x6f8) = 8;
    }
    while ((*(byte *)(param_1 + 0x6f8) & 7) != 0) {
      *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
    }
    if (0x80 < *(uint *)(param_1 + 0x6f8)) {
      *(undefined4 *)(param_1 + 0x6f8) = 0x80;
    }
    uVar3 = *(int *)(param_1 + 0x6f8) * param_2 * 0x7d;
    uVar6 = uVar3 / 1000000;
    *(uint *)(param_1 + 0x700) = uVar6;
    uVar1 = uVar6 * 2;
    uVar4 = (ulonglong)(uVar3 + 999999) / 1000000;
    *(uint *)(param_1 + 0x704) = uVar1;
    *(int *)(param_1 + 0x708) = (int)uVar4;
    while ((int)(uVar4 % (ulonglong)puVar7[2]) != 0) {
      *(int *)(param_1 + 0x708) = *(int *)(param_1 + 0x708) + 1;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x708);
    }
    uVar3 = *(uint *)(param_1 + 0x73c);
    *(uint *)(param_1 + 0x70c) = uVar3;
    *(uint *)(param_1 + 0x774) = uVar3;
    *(uint *)(param_1 + 0x768) = param_2;
    *(int *)(param_1 + 0x770) = (int)(((ulonglong)uVar6 * 1000000) / uVar5);
    *(uint *)(param_1 + 0x76c) = uVar6;
    *(int *)(param_1 + 0x778) = (int)(((ulonglong)uVar3 * 1000000) / uVar5);
    uVar3 = 500000;
    if (*(uint *)(param_1 + 0x740) < 500000) {
      uVar3 = *(uint *)(param_1 + 0x740);
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x710) = 0;
    }
    else {
      uVar4 = (uVar3 * uVar5) / 1000000;
      uVar5 = uVar4 & 0xffffffff;
      if ((uint)uVar4 < uVar1) {
        uVar5 = (ulonglong)uVar1;
      }
      for (; (int)(uVar5 % (ulonglong)uVar6) != 0; uVar5 = (ulonglong)((int)uVar5 + 1)) {
      }
      *(int *)(param_1 + 0x710) = (int)uVar5;
      *(uint *)(param_1 + 0x714) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}

