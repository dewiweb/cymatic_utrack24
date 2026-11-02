// rea decompile_all
// name: FUN_000207d0
// address: 0x207d0
// body: available
// range: 0x207d0-0x20915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000207d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar4 = *(longlong *)(param_3 + 0x30);
  lVar5 = *(longlong *)(param_3 + 0x48);
  iVar2 = *(int *)(param_2 + 0x30);
  uVar8 = (ulonglong)*(uint *)(lVar4 + 0x84);
  iVar3 = *(int *)(lVar4 + 4);
  iVar9 = 0;
  if (*(uint *)(lVar4 + 0x84) != 0) {
    do {
      if (*(int *)(lVar4 + 0x94) < 0) {
        iVar9 = iVar9 + 1;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_0001f764(param_3);
  lVar6 = DAT_00029268;
  uVar7 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar6 + 0x58) = uVar7;
  if (((iVar3 < 0) || (iVar2 < 0)) || (iVar9 != 0)) {
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    *(int *)(lVar5 + 0xd8) = *(int *)(lVar5 + 0xd8) + 1;
    *(int *)(lVar5 + 0x4c) = iVar3;
    *(int *)(lVar5 + 0x50) = iVar2;
  }
  else {
    if (1 < *(int *)(lVar5 + 0xb8)) {
      *(undefined4 *)(lVar5 + 0xd8) = 0;
    }
    *(int *)(lVar5 + 0x240) = *(int *)(lVar4 + 0x80) * 8 - *(int *)(param_3 + 0x50);
  }
  KeReleaseSpinLock(DAT_00029268 + 0x50,*(undefined1 *)(DAT_00029268 + 0x58));
  lVar4 = DAT_00029268;
  if (((*(char *)(lVar5 + 0xb4) != '\0') && (4 < *(int *)(lVar5 + 0xd8))) && (iVar3 != -0x3fff9000))
  {
    *(undefined4 *)(lVar5 + 0xd8) = 0;
    FUN_00015dac(lVar4,1);
  }
  LOCK();
  piVar1 = (int *)(lVar5 + 0xb8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    KeSetEvent(lVar5 + 0xc0,0,0);
  }
  if (*(int *)(lVar5 + 0xb8) == 0) {
    *(int *)(lVar5 + 0xd8) = *(int *)(lVar5 + 0xd8) + 1;
  }
  return 0xc0000016;
}

