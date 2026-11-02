// rea decompile_all
// name: FUN_00018dc4
// address: 0x18dc4
// body: available
// range: 0x18dc4-0x18ecc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18ec8 to 0x18ed4 FUN_00018ed4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00018dc4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  lVar7 = DAT_00029268;
  uVar6 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar7 + 0x58) = uVar6;
  FUN_00018c98(param_1);
  FUN_00018d88(param_1);
  KeReleaseSpinLock(lVar7 + 0x50,*(undefined1 *)(lVar7 + 0x58));
  plVar1 = (longlong *)(param_1 + 0x60);
  while ((longlong *)*plVar1 != plVar1) {
    if ((longlong *)*plVar1 == plVar1) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1 - *(longlong *)(param_1 + 0x70);
    }
    plVar3 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x70));
    *(longlong *)plVar3[1] = *plVar3;
    *(longlong *)(*plVar3 + 8) = plVar3[1];
    plVar3[1] = (longlong)plVar3;
    *plVar3 = (longlong)plVar3;
    lVar4 = *(longlong *)(lVar7 + 0x20);
    if (0 < *(int *)(lVar4 + 0x48)) {
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + -1;
    }
    lVar5 = DAT_00029268;
    piVar2 = (int *)(*(longlong *)(lVar4 + 0x28) + 0x28);
    *piVar2 = *piVar2 + -1;
    *(int *)(lVar5 + 0x780) = *(int *)(lVar5 + 0x780) + -1;
    FUN_000242f8(lVar7);
    FUN_000138d8((longlong *)(lVar7 + 0x28));
    ExFreePoolWithTag(lVar7,0);
  }
  FUN_0002358c(DAT_00029268 + 0x120);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    ObfDereferenceObject();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_00018ed4(param_1);
  return;
}

