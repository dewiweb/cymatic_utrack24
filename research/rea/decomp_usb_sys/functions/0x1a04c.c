// rea decompile_all
// name: FUN_0001a04c
// address: 0x1a04c
// body: available
// range: 0x1a04c-0x1a16a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a04c(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = DAT_00029268 + 0x18;
  uVar5 = 0;
  KeWaitForSingleObject(lVar4);
  if (*(char *)(param_1 + 0x1bb9) == '\0') {
    FUN_00014e7c(DAT_00029268,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar1 = DAT_00029268;
    *(undefined4 *)(param_1 + 0xe8) = 1;
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)(param_1 + 0xc0)) {
      plVar3 = (longlong *)(param_1 + *(longlong *)(lVar1 + 0xe0));
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
    }
    uVar2 = KeAcquireSpinLockRaiseToDpc(lVar1 + 0x50);
    plVar3 = (longlong *)(DAT_00029268 + 0x120);
    *(undefined1 *)(lVar1 + 0x58) = uVar2;
    FUN_0002375c(plVar3,param_1);
    KeReleaseSpinLock(lVar1 + 0x50);
    FUN_00014cc0(DAT_00029268,0,uVar5);
    FUN_00015e00(DAT_00029268,3,0,0,3);
  }
  else {
    FUN_00012400(param_1);
  }
  FUN_0001b95c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar4,0);
  return;
}

