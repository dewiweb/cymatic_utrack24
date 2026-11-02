// rea decompile_all
// name: FUN_000140f0
// address: 0x140f0
// body: available
// range: 0x140f0-0x141c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_000140f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong unaff_RDI;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (((*(char *)(*(longlong *)(lVar2 + 0x10) + 0x30) == '\0') &&
      (uVar6 = FUN_00011590(lVar2), -1 < (int)uVar6)) &&
     (iVar5 = (**(code **)**(undefined8 **)(lVar2 + 0x18))(), iVar5 == 0x613)) {
    plVar3 = *(longlong **)(lVar2 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      iVar5 = *(int *)(lVar2 + 0x28);
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar2 + 0x20);
      cVar4 = IoIsWdmVersionAvailable(6,0);
      if (cVar4 != '\0') {
        iVar1 = *(int *)(lVar2 + 0x28);
        *(int *)(lVar2 + 0x24) = iVar1;
        *(int *)(lVar2 + 0x20) = iVar1;
        if (iVar5 != iVar1) {
          FUN_00013850(lVar2,'\x01');
          FUN_00013850(lVar2,'\0');
        }
      }
    }
    *(undefined4 *)(lVar2 + 0x4100) = 0x32;
    iVar5 = FUN_000116e0(lVar2,1);
    if (-1 < iVar5) {
      return unaff_RDI;
    }
  }
  if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0x18) + 8))();
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  return unaff_RDI;
}

