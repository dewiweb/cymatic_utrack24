// rea decompile_all
// name: FUN_0001693c
// address: 0x1693c
// body: available
// range: 0x1693c-0x16a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001693c(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  lVar1 = DAT_00029268;
  lVar3 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),*param_2);
  if (lVar3 == 0) {
    uVar4 = 0xe0000040;
  }
  else if (*(char *)(lVar3 + 0x78) == '\0') {
    uVar2 = KeAcquireSpinLockRaiseToDpc(lVar1 + 0x50);
    uVar7 = 0;
    puVar8 = param_3 + 0x31;
    *(undefined1 *)(lVar1 + 0x58) = uVar2;
    uVar9 = 0;
    do {
      uVar6 = 1 << ((byte)uVar7 & 0x1f);
      uVar5 = uVar9 >> 5;
      *(bool *)(puVar8 + -0x30) = (*(uint *)(lVar3 + 0x13c + uVar5 * 4) & uVar6) != 0;
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + 1;
      *(bool *)puVar8 = (*(uint *)(lVar3 + 0x154 + uVar5 * 4) & uVar6) != 0;
      puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    } while (uVar7 < 0xc0);
    *(bool *)(param_3 + 0x61) = *(int *)(lVar3 + 0x134) != 0;
    *(bool *)((longlong)param_3 + 0x185) = *(int *)(lVar3 + 0x138) != 0;
    *param_3 = *(undefined4 *)(lVar3 + 0x1c);
    KeReleaseSpinLock(lVar1 + 0x50,CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(lVar1 + 0x58)));
    uVar4 = 0;
  }
  else {
    uVar4 = 0xe0000023;
  }
  return uVar4;
}

